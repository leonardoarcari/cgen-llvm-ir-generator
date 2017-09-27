#!/usr/bin/env python3

import argparse
import subprocess
from os import SEEK_SET
from pathlib import Path


def gen_include_guards(header):
    guard_name = '_'
    for c in header:
        if c.isupper():
            guard_name += '_'
        guard_name += c
    guard_name += '_H_'
    guard_name = guard_name.upper()
    return ('#ifndef ' + guard_name + '\n#define ' + guard_name)


def copy_commons(params):
    common_p = Path('./pseudo-generated/cgen-ir-common.h')
    dst_common = Path(params['destpath'], 'cgen-ir-common.h')
    with common_p.open() as src:
        with dst_common.open(mode='w') as dst:
            for line in src:
                dst.write(line)


def add_includes_dec_h(params):
    dec_h = Path(params['decoder-header'])
    inc_guards = gen_include_guards(dec_h.stem)
    with dec_h.open(mode='r+') as dst:
        content = ''
        for line in dst:
            content += line
        dst.seek(0, SEEK_SET)
        dst.write(inc_guards + '\n\n')
        dst.write('#include \"cgen-ir-common.h\"\n\n')
        dst.write(content)
        dst.write('\n#endif\n')


def add_includes_dec_src(params):
    dec_src = Path(params['decoder-src'])
    dec_h = Path(params['decoder-header'])
    with dec_src.open(mode='r+') as dst:
        content = ''
        for line in dst:
            content += line
        dst.seek(0, SEEK_SET)
        dst.write('#include \"' + dec_h.name + '\"\n\n')
        dst.write(content)


def clang_format_all(params):
    cf_command = ('clang-format -i -style=LLVM -sort-includes ' +
                  params['destpath'] + '/*.cpp ' +
                  params['destpath'] + '/*.h')
    try:
        subprocess.run(cf_command, shell=True, check=True,
                       stderr=subprocess.STDOUT)
    except subprocess.CalledProcessError:
        print('Could not run clang-format on generated source files.',
              'clang-format may be missing... I\'m sorry')


def generate_all(params):
    guile_command = ('guile -l ./cgen/guile.scm ./cgen/cgen-ir.scm ' +
                     '-v -v -v -s ./cgen -a ' + params['arch'] +
                     ' -m ' + params['machine'] +
                     ' -T ' + params['decoder-header'] +
                     ' -D ' + params['decoder-src'] +
                     ' -R ' + params['registers-header'])
    try:
        subprocess.run(guile_command, shell=True, check=True,
                       stderr=subprocess.STDOUT)
    except subprocess.CalledProcessError:
        print("Something went wrong in generating C++ code\n")
        exit(1)

    print('\nI correctly generated all your source files!',
          '\nLet me perform some gluing...')
    # Copy common source files to destination path
    copy_commons(params)
    print('  Common sources copied...')

    # Add includes to decoder-header
    add_includes_dec_h(params)
    print('  Added includes to decoder header...')

    # Add include to decoder-source
    add_includes_dec_src(params)
    print('  Added includes to decoder source')

    # Clang-format generated C++ code
    print('  Let me clang-format your sources...', end='')
    clang_format_all(params)
    print('You\'re welcome!')


def build_guile_params(args):
    params = {}
    archPath = Path(args.arch).resolve()
    target_name = archPath.stem + args.machine.capitalize()
    params['arch'] = args.arch
    params['machine'] = args.machine
    params['destpath'] = args.dstPath
    if args.dec_h:
        params['decoder-header'] = args.dstPath + args.dec_h
    else:
        params['decoder-header'] = args.dstPath + target_name + 'Decoder.h'
    if args.dec_cpp:
        params['decoder-src'] = args.dstPath + args.dec_cpp
    else:
        params['decoder-src'] = args.dstPath + target_name + 'Decoder.cpp'
    if args.reg_h:
        params['registers-header'] = args.dstPath + args.reg_h
    else:
        params['registers-header'] = args.dstPath + target_name + 'Registers.h'
    return params


def main():
    prog_desc = 'A generator of LLVM-IR generators. Yes.'
    parser = argparse.ArgumentParser(description=prog_desc)

    dst_desc = 'Destination path'
    a_desc = '.cpu description file'
    m_desc = 'Variant of the architecture'
    t_desc = 'Decoder header filename'
    d_desc = 'Decoder source filename'
    r_desc = 'Registers allocation source filename'

    parser.add_argument('-a', '--arch', help=a_desc, required=True)
    parser.add_argument('-m', '--machine', help=m_desc, required=True)
    parser.add_argument('dstPath', help=dst_desc, default='./')
    parser.add_argument('-t', '--decoder-header', dest='dec_h', help=t_desc)
    parser.add_argument('-d', '--decoder-src', dest='dec_cpp', help=d_desc)
    parser.add_argument('-r', '--registers-header', dest='reg_h', help=r_desc)
    args = parser.parse_args()
    params = build_guile_params(args)
    generate_all(params)


if __name__ == '__main__':
    main()

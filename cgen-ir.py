#!/usr/bin/env python3

import argparse
import subprocess
from pathlib import Path


def generate_all(params):
    guile_command = ('guile -l ./cgen/guile.scm ./cgen/cgen-ir.scm ' +
                     '-v -v -v -s ./cgen -a ' + params['arch'] +
                     ' -m ' + params['machine'] +
                     ' -T ' + params['decoder-header'] +
                     ' -D ' + params['decoder-src'] +
                     ' -R ' + params['registers-header'])
    proc = subprocess.run(guile_command, shell=True, check=True,
                          stderr=subprocess.STDOUT)
    print(proc)


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

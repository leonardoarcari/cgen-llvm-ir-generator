#!/usr/bin/env python3

import argparse
import subprocess
from os import SEEK_SET
from pathlib import Path

MAIN_SRC = """#include <iostream>

int main(int argc, char const *argv[])
{
    CgenIRContext a(argv[1]);
    while (a.hasNext()) {
        auto word =
            a.readWord<Instruction::wordType,
                       Instruction::chunkType,
                       Instruction::endianness>(0);
        std::cout << std::hex << word << \'\\n\';
        std::unique_ptr<Instruction> insn(nullptr);
        int bytes_read = 0;
        std::tie(insn, bytes_read) = Instruction::make(word, a);
        std::cout << insn->dump() << \'\\n\';
        try {
            a.incrementPc(sizeof(Instruction::wordType) + bytes_read);
        } catch (std::out_of_range e) {
            std::cout << "Reached EOF\\n";
            break;
        }
    }
    return 0;
}
"""

COMPILE_OPTS = """add_compile_options(-g -O3 -std=c++0x \
-gsplit-dwarf -fPIC -fvisibility-inlines-hidden -Wall -W \
-Wno-unused-parameter -Wwrite-strings -Wcast-qual \
-Wno-missing-field-initializers -pedantic -Wno-long-long \
-Wno-maybe-uninitialized -Wdelete-non-virtual-dtor \
-Wno-comment -std=c++11 -ffunction-sections -fdata-sections \
-O2 -g -DNDEBUG -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS \
-D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS)
"""


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


def generate_main_src(params):
    dec_h = Path(params['decoder-header'])
    main = Path(params['destpath'], 'main.cpp')
    with main.open(mode='w') as dst:
        dst.write('#include \"cgen-ir-common.h\"\n#include \"' +
                  dec_h.name + '\"\n\n')
        dst.write(MAIN_SRC)


def generate_cmake_src(params):
    cmake = Path(params['destpath'], 'CMakeLists.txt')
    archPath = Path(params['arch']).resolve()
    arch = archPath.stem.lower()
    dec_h = Path(params['decoder-header'])
    dec_src = Path(params['decoder-src'])
    reg_h = Path(params['registers-header'])
    with cmake.open(mode='w') as dst:
        dst.write('cmake_minimum_required(VERSION 3.5)\n')
        dst.write('project(' + arch + ' CXX)\n\n')
        dst.write('find_package(LLVM REQUIRED CONFIG)\n\n')
        dst.write('message(STATUS "Found LLVM '
                  '${LLVM_PACKAGE_VERSION}")\n'
                  'message(STATUS "Using LLVMConfig.cmake '
                  'in: ${LLVM_DIR}")\n\n')
        dst.write('include_directories(${LLVM_INCLUDE_DIRS})\n'
                  'add_definitions(${LLVM_DEFINITIONS})\n\n')
        dst.write(COMPILE_OPTS)
        dst.write('\nset(SOURCE_FILES ' +
                  dec_h.name + ' ' +
                  dec_src.name + ' ' +
                  reg_h.name + ')\n')
        dst.write('add_executable(' + arch + ' main.cpp ${SOURCE_FILES})\n')
        dst.write('llvm_map_components_to_libnames'
                  '(llvm_libs support core irreader)\n'
                  'target_link_libraries(cris ${llvm_libs})\n')


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
    print('  Added includes to decoder source...')

    # Write main.cpp source file
    generate_main_src(params)
    print('  Generated main.cpp file...')

    # Write CMakeLists.txt file
    generate_cmake_src(params)
    print('  Generated CMakeLists.txt file...')

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

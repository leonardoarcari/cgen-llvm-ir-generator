# CGEN LLVM IR generator

CGEN LLVM IR generator is an extension of the [*CGEN*][1] framework that attempts to generate C++ translators that emit LLVM IR code semantically equivalent to a binary file in input.

Ideally, once an RTL CPU Architecture description is provided to *CGEN LLVM IR generator*, a C++ program is generated, accepting a stream containing a binary program compiled for the same architecture. The binary input is disassembled and the code is translated to a semantically equivalent LLVM IR program.

## Roadmap
Here's a brief list of tasks to be accomplished for a working prototype of the generator.

- [ ] CPU registers allocation
	- [x] Global variables allocation
	- [ ] Test correctness towards .cpu files
- [ ] Disassabler
	- [x] Read an instruction word from a byte stream
	- [x] Decode instruction opcode
	- [x] Decode instruction fields into in-memory objects
	- [x] Provide dump() facilities
	- [ ] Test against available .cpu files
- [ ] Semantic translator

## Hands-on
To run *CGEN LLVM IR generator* a convenient Python script is provided to hide the odds and quirks of Scheme and it's implementation in Guile.
### Prerequisites
We assume you have a working *Guile 1.8* environment set up on your machine, with the ```guile``` executable exported in your system PATH.
Optionally, you will need ```clang-format``` installed to perform code formatting on generated C++ source files.

### Running CGEN-IR:
```
$ ./cgen-ir.py --help
usage: cgen-ir.py [-h] -a ARCH -m MACHINE [-t DEC_H] [-d DEC_CPP] [-r REG_H]
                  dstPath

A generator of LLVM-IR generators. Yes.

positional arguments:
  dstPath               Destination path

optional arguments:
  -h, --help            show this help message and exit
  -a ARCH, --arch ARCH  .cpu description file
  -m MACHINE, --machine MACHINE
                        Variant of the architecture
  -t DEC_H, --decoder-header DEC_H
                        Decoder header filename
  -d DEC_CPP, --decoder-src DEC_CPP
                        Decoder source filename
  -r REG_H, --registers-header REG_H
                        Registers allocation source filename
```

You are required to provide at least:
```
-a ARCH 		.cpu description file path
-m MACHINE 		the machine you want to generate translators for (e.g.: arch700)
destPath 		destination directory where to generate sources in
```

If you want to manually specify the name of generated sources you can use _-t, -d, -r_ arguments.

### Compile generated translator
_cgen-ir.py_ script generates source files along with a _non-necessarily-working_ driver (i.e. ```main.cpp```) and a ```CMakeLists.txt``` file.
You can easily compile the generated translator with the usual process in CMake
```
$ cd dstPath
$ mkdir build
$ cd build
$ cmake ..
$ make
```

[1]: https://sourceware.org/cgen/
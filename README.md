# CGEN LLVM IR generator

CGEN LLVM IR generator is an extension of the [*CGEN*][1] framework that attempts to generate C++ translators that emit LLVM IR code semantically equivalent to a binary file in input.

Ideally, once an RTL CPU Architecture description is provided to *CGEN LLVM IR generator*, a C++ program is generated, accepting a stream containing a binary program compiled for the same architecture. The binary input is disassembled and the code is translated to a semantically equivalent LLVM IR program.

## Roadmap
Here's a brief list of tasks to be accomplished for a working prototype of the generator.

- [ ] CPU registers allocation
	- [x] Global variables allocation
	- [ ] Test correctness towards .cpu files
- [ ] Disassabler
- [ ] Semantic translator 

## Hands-on
### Register allocation
To test out the global variables allocation for the CPU registers run the following, after ```cding``` to _cgen_ folder

```
guile -l guile.scm cgen-ir.scm -v -v -v -s . -a ../cpu/<cpu>.cpu -R <output_filename>.h
```

[1]: https://sourceware.org/cgen/
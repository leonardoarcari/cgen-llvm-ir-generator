# ARC700 Translator Test Suite
In this repo you can find a generated **CGEN LLVM IR** for [ARC700 architecture](https://www.synopsys.com/designware-ip/processor-solutions/arc-processors/arc-700-family.html). Together with a working program to disassemble a binary program written for ARC700 you find some *regression test* performed on this assembly program as input

```asm
	.file	"sample_insnlen32.s"
	.section	.text
	.align 4
begin:
	ld r2,[r3,0]
	add r2,r2,1
	sub r2,r2,1
	bcc 128
	st r2,[r3,0]
	Jcc [r3]
```

## Build
To generate CGEN LLVM IR for ARC700 run the following:
```sh
./cgen-ir.py -a cpu/ARCompact.cpu -m arc700 <destination-path>
```

Then build with:
```sh
cd <destination_path>
mkdir build
cd build
cmake ..
make
```

## Test
You can run the available tests in this repository with CTest

```sh
# First build with CMake
mkdir build
cd build
cmake ..
make

# Then run tests with CTest
make test
```

or, to get more insights on test results
```sh
# Run after building with CMake as above
./tests --success
```

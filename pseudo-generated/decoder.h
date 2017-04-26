/* Sketch of the decoder instructions */

// Includes here
#include "llvm/IR/Constants.h"
#include "llvm/IR/GlobalVariable.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"

// Instruction class
/* 
class Instruction {
public:
	static std::unique_ptr<Instruction> make(unsigned int opcode, uint32_t code) {
		// Switch it over the available op_codes
		// and return the correct derived class
		// e.g.: 
		// auto i = std::make_unique<AddInstruction>{opcode};
		// i->parseSmft(uint32_t code);
		// return i;
	}

	virtual void parseSmft(uint32_t code);
private:
	Instruction(unsigned int opcode)
		: _opcode(opcode) { }
protected:
	unsigned int _opcode;
}; */

void Translate(char *Code,
               llvm::IRBuilder<> Builder,
               llvm::Module *M) {
	
	// uint32_t RawInstruction = *((uint32_t *) Code)
	
	// extract op_code
	// unsigned int opcode = some_bitshift_magic
	// auto insn = Instruction::make(opcode, RawInstruction);
}
// Includes here
#include "llvm/IR/Constants.h"
#include "llvm/IR/GlobalVariable.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

void createRegisters(@CPU@Hardware &hw) {

  // auto& M = hw.module();

  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, false)),
      "pc");
  // hw.setPC(pc);

  auto fp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "fp");
  // hw.h-grTable()[27] = fp
}
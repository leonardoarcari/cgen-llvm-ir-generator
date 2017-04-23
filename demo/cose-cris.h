#include "llvm/IR/Constants.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

// Test generating some register information

void createRegisters(llvm::Module &M) {
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, false)),
      "pc");
  auto PC = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "PC");
  auto SP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SP");
  auto R0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R0");
  auto R1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R1");
  auto R2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R2");
  auto R3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R3");
  auto R4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R4");
  auto R5 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R5");
  auto R6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R6");
  auto R7 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R7");
  auto R8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R8");
  auto R9 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R9");
  auto R10 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R10");
  auto R11 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R11");
  auto R12 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R12");
  auto R13 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R13");
  auto ACR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ACR");
  auto SP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SP");
  auto R0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R0");
  auto R1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R1");
  auto R2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R2");
  auto R3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R3");
  auto R4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R4");
  auto R5 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R5");
  auto R6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R6");
  auto R7 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R7");
  auto R8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R8");
  auto R9 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R9");
  auto R10 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R10");
  auto R11 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R11");
  auto R12 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R12");
  auto R13 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "R13");
  auto CCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CCR");
  auto MOF = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "MOF");
  auto IBR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IBR");
  auto IRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IRP");
  auto BAR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BAR");
  auto DCCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DCCR");
  auto BRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BRP");
  auto USP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "USP");
  auto VR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "VR");
  auto SRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SRP");
  auto P0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P0");
  auto P2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P2");
  auto P3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P3");
  auto P4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P4");
  auto P6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P6");
  auto P8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P8");
  auto CCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CCR");
  auto MOF = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "MOF");
  auto IBR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IBR");
  auto IRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IRP");
  auto BAR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BAR");
  auto DCCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DCCR");
  auto BRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BRP");
  auto USP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "USP");
  auto VR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "VR");
  auto SRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SRP");
  auto P0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P0");
  auto P2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P2");
  auto P3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P3");
  auto P4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P4");
  auto P6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P6");
  auto P8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P8");
  auto CCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CCR");
  auto MOF = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "MOF");
  auto IBR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IBR");
  auto IRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IRP");
  auto BAR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BAR");
  auto DCCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DCCR");
  auto BRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BRP");
  auto USP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "USP");
  auto VR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "VR");
  auto SRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SRP");
  auto P0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P0");
  auto P2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P2");
  auto P3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P3");
  auto P4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P4");
  auto P6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P6");
  auto P8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P8");
  auto CCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CCR");
  auto MOF = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "MOF");
  auto IBR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IBR");
  auto IRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IRP");
  auto BAR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BAR");
  auto DCCR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DCCR");
  auto BRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BRP");
  auto USP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "USP");
  auto VR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "VR");
  auto SRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SRP");
  auto P0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P0");
  auto P2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P2");
  auto P3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P3");
  auto P4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P4");
  auto P6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P6");
  auto P8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "P8");
  auto BZ = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BZ");
  auto PID = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "PID");
  auto SRS = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SRS");
  auto WZ = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "WZ");
  auto EXS = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "EXS");
  auto EDA = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "EDA");
  auto MOF = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "MOF");
  auto DZ = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DZ");
  auto EBP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "EBP");
  auto ERP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ERP");
  auto NRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "NRP");
  auto CCS = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CCS");
  auto USP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "USP");
  auto SPC = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SPC");
  auto VR = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "VR");
  auto SRP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "SRP");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "pc");
  auto pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "pc");
}
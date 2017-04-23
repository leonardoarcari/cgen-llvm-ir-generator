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
  auto gp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "gp");
  auto fp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "fp");
  auto sp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "sp");
  auto ra = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ra");
  auto ea = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ea");
  auto ba = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ba");
  auto r0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r0");
  auto r1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r1");
  auto r2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r2");
  auto r3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r3");
  auto r4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r4");
  auto r5 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r5");
  auto r6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r6");
  auto r7 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r7");
  auto r8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r8");
  auto r9 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r9");
  auto r10 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r10");
  auto r11 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r11");
  auto r12 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r12");
  auto r13 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r13");
  auto r14 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r14");
  auto r15 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r15");
  auto r16 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r16");
  auto r17 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r17");
  auto r18 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r18");
  auto r19 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r19");
  auto r20 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r20");
  auto r21 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r21");
  auto r22 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r22");
  auto r23 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r23");
  auto r24 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r24");
  auto r25 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "r25");
  auto IE = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IE");
  auto IM = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IM");
  auto IP = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "IP");
  auto ICC = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ICC");
  auto DCC = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DCC");
  auto CC = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CC");
  auto CFG = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "CFG");
  auto EBA = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "EBA");
  auto DC = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DC");
  auto DEBA = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "DEBA");
  auto JTX = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "JTX");
  auto JRX = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "JRX");
  auto BP0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BP0");
  auto BP1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BP1");
  auto BP2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BP2");
  auto BP3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "BP3");
  auto WP0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "WP0");
  auto WP1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "WP1");
  auto WP2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "WP2");
  auto WP3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "WP3");
}
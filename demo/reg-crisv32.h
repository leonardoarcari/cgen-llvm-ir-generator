#include "llvm/IR/Constants.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

// Test generating some register information

void createRegisters(llvm::Module &M) {
  auto h_pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, false)),
      "h_pc");
  auto acr = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "acr");
  auto sp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "sp");
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
  auto bz = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "bz");
  auto pid = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "pid");
  auto srs = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "srs");
  auto wz = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "wz");
  auto exs = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "exs");
  auto eda = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "eda");
  auto mof = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "mof");
  auto dz = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "dz");
  auto ebp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ebp");
  auto erp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "erp");
  auto nrp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "nrp");
  auto ccs = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "ccs");
  auto usp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "usp");
  auto spc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "spc");
  auto vr = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "vr");
  auto srp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "srp");
  auto h_cbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_cbit");
  auto h_vbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_vbit");
  auto h_zbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_zbit");
  auto h_nbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_nbit");
  auto h_xbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_xbit");
  auto h_pbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_pbit");
  auto h_rbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_rbit");
  auto h_gbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_gbit");
  auto h_kernel_sp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_kernel_sp");
  auto h_ubit_x = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_ubit_x");
  auto h_ibit_x = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_ibit_x");
  auto h_mbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_mbit");
  auto h_qbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_qbit");
  auto h_sbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_sbit");
}
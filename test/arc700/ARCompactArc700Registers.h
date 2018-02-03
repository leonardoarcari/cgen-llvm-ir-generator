#include "llvm/IR/Constants.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"

// Test generating some register information

void createRegisters(llvm::Module &M) {
  auto *h_lbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_lbit");
  auto *h_zbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_zbit");
  auto *h_nbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_nbit");
  auto *h_cbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_cbit");
  auto *h_vbit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_vbit");
  auto *h_ubit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_ubit");
  auto *h_e1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_e1");
  auto *h_e2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_e2");
  auto *h_s1bit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_s1bit");
  auto *h_s2bit = new llvm::GlobalVariable(
      M, llvm::Type::getInt1Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(), llvm::APInt(1, 0, true)),
      "h_s2bit");
  auto *h_cr_gp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_gp");
  auto *h_cr_fp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_fp");
  auto *h_cr_sp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_sp");
  auto *h_cr_blink = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_blink");
  auto *h_cr_mlo = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_mlo");
  auto *h_cr_mmid = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_mmid");
  auto *h_cr_mhi = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_mhi");
  auto *h_cr_lp_count = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_lp_count");
  auto *h_cr_pcl = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_pcl");
  auto *h_cr_ilink1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_ilink1");
  auto *h_cr_ilink2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_ilink2");
  auto *h_cr_r0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r0");
  auto *h_cr_r1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r1");
  auto *h_cr_r2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r2");
  auto *h_cr_r3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r3");
  auto *h_cr_r4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r4");
  auto *h_cr_r5 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r5");
  auto *h_cr_r6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r6");
  auto *h_cr_r7 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r7");
  auto *h_cr_r8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r8");
  auto *h_cr_r9 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r9");
  auto *h_cr_r10 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r10");
  auto *h_cr_r11 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r11");
  auto *h_cr_r12 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r12");
  auto *h_cr_r13 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r13");
  auto *h_cr_r14 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r14");
  auto *h_cr_r15 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r15");
  auto *h_cr_r16 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r16");
  auto *h_cr_r17 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r17");
  auto *h_cr_r18 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r18");
  auto *h_cr_r19 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r19");
  auto *h_cr_r20 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r20");
  auto *h_cr_r21 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r21");
  auto *h_cr_r22 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r22");
  auto *h_cr_r23 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r23");
  auto *h_cr_r24 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r24");
  auto *h_cr_r25 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r25");
  auto *h_cr_r32 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r32");
  auto *h_cr_r33 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r33");
  auto *h_cr_r34 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r34");
  auto *h_cr_r35 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r35");
  auto *h_cr_r36 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r36");
  auto *h_cr_r37 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r37");
  auto *h_cr_r38 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r38");
  auto *h_cr_r39 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r39");
  auto *h_cr_r40 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r40");
  auto *h_cr_r41 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r41");
  auto *h_cr_r42 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r42");
  auto *h_cr_r43 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r43");
  auto *h_cr_r44 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r44");
  auto *h_cr_r45 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r45");
  auto *h_cr_r46 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r46");
  auto *h_cr_r47 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r47");
  auto *h_cr_r48 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r48");
  auto *h_cr_r49 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r49");
  auto *h_cr_r50 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r50");
  auto *h_cr_r51 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r51");
  auto *h_cr_r52 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r52");
  auto *h_cr_r53 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r53");
  auto *h_cr_r54 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r54");
  auto *h_cr_r55 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r55");
  auto *h_cr_r56 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_cr_r56");
  auto *h_auxr_gp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_gp");
  auto *h_auxr_fp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_fp");
  auto *h_auxr_sp = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_sp");
  auto *h_auxr_blink = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_blink");
  auto *h_auxr_mlo = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_mlo");
  auto *h_auxr_mmid = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_mmid");
  auto *h_auxr_mhi = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_mhi");
  auto *h_auxr_lp_count = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_lp_count");
  auto *h_auxr_pcl = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_pcl");
  auto *h_auxr_ilink1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_ilink1");
  auto *h_auxr_ilink2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_ilink2");
  auto *h_auxr_r0 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r0");
  auto *h_auxr_r1 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r1");
  auto *h_auxr_r2 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r2");
  auto *h_auxr_r3 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r3");
  auto *h_auxr_r4 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r4");
  auto *h_auxr_r5 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r5");
  auto *h_auxr_r6 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r6");
  auto *h_auxr_r7 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r7");
  auto *h_auxr_r8 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r8");
  auto *h_auxr_r9 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r9");
  auto *h_auxr_r10 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r10");
  auto *h_auxr_r11 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r11");
  auto *h_auxr_r12 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r12");
  auto *h_auxr_r13 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r13");
  auto *h_auxr_r14 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r14");
  auto *h_auxr_r15 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r15");
  auto *h_auxr_r16 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r16");
  auto *h_auxr_r17 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r17");
  auto *h_auxr_r18 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r18");
  auto *h_auxr_r19 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r19");
  auto *h_auxr_r20 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r20");
  auto *h_auxr_r21 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r21");
  auto *h_auxr_r22 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r22");
  auto *h_auxr_r23 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r23");
  auto *h_auxr_r24 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r24");
  auto *h_auxr_r25 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r25");
  auto *h_auxr_r32 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r32");
  auto *h_auxr_r33 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r33");
  auto *h_auxr_r34 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r34");
  auto *h_auxr_r35 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r35");
  auto *h_auxr_r36 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r36");
  auto *h_auxr_r37 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r37");
  auto *h_auxr_r38 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r38");
  auto *h_auxr_r39 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r39");
  auto *h_auxr_r40 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r40");
  auto *h_auxr_r41 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r41");
  auto *h_auxr_r42 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r42");
  auto *h_auxr_r43 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r43");
  auto *h_auxr_r44 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r44");
  auto *h_auxr_r45 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r45");
  auto *h_auxr_r46 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r46");
  auto *h_auxr_r47 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r47");
  auto *h_auxr_r48 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r48");
  auto *h_auxr_r49 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r49");
  auto *h_auxr_r50 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r50");
  auto *h_auxr_r51 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r51");
  auto *h_auxr_r52 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r52");
  auto *h_auxr_r53 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r53");
  auto *h_auxr_r54 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r54");
  auto *h_auxr_r55 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r55");
  auto *h_auxr_r56 = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_auxr_r56");
  auto *h_timer_expire = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_timer_expire");
  auto *h_prof_offset = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, true)),
      "h_prof_offset");
  auto *h_pc = new llvm::GlobalVariable(
      M, llvm::Type::getInt32Ty(llvm::getGlobalContext()), false,
      llvm::GlobalValue::LinkageTypes::ExternalLinkage,
      llvm::ConstantInt::get(llvm::getGlobalContext(),
                             llvm::APInt(32, 0, false)),
      "h_pc");
}
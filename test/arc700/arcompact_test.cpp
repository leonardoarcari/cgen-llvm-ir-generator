// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

// Test includes
#include "ARCompactArc700Decoder.h"
#include "cgen-ir-common.h"

#include <iostream>

using InsnPtr = std::unique_ptr<Instruction>;
using LdPtr = Ld_AbsInstruction *;
using AddPtr = Add_L_U6__Ra_Instruction *;
using SubPtr = Sub_L_U6__Ra_Instruction *;
using BccPtr = Bcc_LInstruction *;
using StPtr = St_AbsInstruction *;
using JccPtr = J_Cc___Rc_Ilink_Instruction *;

std::pair<InsnPtr, int> nextInstruction(CgenIRContext &c) {
  auto word = c.readWord<Instruction::wordType, Instruction::chunkType,
                         Instruction::endianness>(0);
  return Instruction::make(word, c);
}

TEST_CASE("Disassemble some standard instructions", "[disassembler]") {
  // Setup
  CgenIRContext c("../sample_insnlen_32.text");
  int bytes_read = 0;
  InsnPtr insn(nullptr);

  // Check LOAD instruction
  REQUIRE(c.hasNext());
  std::tie(insn, bytes_read) = nextInstruction(c);

  REQUIRE(insn); // Must be not nullptr
  LdPtr loadInsn = dynamic_cast<LdPtr>(insn.get());
  // Check downcasting to LdPtr
  REQUIRE(loadInsn != nullptr);

  // Check LOAD SFormat fields
  // Assembly line:
  // 		ld r2,[r3,0]
  auto ldSfmt = loadInsn->getSfmt();
  REQUIRE(ldSfmt.f_op__b == 3);
  REQUIRE(ldSfmt.f_u8 == 0);
  REQUIRE(ldSfmt.f_d9h == 0);
  REQUIRE(ldSfmt.f_B_5_3 == 0);
  REQUIRE(ldSfmt.f_op_A == 2);
  REQUIRE(ldSfmt.f_op_B == 3);
  REQUIRE(ldSfmt.f_s9 == 0);

  c.incrementPc(sizeof(Instruction::wordType) + bytes_read);

  // Check ADD instruction
  REQUIRE(c.hasNext());
  std::tie(insn, bytes_read) = nextInstruction(c);

  REQUIRE(insn); // Must be not nullptr
  AddPtr addInsn = dynamic_cast<AddPtr>(insn.get());
  // Check downcasting to LdPtr
  REQUIRE(addInsn != nullptr);

  // Check ADD SFormat fields
  // Assembly line:
  // 		add r2,r2,1
  auto addSfmt = addInsn->getSfmt();
  REQUIRE(addSfmt.f_op__b == 2);
  REQUIRE(addSfmt.f_F == 0);
  REQUIRE(addSfmt.f_B_5_3 == 0);
  REQUIRE(addSfmt.f_u6 == 1);
  REQUIRE(addSfmt.f_op_A == 2);
  REQUIRE(addSfmt.f_op_B == 2);

  c.incrementPc(sizeof(Instruction::wordType) + bytes_read);

  // Check SUB instruction
  REQUIRE(c.hasNext());
  std::tie(insn, bytes_read) = nextInstruction(c);

  REQUIRE(insn); // Must be not nullptr
  SubPtr subInsn = dynamic_cast<SubPtr>(insn.get());
  // Check downcasting to LdPtr
  REQUIRE(subInsn != nullptr);

  // Check SUB SFormat fields
  // Assembly line:
  // 		sub r2,r2,1
  auto subSfmt = subInsn->getSfmt();
  REQUIRE(subSfmt.f_op__b == 2);
  REQUIRE(subSfmt.f_F == 0);
  REQUIRE(subSfmt.f_B_5_3 == 0);
  REQUIRE(subSfmt.f_u6 == 1);
  REQUIRE(subSfmt.f_op_A == 2);
  REQUIRE(subSfmt.f_op_B == 2);

  c.incrementPc(sizeof(Instruction::wordType) + bytes_read);

  // Check BCC instruction
  REQUIRE(c.hasNext());
  std::tie(insn, bytes_read) = nextInstruction(c);

  REQUIRE(insn); // Must be not nullptr
  BccPtr bccInsn = dynamic_cast<BccPtr>(insn.get());
  // Check downcasting to LdPtr
  REQUIRE(bccInsn != nullptr);

  // Check BCC SFormat fields
  // Assembly line:
  // 		bcc 128
  // D21L is 64 because the lsb is fixed to 0 in the insn
  // format.
  // D21H is 0 because 128 / (2^11) is 0.
  // COND_Q is 6 because the "CC" in BCC stands for "Carry Clear"
  // and its Q field is 00110 = 6
  auto bccSfmt = bccInsn->getSfmt();
  REQUIRE(bccSfmt.f_d21l == 64);
  REQUIRE(bccSfmt.f_d21h == 0);
  REQUIRE(bccSfmt.f_cond_Q == 6);
  REQUIRE(bccSfmt.f_rel21 == 256);

  c.incrementPc(sizeof(Instruction::wordType) + bytes_read);

  // Check STORE instruction
  REQUIRE(c.hasNext());
  std::tie(insn, bytes_read) = nextInstruction(c);

  REQUIRE(insn); // Must be not nullptr
  StPtr stInsn = dynamic_cast<StPtr>(insn.get());
  // Check downcasting to LdPtr
  REQUIRE(stInsn != nullptr);

  // Check STORE SFormat fields
  // Assembly line:
  // 		st r2,[r3,0]
  auto stSfmt = stInsn->getSfmt();
  REQUIRE(stSfmt.f_op__b == 3);
  REQUIRE(stSfmt.f_u8 == 0);
  REQUIRE(stSfmt.f_d9h == 0);
  REQUIRE(stSfmt.f_B_5_3 == 0);
  REQUIRE(stSfmt.f_op_C == 2);
  REQUIRE(stSfmt.f_op_B == 3);
  REQUIRE(stSfmt.f_s9 == 0);

  c.incrementPc(sizeof(Instruction::wordType) + bytes_read);

  // Check JUMP instruction
  REQUIRE(c.hasNext());
  std::tie(insn, bytes_read) = nextInstruction(c);

  REQUIRE(insn); // Must be not nullptr
  JccPtr jccInsn = dynamic_cast<JccPtr>(insn.get());
  // Check downcasting to LdPtr
  REQUIRE(jccInsn != nullptr);

  // Check JCC SFormat fields
  // Assembly line:
  // 		Jcc [r3]
  // F_OP_C is 3 because we are jumping on register r3
  // F_COND_Q is 6 because the "CC" in JCC stands for "Carry Clear"
  // and its Q field is 00110 = 6
  // All the other fields are fixed in ARC700 ISA
  auto jccSfmt = jccInsn->getSfmt();
  REQUIRE(jccSfmt.f_op__b == 0);
  REQUIRE(jccSfmt.f_F == 0);
  REQUIRE(jccSfmt.f_B_5_3 == 0);
  REQUIRE(jccSfmt.f_op_C == 3);
  REQUIRE(jccSfmt.f_op_Cj == 3);
  REQUIRE(jccSfmt.f_cond_Q == 6);
  REQUIRE(jccSfmt.f_op_B == 0);

  // Program is over here, an increment must throw a std::out_of_range
  REQUIRE_THROWS_AS(c.incrementPc(sizeof(Instruction::wordType) + bytes_read),
                    std::out_of_range);
}
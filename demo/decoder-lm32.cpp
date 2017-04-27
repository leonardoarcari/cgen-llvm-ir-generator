#include <cstdint>
#include <memory>

std::unique_ptr<Instruction> Instruction::make(unsigned int opcode, uint8_t *code) {

  auto *insn = std::make_unique<Instruction>{};

  switch (opcode) {
    case 0 :
      if ((code & 0xfc000000) == 0x0) {
        insn = std::make_unique<SruiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 1 :
      if ((code & 0xfc000000) == 0x4000000) {
        insn = std::make_unique<NoriInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 2 :
      if ((code & 0xfc000000) == 0x8000000) {
        insn = std::make_unique<MuliInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 3 :
      if ((code & 0xfc000000) == 0xc000000) {
        insn = std::make_unique<ShInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 4 :
      if ((code & 0xfc000000) == 0x10000000) {
        insn = std::make_unique<LbInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 5 :
      if ((code & 0xfc000000) == 0x14000000) {
        insn = std::make_unique<SriInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 6 :
      if ((code & 0xfc000000) == 0x18000000) {
        insn = std::make_unique<XoriInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 7 :
      if ((code & 0xfc000000) == 0x1c000000) {
        insn = std::make_unique<LhInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 8 :
      if ((code & 0xfc000000) == 0x20000000) {
        insn = std::make_unique<AndiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 9 :
      if ((code & 0xfc000000) == 0x24000000) {
        insn = std::make_unique<XnoriInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 10 :
      if ((code & 0xfc000000) == 0x28000000) {
        insn = std::make_unique<LwInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 11 :
      if ((code & 0xfc000000) == 0x2c000000) {
        insn = std::make_unique<LhuInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 12 :
      if ((code & 0xfc000000) == 0x30000000) {
        insn = std::make_unique<SbInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 13 :
      if ((code & 0xfc000000) == 0x34000000) {
        insn = std::make_unique<AddiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14 :
      if ((code & 0xfc000000) == 0x38000000) {
        insn = std::make_unique<OriInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15 :
      if ((code & 0xfc000000) == 0x3c000000) {
        insn = std::make_unique<SliInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 16 :
      if ((code & 0xfc000000) == 0x40000000) {
        insn = std::make_unique<LbuInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 17 :
      if ((code & 0xfc000000) == 0x44000000) {
        insn = std::make_unique<BeInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 18 :
      if ((code & 0xfc000000) == 0x48000000) {
        insn = std::make_unique<BgInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 19 :
      if ((code & 0xfc000000) == 0x4c000000) {
        insn = std::make_unique<BgeInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 20 :
      if ((code & 0xfc000000) == 0x50000000) {
        insn = std::make_unique<BgeuInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 21 :
      if ((code & 0xfc000000) == 0x54000000) {
        insn = std::make_unique<BguInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 22 :
      if ((code & 0xfc000000) == 0x58000000) {
        insn = std::make_unique<SwInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 23 :
      if ((code & 0xfc000000) == 0x5c000000) {
        insn = std::make_unique<BneInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 24 :
      if ((code & 0xfc000000) == 0x60000000) {
        insn = std::make_unique<AndhiiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 25 :
      if ((code & 0xfc000000) == 0x64000000) {
        insn = std::make_unique<CmpeiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 26 :
      if ((code & 0xfc000000) == 0x68000000) {
        insn = std::make_unique<CmpgiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 27 :
      if ((code & 0xfc000000) == 0x6c000000) {
        insn = std::make_unique<CmpgeiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 28 :
      if ((code & 0xfc000000) == 0x70000000) {
        insn = std::make_unique<CmpgeuiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 29 :
      if ((code & 0xfc000000) == 0x74000000) {
        insn = std::make_unique<CmpguiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 30 :
      if ((code & 0xfc000000) == 0x78000000) {
        insn = std::make_unique<OrhiiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 31 :
      if ((code & 0xfc000000) == 0x7c000000) {
        insn = std::make_unique<CmpneiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 32 :
      if ((code & 0xfc0007ff) == 0x80000000) {
        insn = std::make_unique<SruInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 33 :
      if ((code & 0xfc0007ff) == 0x84000000) {
        insn = std::make_unique<NorInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 34 :
      if ((code & 0xfc0007ff) == 0x88000000) {
        insn = std::make_unique<MulInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 35 :
      if ((code & 0xfc0007ff) == 0x8c000000) {
        insn = std::make_unique<DivuInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 36 :
      if ((code & 0xfc1f07ff) == 0x90000000) {
        insn = std::make_unique<RcsrInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 37 :
      if ((code & 0xfc0007ff) == 0x94000000) {
        insn = std::make_unique<SrInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 38 :
      if ((code & 0xfc0007ff) == 0x98000000) {
        insn = std::make_unique<XorInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 40 :
      if ((code & 0xfc0007ff) == 0xa0000000) {
        insn = std::make_unique<AndInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 41 :
      if ((code & 0xfc0007ff) == 0xa4000000) {
        insn = std::make_unique<XnorInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 43 :
      switch (opcode) {
        case 0 :
          if ((code & 0xffffffff) == 0xac000002) {
            insn = std::make_unique<BreakInstruction>{opcode};
          } else {
              insn = std::make_unique<EmptyInstruction>{opcode};
          }
        case 3 :
          if ((code & 0xffffffff) == 0xac000007) {
            insn = std::make_unique<ScallInstruction>{opcode};
          } else {
              insn = std::make_unique<EmptyInstruction>{opcode};
          }
        default :
          insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 44 :
      if ((code & 0xfc1f07ff) == 0xb0000000) {
        insn = std::make_unique<SextbInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 45 :
      if ((code & 0xfc0007ff) == 0xb4000000) {
        insn = std::make_unique<AddInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 46 :
      if ((code & 0xfc0007ff) == 0xb8000000) {
        insn = std::make_unique<OrInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 47 :
      if ((code & 0xfc0007ff) == 0xbc000000) {
        insn = std::make_unique<SlInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 48 :
      if ((code & 0xfc1fffff) == 0xc0000000) {
        insn = std::make_unique<BInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 49 :
      if ((code & 0xfc0007ff) == 0xc4000000) {
        insn = std::make_unique<ModuInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 50 :
      if ((code & 0xfc0007ff) == 0xc8000000) {
        insn = std::make_unique<SubInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 51 :
      if ((code & 0xfc000000) == 0xcc000000) {
        insn = std::make_unique<UserInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 52 :
      if ((code & 0xfc00ffff) == 0xd0000000) {
        insn = std::make_unique<WcsrInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 54 :
      if ((code & 0xfc1fffff) == 0xd8000000) {
        insn = std::make_unique<CallInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 55 :
      if ((code & 0xfc1f07ff) == 0xdc000000) {
        insn = std::make_unique<SexthInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 56 :
      if ((code & 0xfc000000) == 0xe0000000) {
        insn = std::make_unique<BiInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 57 :
      if ((code & 0xfc0007ff) == 0xe4000000) {
        insn = std::make_unique<CmpeInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 58 :
      if ((code & 0xfc0007ff) == 0xe8000000) {
        insn = std::make_unique<CmpgInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 59 :
      if ((code & 0xfc0007ff) == 0xec000000) {
        insn = std::make_unique<CmpgeInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 60 :
      if ((code & 0xfc0007ff) == 0xf0000000) {
        insn = std::make_unique<CmpgeuInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 61 :
      if ((code & 0xfc0007ff) == 0xf4000000) {
        insn = std::make_unique<CmpguInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 62 :
      if ((code & 0xfc000000) == 0xf8000000) {
        insn = std::make_unique<CalliInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 63 :
      if ((code & 0xfc0007ff) == 0xfc000000) {
        insn = std::make_unique<CmpneInstruction>{opcode};
      } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default :
      insn = std::make_unique<EmptyInstruction>{opcode};
  }
    
  // Demand extracting fields to derived class strategy method
  insn->parseSfmt(code); 
  return insn;
}
void AddInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void AddiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void AndInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void AndiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void AndhiiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void BInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
}

void BiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_call = ;
}

void BeInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_branch = ;
}

void BgInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_branch = ;
}

void BgeInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_branch = ;
}

void BgeuInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_branch = ;
}

void BguInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_branch = ;
}

void BneInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_branch = ;
}

void CallInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
}

void CalliInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_call = ;
}

void CmpeInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void CmpeiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void CmpgInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void CmpgiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void CmpgeInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void CmpgeiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void CmpgeuInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void CmpgeuiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void CmpguInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void CmpguiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void CmpneInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void CmpneiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void DivuInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void LbInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void LbuInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void LhInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void LhuInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void LwInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void ModuInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void MulInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void MuliInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void NorInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void NoriInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void OrInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void OriInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void OrhiiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void RcsrInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_csr = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void SbInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void SextbInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void SexthInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void ShInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void SlInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void SliInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void SrInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void SriInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void SruInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void SruiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void SubInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void SwInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_imm = extractLSB0<int> (insn, 32, 15, 16);
}

void UserInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
  sfmt.f_user = extractLSB0<unsigned int> (insn, 32, 10, 11);
}

void WcsrInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_csr = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
}

void XorInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void XoriInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void XnorInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_r2 = extractLSB0<unsigned int> (insn, 32, 15, 5);
}

void XnoriInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_r0 = extractLSB0<unsigned int> (insn, 32, 25, 5);
  sfmt.f_r1 = extractLSB0<unsigned int> (insn, 32, 20, 5);
  sfmt.f_uimm = extractLSB0<unsigned int> (insn, 32, 15, 16);
}

void BreakInstruction::parseSfmt(uint8_t *code) {
}

void ScallInstruction::parseSfmt(uint8_t *code) {
}


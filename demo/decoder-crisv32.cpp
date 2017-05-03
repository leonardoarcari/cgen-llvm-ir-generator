#include <cstdint>
#include <memory>

std::unique_ptr<Instruction> Instruction::make(unsigned int opcode,
                                               uint8_t *code) {

  auto *insn = std::make_unique<Instruction>{};

  switch (opcode) {
  case 0:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 1:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 2:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 3:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 4:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 5:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 6:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 7:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 8:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 9:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 10:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 11:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 12:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 13:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 14:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 15:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xf00) == 0x0) {
        insn = std::make_unique<Bcc - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xff00) == 0xe000) {
        insn = std::make_unique<Ba - BInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 16: /* fall through */
  case 17: /* fall through */
  case 18: /* fall through */
  case 19: /* fall through */
  case 20: /* fall through */
  case 21: /* fall through */
  case 22: /* fall through */
  case 23: /* fall through */
  case 24: /* fall through */
  case 25: /* fall through */
  case 26: /* fall through */
  case 27: /* fall through */
  case 28: /* fall through */
  case 29: /* fall through */
  case 30: /* fall through */
  case 31:
    if ((code & 0xf00) == 0x100) {
      insn = std::make_unique<AddoqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 32: /* fall through */
  case 33: /* fall through */
  case 34: /* fall through */
  case 35:
    if ((code & 0xfc0) == 0x200) {
      insn = std::make_unique<AddqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 36: /* fall through */
  case 37: /* fall through */
  case 38: /* fall through */
  case 39:
    if ((code & 0xfc0) == 0x240) {
      insn = std::make_unique<MoveqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 40: /* fall through */
  case 41: /* fall through */
  case 42: /* fall through */
  case 43:
    if ((code & 0xfc0) == 0x280) {
      insn = std::make_unique<SubqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 44: /* fall through */
  case 45: /* fall through */
  case 46: /* fall through */
  case 47:
    if ((code & 0xfc0) == 0x2c0) {
      insn = std::make_unique<CmpqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 48: /* fall through */
  case 49: /* fall through */
  case 50: /* fall through */
  case 51:
    if ((code & 0xfc0) == 0x300) {
      insn = std::make_unique<AndqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 52: /* fall through */
  case 53: /* fall through */
  case 54: /* fall through */
  case 55:
    if ((code & 0xfc0) == 0x340) {
      insn = std::make_unique<OrqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 56: /* fall through */
  case 57:
    if ((code & 0xfe0) == 0x380) {
      insn = std::make_unique<BtstqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 58: /* fall through */
  case 59:
    if ((code & 0xfe0) == 0x3a0) {
      insn = std::make_unique<AsrqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 60: /* fall through */
  case 61:
    if ((code & 0xfe0) == 0x3c0) {
      insn = std::make_unique<LslqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 62: /* fall through */
  case 63:
    if ((code & 0xfe0) == 0x3e0) {
      insn = std::make_unique<LsrqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 64:
    if ((code & 0xff0) == 0x400) {
      insn = std::make_unique<Addu.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 65:
    if ((code & 0xff0) == 0x410) {
      insn = std::make_unique<Addu.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 66:
    if ((code & 0xff0) == 0x420) {
      insn = std::make_unique<Adds.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 67:
    if ((code & 0xff0) == 0x430) {
      insn = std::make_unique<Adds.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 68:
    if ((code & 0xff0) == 0x440) {
      insn = std::make_unique<Movu.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 69:
    if ((code & 0xff0) == 0x450) {
      insn = std::make_unique<Movu.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 70:
    if ((code & 0xff0) == 0x460) {
      insn = std::make_unique<Movs.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 71:
    if ((code & 0xff0) == 0x470) {
      insn = std::make_unique<Movs.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 72:
    if ((code & 0xff0) == 0x480) {
      insn = std::make_unique<Subu.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 73:
    if ((code & 0xff0) == 0x490) {
      insn = std::make_unique<Subu.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 74:
    if ((code & 0xff0) == 0x4a0) {
      insn = std::make_unique<Subs.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 75:
    if ((code & 0xff0) == 0x4b0) {
      insn = std::make_unique<Subs.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 76:
    if ((code & 0xff0) == 0x4c0) {
      insn = std::make_unique<Lslr.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 77:
    if ((code & 0xff0) == 0x4d0) {
      insn = std::make_unique<Lslr.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 78:
    if ((code & 0xff0) == 0x4e0) {
      insn = std::make_unique<Lslr.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 79:
    if ((code & 0xff0) == 0x4f0) {
      insn = std::make_unique<BtstInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 80:
    if ((code & 0xff0) == 0x500) {
      insn = std::make_unique<Addi.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 81:
    if ((code & 0xff0) == 0x510) {
      insn = std::make_unique<Addi.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 82:
    if ((code & 0xff0) == 0x520) {
      insn = std::make_unique<Addi.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 83:
    if ((code & 0xff0) == 0x530) {
      insn = std::make_unique<SccInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 84:
    if ((code & 0xff0) == 0x540) {
      insn = std::make_unique<Addi - Acr.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 85:
    if ((code & 0xff0) == 0x550) {
      insn = std::make_unique<Addi - Acr.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 86:
    if ((code & 0xff0) == 0x560) {
      insn = std::make_unique<Addi - Acr.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 87:
    if ((code & 0xff0) == 0x570) {
      insn = std::make_unique<Addc - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 88:
    if ((code & 0xff0) == 0x580) {
      insn = std::make_unique<Neg.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 89:
    if ((code & 0xff0) == 0x590) {
      insn = std::make_unique<Neg.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 90:
    if ((code & 0xff0) == 0x5a0) {
      insn = std::make_unique<Neg.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 91:
    if ((code & 0xff0) == 0x5b0) {
      insn = std::make_unique<SetfInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 92:
    if ((code & 0xff0) == 0x5c0) {
      insn = std::make_unique<Bound - R.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 93:
    if ((code & 0xff0) == 0x5d0) {
      insn = std::make_unique<Bound - R.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 94:
    if ((code & 0xff0) == 0x5e0) {
      insn = std::make_unique<Bound - R.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 95:
    if ((code & 0xff0) == 0x5f0) {
      insn = std::make_unique<ClearfInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 96:
    if ((code & 0xff0) == 0x600) {
      insn = std::make_unique<Add.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 97:
    if ((code & 0xff0) == 0x610) {
      insn = std::make_unique<Add.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 98:
    if ((code & 0xff0) == 0x620) {
      insn = std::make_unique<Add.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 99:
    if ((code & 0xff0) == 0x630) {
      insn = std::make_unique<Move - R - Sprv32Instruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 100:
    if ((code & 0xff0) == 0x640) {
      insn = std::make_unique<Move.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 101:
    if ((code & 0xff0) == 0x650) {
      insn = std::make_unique<Move.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 102:
    if ((code & 0xff0) == 0x660) {
      insn = std::make_unique<Move.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 103:
    if ((code & 0xff0) == 0x670) {
      insn = std::make_unique<Move - Spr - Rv32Instruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 104:
    if ((code & 0xff0) == 0x680) {
      insn = std::make_unique<Sub.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 105:
    if ((code & 0xff0) == 0x690) {
      insn = std::make_unique<Sub.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 106:
    if ((code & 0xff0) == 0x6a0) {
      insn = std::make_unique<Sub.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 107:
    if ((code & 0xff0) == 0x6b0) {
      insn = std::make_unique<AbsInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 108:
    if ((code & 0xff0) == 0x6c0) {
      insn = std::make_unique<Cmp - R.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 109:
    if ((code & 0xff0) == 0x6d0) {
      insn = std::make_unique<Cmp - R.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 110:
    if ((code & 0xff0) == 0x6e0) {
      insn = std::make_unique<Cmp - R.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 111:
    if ((code & 0xff0) == 0x6f0) {
      insn = std::make_unique<DstepInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 112:
    if ((code & 0xff0) == 0x700) {
      insn = std::make_unique<And.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 113:
    if ((code & 0xff0) == 0x710) {
      insn = std::make_unique<And.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 114:
    if ((code & 0xff0) == 0x720) {
      insn = std::make_unique<And.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 115:
    if ((code & 0xff0) == 0x730) {
      insn = std::make_unique<LzInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 116:
    if ((code & 0xff0) == 0x740) {
      insn = std::make_unique<Orr.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 117:
    if ((code & 0xff0) == 0x750) {
      insn = std::make_unique<Orr.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 118:
    if ((code & 0xff0) == 0x760) {
      insn = std::make_unique<Orr.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 119:
    if ((code & 0xff0) == 0x770) {
      insn = std::make_unique<SwapInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 120:
    if ((code & 0xff0) == 0x780) {
      insn = std::make_unique<Asrr.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 121:
    if ((code & 0xff0) == 0x790) {
      insn = std::make_unique<Asrr.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 122:
    if ((code & 0xff0) == 0x7a0) {
      insn = std::make_unique<Asrr.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 123:
    if ((code & 0xff0) == 0x7b0) {
      insn = std::make_unique<XorInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 124:
    if ((code & 0xff0) == 0x7c0) {
      insn = std::make_unique<Lsrr.B - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 125:
    if ((code & 0xff0) == 0x7d0) {
      insn = std::make_unique<Lsrr.W - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 126:
    if ((code & 0xff0) == 0x7e0) {
      insn = std::make_unique<Lsrr.D - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 127:
    if ((code & 0xff0) == 0x7f0) {
      insn = std::make_unique<McpInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 128:
    if ((code & 0xbf0) == 0x800) {
      insn = std::make_unique<Addu - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 129:
    if ((code & 0xbf0) == 0x810) {
      insn = std::make_unique<Addu - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 130:
    if ((code & 0xbf0) == 0x820) {
      insn = std::make_unique<Adds - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 131:
    if ((code & 0xbf0) == 0x830) {
      insn = std::make_unique<Adds - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 132:
    if ((code & 0xbf0) == 0x840) {
      insn = std::make_unique<Movu - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 133:
    if ((code & 0xbf0) == 0x850) {
      insn = std::make_unique<Movu - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 134:
    if ((code & 0xbf0) == 0x860) {
      insn = std::make_unique<Movs - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 135:
    if ((code & 0xbf0) == 0x870) {
      insn = std::make_unique<Movs - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 136:
    if ((code & 0xbf0) == 0x880) {
      insn = std::make_unique<Subu - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 137:
    if ((code & 0xbf0) == 0x890) {
      insn = std::make_unique<Subu - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 138:
    if ((code & 0xbf0) == 0x8a0) {
      insn = std::make_unique<Subs - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 139:
    if ((code & 0xbf0) == 0x8b0) {
      insn = std::make_unique<Subs - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 140:
    if ((code & 0xbf0) == 0x8c0) {
      insn = std::make_unique<Cmpu - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 141:
    if ((code & 0xbf0) == 0x8d0) {
      insn = std::make_unique<Cmpu - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 142:
    if ((code & 0xbf0) == 0x8e0) {
      insn = std::make_unique<Cmps - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 143:
    if ((code & 0xbf0) == 0x8f0) {
      insn = std::make_unique<Cmps - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 144:
    if ((code & 0xff0) == 0x900) {
      insn = std::make_unique<Mulu.BInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 145:
    if ((code & 0xff0) == 0x910) {
      insn = std::make_unique<Mulu.WInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 146:
    if ((code & 0xff0) == 0x920) {
      insn = std::make_unique<Mulu.DInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 147:
    switch (opcode) {
    case 2:
      if ((code & 0xffff) == 0x2930) {
        insn = std::make_unique<RfeInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 3:
      if ((code & 0xffff) == 0x3930) {
        insn = std::make_unique<SfeInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 4:
      if ((code & 0xffff) == 0x4930) {
        insn = std::make_unique<RfgInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 5:
      if ((code & 0xffff) == 0x5930) {
        insn = std::make_unique<RfnInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xfff0) == 0xe930) {
        insn = std::make_unique<BreakInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xffff) == 0xf930) {
        insn = std::make_unique<HaltInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 148:
    if ((code & 0xbf0) == 0x940) {
      insn = std::make_unique<Addo - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 149:
    if ((code & 0xbf0) == 0x950) {
      insn = std::make_unique<Addo - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 150:
    if ((code & 0xbf0) == 0x960) {
      insn = std::make_unique<Addo - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 151:
    if ((code & 0xff0) == 0x970) {
      insn = std::make_unique<LapcqInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 154:
    if ((code & 0xbf0) == 0x9a0) {
      insn = std::make_unique<Addc - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 155:
    if ((code & 0xff0) == 0x9b0) {
      insn = std::make_unique<Jas - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 159:
    if ((code & 0xfff) == 0x9f0) {
      insn = std::make_unique<Jump - PInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 160:
    if ((code & 0xbf0) == 0xa00) {
      insn = std::make_unique<Add - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 161:
    if ((code & 0xbf0) == 0xa10) {
      insn = std::make_unique<Add - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 162:
    if ((code & 0xbf0) == 0xa20) {
      insn = std::make_unique<Add - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 163:
    if ((code & 0xbf0) == 0xa30) {
      insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 164:
    if ((code & 0xbf0) == 0xa40) {
      insn = std::make_unique<Move - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 165:
    if ((code & 0xbf0) == 0xa50) {
      insn = std::make_unique<Move - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 166:
    if ((code & 0xbf0) == 0xa60) {
      insn = std::make_unique<Move - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 167: /* fall through */
  case 231:
    if ((code & 0xbf0) == 0xa70) {
      insn = std::make_unique<Move - Spr - Mv32Instruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 168:
    if ((code & 0xbf0) == 0xa80) {
      insn = std::make_unique<Sub - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 169:
    if ((code & 0xbf0) == 0xa90) {
      insn = std::make_unique<Sub - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 170:
    if ((code & 0xbf0) == 0xaa0) {
      insn = std::make_unique<Sub - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 171:
    switch (opcode) {
    case 0:
      if ((code & 0xfff0) == 0xab0) {
        insn = std::make_unique<FidxdInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 1:
      if ((code & 0xfff0) == 0x1ab0) {
        insn = std::make_unique<FtagdInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 172:
    if ((code & 0xbf0) == 0xac0) {
      insn = std::make_unique<Cmp - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 173:
    if ((code & 0xbf0) == 0xad0) {
      insn = std::make_unique<Cmp - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 174:
    if ((code & 0xbf0) == 0xae0) {
      insn = std::make_unique<Cmp - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 176:
    if ((code & 0xbf0) == 0xb00) {
      insn = std::make_unique<And - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 177:
    if ((code & 0xbf0) == 0xb10) {
      insn = std::make_unique<And - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 178:
    if ((code & 0xbf0) == 0xb20) {
      insn = std::make_unique<And - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 179:
    if ((code & 0xff0) == 0xb30) {
      insn = std::make_unique<Jasc - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 180:
    if ((code & 0xbf0) == 0xb40) {
      insn = std::make_unique<Or - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 181:
    if ((code & 0xbf0) == 0xb50) {
      insn = std::make_unique<Or - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 182:
    if ((code & 0xbf0) == 0xb60) {
      insn = std::make_unique<Or - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 183:
    if ((code & 0xff0) == 0xb70) {
      insn = std::make_unique<Move - R - SsInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 184: /* fall through */
  case 248:
    if ((code & 0xfbf0) == 0xb80) {
      insn = std::make_unique<Test - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 185: /* fall through */
  case 249:
    if ((code & 0xfbf0) == 0xb90) {
      insn = std::make_unique<Test - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 186: /* fall through */
  case 250:
    if ((code & 0xfbf0) == 0xba0) {
      insn = std::make_unique<Test - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 187: /* fall through */
  case 251:
    if ((code & 0xbf0) == 0xbb0) {
      insn = std::make_unique<Movem - M - R - V32Instruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 188: /* fall through */
  case 252:
    if ((code & 0xbf0) == 0xbc0) {
      insn = std::make_unique<Move - R - M.B - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 189: /* fall through */
  case 253:
    if ((code & 0xbf0) == 0xbd0) {
      insn = std::make_unique<Move - R - M.W - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 190: /* fall through */
  case 254:
    if ((code & 0xbf0) == 0xbe0) {
      insn = std::make_unique<Move - R - M.D - MInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 191: /* fall through */
  case 255:
    if ((code & 0xbf0) == 0xbf0) {
      insn = std::make_unique<Movem - R - M - V32Instruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 192:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x800) {
        insn = std::make_unique<Addu - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc0f) {
        insn = std::make_unique<AdducbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 193:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x810) {
        insn = std::make_unique<Addu - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc1f) {
        insn = std::make_unique<AdducwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 194:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x820) {
        insn = std::make_unique<Adds - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc2f) {
        insn = std::make_unique<AddscbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 195:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x830) {
        insn = std::make_unique<Adds - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc3f) {
        insn = std::make_unique<AddscwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 196:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x840) {
        insn = std::make_unique<Movu - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc4f) {
        insn = std::make_unique<MovucbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 197:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x850) {
        insn = std::make_unique<Movu - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc5f) {
        insn = std::make_unique<MovucwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 198:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x860) {
        insn = std::make_unique<Movs - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc6f) {
        insn = std::make_unique<MovscbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 199:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x870) {
        insn = std::make_unique<Movs - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc7f) {
        insn = std::make_unique<MovscwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 200:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x880) {
        insn = std::make_unique<Subu - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc8f) {
        insn = std::make_unique<SubucbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 201:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x890) {
        insn = std::make_unique<Subu - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xc9f) {
        insn = std::make_unique<SubucwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 202:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x8a0) {
        insn = std::make_unique<Subs - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xcaf) {
        insn = std::make_unique<SubscbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 203:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x8b0) {
        insn = std::make_unique<Subs - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xcbf) {
        insn = std::make_unique<SubscwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 204:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x8c0) {
        insn = std::make_unique<Cmpu - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xccf) {
        insn = std::make_unique<CmpucbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 205:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x8d0) {
        insn = std::make_unique<Cmpu - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xcdf) {
        insn = std::make_unique<CmpucwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 206:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x8e0) {
        insn = std::make_unique<Cmps - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xcef) {
        insn = std::make_unique<CmpscbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 207:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x8f0) {
        insn = std::make_unique<Cmps - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xcff) {
        insn = std::make_unique<CmpscwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 208:
    if ((code & 0xff0) == 0xd00) {
      insn = std::make_unique<Muls.BInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 209:
    if ((code & 0xff0) == 0xd10) {
      insn = std::make_unique<Muls.WInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 210:
    if ((code & 0xff0) == 0xd20) {
      insn = std::make_unique<Muls.DInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 211:
    switch (opcode) {
    case 0:
      if ((code & 0xfff0) == 0xd30) {
        insn = std::make_unique<FidxiInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 1:
      if ((code & 0xfff0) == 0x1d30) {
        insn = std::make_unique<FtagiInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 212:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x940) {
        insn = std::make_unique<Addo - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xd4f) {
        insn = std::make_unique<Addo - CbInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 213:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x950) {
        insn = std::make_unique<Addo - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xd5f) {
        insn = std::make_unique<Addo - CwInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 214:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x960) {
        insn = std::make_unique<Addo - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xd6f) {
        insn = std::make_unique<Addo - CdInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 215:
    if ((code & 0xfff) == 0xd7f) {
      insn = std::make_unique<Lapc - DInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 218:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0x9a0) {
        insn = std::make_unique<Addc - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xdaf) {
        insn = std::make_unique<Addc - CInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 219:
    if ((code & 0xfff) == 0xdbf) {
      insn = std::make_unique<Jas - CInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 220:
    if ((code & 0xfff) == 0xdcf) {
      insn = std::make_unique<Bound - CbInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 221:
    if ((code & 0xfff) == 0xddf) {
      insn = std::make_unique<Bound - CwInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 222:
    if ((code & 0xfff) == 0xdef) {
      insn = std::make_unique<Bound - CdInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 223:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 15:
      if ((code & 0xfff) == 0xdff) {
        insn = std::make_unique<Bcc - WInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      if ((code & 0xffff) == 0xedff) {
        insn = std::make_unique<Ba - WInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 224:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa00) {
        insn = std::make_unique<Add - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe0f) {
        insn = std::make_unique<AddcbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 225:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa10) {
        insn = std::make_unique<Add - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe1f) {
        insn = std::make_unique<AddcwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 226:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa20) {
        insn = std::make_unique<Add - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe2f) {
        insn = std::make_unique<AddcdrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 227:
    switch (opcode) {
    case 0: /* fall through */
    case 1: /* fall through */
    case 4: /* fall through */
    case 8:
      if ((code & 0xbf0) == 0xa30) {
        insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 2:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0x2e3f) {
          insn = std::make_unique<Move - C - Sprv32 - P2Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 3:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0x3e3f) {
          insn = std::make_unique<Move - C - Sprv32 - P3Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 5:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0x5e3f) {
          insn = std::make_unique<Move - C - Sprv32 - P5Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 6:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0x6e3f) {
          insn = std::make_unique<Move - C - Sprv32 - P6Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 7:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0x7e3f) {
          insn = std::make_unique<Move - C - Sprv32 - P7Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 9:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0x9e3f) {
          insn = std::make_unique<Move - C - Sprv32 - P9Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 10:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0xae3f) {
          insn = std::make_unique<Move - C - Sprv32 - P10Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 11:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0xbe3f) {
          insn = std::make_unique<Move - C - Sprv32 - P11Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 12:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0xce3f) {
          insn = std::make_unique<Move - C - Sprv32 - P12Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 13:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0xde3f) {
          insn = std::make_unique<Move - C - Sprv32 - P13Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 14:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0xee3f) {
          insn = std::make_unique<Move - C - Sprv32 - P14Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      switch (opcode) {
      case 0:  /* fall through */
      case 1:  /* fall through */
      case 2:  /* fall through */
      case 3:  /* fall through */
      case 4:  /* fall through */
      case 5:  /* fall through */
      case 6:  /* fall through */
      case 7:  /* fall through */
      case 8:  /* fall through */
      case 9:  /* fall through */
      case 10: /* fall through */
      case 11: /* fall through */
      case 12: /* fall through */
      case 13: /* fall through */
      case 14:
        if ((code & 0xbf0) == 0xa30) {
          insn = std::make_unique<Move - M - Sprv32Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      case 15:
        if ((code & 0xffff) == 0xfe3f) {
          insn = std::make_unique<Move - C - Sprv32 - P15Instruction>{opcode};
        } else {
          insn = std::make_unique<EmptyInstruction>{opcode};
        }
      default:
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 228:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa40) {
        insn = std::make_unique<Move - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe4f) {
        insn = std::make_unique<MovecbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 229:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa50) {
        insn = std::make_unique<Move - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe5f) {
        insn = std::make_unique<MovecwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 230:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa60) {
        insn = std::make_unique<Move - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe6f) {
        insn = std::make_unique<MovecdrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 232:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa80) {
        insn = std::make_unique<Sub - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe8f) {
        insn = std::make_unique<SubcbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 233:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xa90) {
        insn = std::make_unique<Sub - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xe9f) {
        insn = std::make_unique<SubcwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 234:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xaa0) {
        insn = std::make_unique<Sub - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xeaf) {
        insn = std::make_unique<SubcdrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 235:
    if ((code & 0xfff) == 0xebf) {
      insn = std::make_unique<Bas - CInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 236:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xac0) {
        insn = std::make_unique<Cmp - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xecf) {
        insn = std::make_unique<CmpcbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 237:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xad0) {
        insn = std::make_unique<Cmp - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xedf) {
        insn = std::make_unique<CmpcwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 238:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xae0) {
        insn = std::make_unique<Cmp - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xeef) {
        insn = std::make_unique<CmpcdrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 239:
    if ((code & 0xfff) == 0xeff) {
      insn = std::make_unique<Basc - CInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 240:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xb00) {
        insn = std::make_unique<And - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xf0f) {
        insn = std::make_unique<AndcbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 241:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xb10) {
        insn = std::make_unique<And - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xf1f) {
        insn = std::make_unique<AndcwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 242:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xb20) {
        insn = std::make_unique<And - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xf2f) {
        insn = std::make_unique<AndcdrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 243:
    if ((code & 0xfff) == 0xf3f) {
      insn = std::make_unique<Jasc - CInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 244:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xb40) {
        insn = std::make_unique<Or - M.B - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xf4f) {
        insn = std::make_unique<OrcbrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 245:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xb50) {
        insn = std::make_unique<Or - M.W - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xf5f) {
        insn = std::make_unique<OrcwrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 246:
    switch (opcode) {
    case 0:  /* fall through */
    case 1:  /* fall through */
    case 2:  /* fall through */
    case 3:  /* fall through */
    case 4:  /* fall through */
    case 5:  /* fall through */
    case 6:  /* fall through */
    case 7:  /* fall through */
    case 8:  /* fall through */
    case 9:  /* fall through */
    case 10: /* fall through */
    case 11: /* fall through */
    case 12: /* fall through */
    case 13: /* fall through */
    case 14:
      if ((code & 0xbf0) == 0xb60) {
        insn = std::make_unique<Or - M.D - MInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    case 15:
      if ((code & 0xfff) == 0xf6f) {
        insn = std::make_unique<OrcdrInstruction>{opcode};
      } else {
        insn = std::make_unique<EmptyInstruction>{opcode};
      }
    default:
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  case 247:
    if ((code & 0xff0) == 0xf70) {
      insn = std::make_unique<Move - Ss - RInstruction>{opcode};
    } else {
      insn = std::make_unique<EmptyInstruction>{opcode};
    }
  default:
    insn = std::make_unique<EmptyInstruction>{opcode};
  }

  // Demand extracting fields to derived class strategy method
  insn->parseSfmt(code);
  return insn;
}
void Move.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void MoveqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_s6 = extractLSB0<int>(insn, 16, 5, 6);
}

void Movs.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movs.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movu.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movu.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void MovecbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void MovecwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void MovecdrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void MovscbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
}

void MovscwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
}

void MovucbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
}

void MovucwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
}

void AddqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_u6 = extractLSB0<unsigned int>(insn, 16, 5, 6);
}

void SubqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_u6 = extractLSB0<unsigned int>(insn, 16, 5, 6);
}

void Cmp - R.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmp - R.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmp - R.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmp - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmp - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmp - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void CmpcbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void CmpcwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void CmpcdrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void CmpqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_s6 = extractLSB0<int>(insn, 16, 5, 6);
}

void Cmps - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmps - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void CmpscbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void CmpscwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Cmpu - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Cmpu - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void CmpucbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void CmpucwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movs - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movs - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movu - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movu - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - R - Sprv32Instruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - Spr - Rv32Instruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - M - Sprv32Instruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - C - Sprv32 - P2Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P3Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P5Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P6Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P7Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P9Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P10Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P11Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P12Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P13Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P14Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - C - Sprv32 - P15Instruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Move - Spr - Mv32Instruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - Ss - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - R - SsInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movem - R - M - V32Instruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Movem - M - R - V32Instruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Add.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Add.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Add.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Add - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Add - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Add - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AddcbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AddcwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AddcdrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Adds.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Adds.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Adds - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Adds - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AddscbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AddscwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Addu.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addu.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addu - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addu - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AdducbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AdducwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Sub.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Sub.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Sub.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Sub - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Sub - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Sub - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void SubcbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void SubcwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void SubcdrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Subs.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Subs.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Subs - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Subs - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void SubscbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void SubscwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Subu.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Subu.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Subu - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Subu - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void SubucbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void SubucwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Addc - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addc - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addc - CInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Lapc - DInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword_pcrel =
      Add(pc, (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0));
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void LapcqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_qo = Add(pc, Sll((extractLSB0<unsigned int>(insn, 16, 3, 4)), 1));
}

void Addi.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addi.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addi.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Neg.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Neg.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Neg.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Test - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Test - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Test - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - R - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - R - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Move - R - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Muls.BInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Muls.WInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Muls.DInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Mulu.BInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Mulu.WInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Mulu.DInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void McpInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void DstepInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AbsInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void And.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void And.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void And.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void And - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void And - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void And - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AndcbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AndcwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AndcdrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void AndqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_s6 = extractLSB0<int>(insn, 16, 5, 6);
}

void Orr.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Orr.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Orr.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Or - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Or - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Or - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void OrcbrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void OrcwrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void OrcdrInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void OrqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_s6 = extractLSB0<int>(insn, 16, 5, 6);
}

void XorInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void SwapInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Asrr.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Asrr.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Asrr.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AsrqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_u5 = extractLSB0<unsigned int>(insn, 16, 4, 5);
}

void Lsrr.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Lsrr.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Lsrr.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void LsrqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_u5 = extractLSB0<unsigned int>(insn, 16, 4, 5);
}

void Lslr.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Lslr.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Lslr.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void LslqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_u5 = extractLSB0<unsigned int>(insn, 16, 4, 5);
}

void BtstInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void BtstqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_u5 = extractLSB0<unsigned int>(insn, 16, 4, 5);
}

void SetfInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
  f_dstsrc = And(Or(f_operand1, Sll((f_operand2), 4)), 255);
}

void ClearfInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
  f_dstsrc = And(Or(f_operand1, Sll((f_operand2), 4)), 255);
}

void RfeInstruction::parseSfmt(uint8_t *code) {}

void SfeInstruction::parseSfmt(uint8_t *code) {}

void RfgInstruction::parseSfmt(uint8_t *code) {}

void RfnInstruction::parseSfmt(uint8_t *code) {}

void HaltInstruction::parseSfmt(uint8_t *code) {}

void Bcc - BInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_disp9_lo = extractLSB0<unsigned int>(insn, 16, 7, 7);
  sfmt.f_disp9_hi = extractLSB0<int>(insn, 16, 0, 1);
  {
    int tmp_abslo;
    int tmp_absval;
    tmp_abslo = Sll((f_disp9_lo), 1);
    tmp_absval = Or(((Ne(f_disp9_hi, 0)) ? (Inv(255)) : (0)), tmp_abslo);
    f_disp9 = Add(Add(pc, tmp_absval), ((;) ? (0) : (2)));
  }
}

void Ba - BInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_disp9_lo = extractLSB0<unsigned int>(insn, 16, 7, 7);
  sfmt.f_disp9_hi = extractLSB0<int>(insn, 16, 0, 1);
  {
    int tmp_abslo;
    int tmp_absval;
    tmp_abslo = Sll((f_disp9_lo), 1);
    tmp_absval = Or(((Ne(f_disp9_hi, 0)) ? (Inv(255)) : (0)), tmp_abslo);
    f_disp9 = Add(Add(pc, tmp_absval), ((;) ? (0) : (2)));
  }
}

void Bcc - WInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word_pcrel =
      Add(ExtTo<int32_t>(TruncTo<int16_t>(
              (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0))),
          Add(pc, ((;) ? (0) : (4))));
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Ba - WInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word_pcrel =
      Add(ExtTo<int32_t>(TruncTo<int16_t>(
              (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0))),
          Add(pc, ((;) ? (0) : (4))));
}

void Jas - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Jas - CInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Jump - PInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Bas - CInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword_pcrel =
      Add(pc, (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0));
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Jasc - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Jasc - CInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Basc - CInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword_pcrel =
      Add(pc, (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0));
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void BreakInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_u4 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Bound - R.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Bound - R.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Bound - R.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Bound - CbInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Bound - CwInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Bound - CdInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void SccInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void LzInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void AddoqInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_s8 = extractLSB0<int>(insn, 16, 7, 8);
}

void Addo - M.B - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addo - M.W - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addo - M.D - MInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_memmode = extractLSB0<unsigned int>(insn, 16, 10, 1);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addo - CbInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _byte =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Addo - CwInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _word =
      (0 | extractLSB0<unsigned int>(word_1, 32, 15, 16) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Addo - CdInstruction::parseSfmt(uint8_t *code) {
  word_1 = getInstruction<uint32_t>(pc + 2);
  sfmt.f_indir_pc + _dword =
      (0 | extractLSB0<unsigned int>(word_1, 32, 31, 32) << 0);
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
}

void Addi - Acr.B - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addi - Acr.W - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void Addi - Acr.D - RInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand2 = extractLSB0<unsigned int>(insn, 16, 15, 4);
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void FidxiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void FtagiInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void FidxdInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

void FtagdInstruction::parseSfmt(uint8_t *code) {
  sfmt.f_operand1 = extractLSB0<unsigned int>(insn, 16, 3, 4);
}

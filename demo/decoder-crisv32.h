class Instruction {
public:
  static std::unique_ptr<Instruction> make(unsigned int opcode, uint32_t code) {
    switch (opcode) {
      case 0 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 1 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 2 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 3 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 4 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 5 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 6 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 7 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 8 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 9 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 10 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 11 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 12 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 13 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 14 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 15 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xf00) == 0x0) {
              auto insn = std::make_unique<Bcc-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xff00) == 0xe000) {
              auto insn = std::make_unique<Ba-BInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 16 : /* fall through */
      case 17 : /* fall through */
      case 18 : /* fall through */
      case 19 : /* fall through */
      case 20 : /* fall through */
      case 21 : /* fall through */
      case 22 : /* fall through */
      case 23 : /* fall through */
      case 24 : /* fall through */
      case 25 : /* fall through */
      case 26 : /* fall through */
      case 27 : /* fall through */
      case 28 : /* fall through */
      case 29 : /* fall through */
      case 30 : /* fall through */
      case 31 :
        if ((code & 0xf00) == 0x100) {
          auto insn = std::make_unique<AddoqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 32 : /* fall through */
      case 33 : /* fall through */
      case 34 : /* fall through */
      case 35 :
        if ((code & 0xfc0) == 0x200) {
          auto insn = std::make_unique<AddqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 36 : /* fall through */
      case 37 : /* fall through */
      case 38 : /* fall through */
      case 39 :
        if ((code & 0xfc0) == 0x240) {
          auto insn = std::make_unique<MoveqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 40 : /* fall through */
      case 41 : /* fall through */
      case 42 : /* fall through */
      case 43 :
        if ((code & 0xfc0) == 0x280) {
          auto insn = std::make_unique<SubqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 44 : /* fall through */
      case 45 : /* fall through */
      case 46 : /* fall through */
      case 47 :
        if ((code & 0xfc0) == 0x2c0) {
          auto insn = std::make_unique<CmpqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 48 : /* fall through */
      case 49 : /* fall through */
      case 50 : /* fall through */
      case 51 :
        if ((code & 0xfc0) == 0x300) {
          auto insn = std::make_unique<AndqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 52 : /* fall through */
      case 53 : /* fall through */
      case 54 : /* fall through */
      case 55 :
        if ((code & 0xfc0) == 0x340) {
          auto insn = std::make_unique<OrqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 56 : /* fall through */
      case 57 :
        if ((code & 0xfe0) == 0x380) {
          auto insn = std::make_unique<BtstqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 58 : /* fall through */
      case 59 :
        if ((code & 0xfe0) == 0x3a0) {
          auto insn = std::make_unique<AsrqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 60 : /* fall through */
      case 61 :
        if ((code & 0xfe0) == 0x3c0) {
          auto insn = std::make_unique<LslqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 62 : /* fall through */
      case 63 :
        if ((code & 0xfe0) == 0x3e0) {
          auto insn = std::make_unique<LsrqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 64 :
        if ((code & 0xff0) == 0x400) {
          auto insn = std::make_unique<Addu.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 65 :
        if ((code & 0xff0) == 0x410) {
          auto insn = std::make_unique<Addu.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 66 :
        if ((code & 0xff0) == 0x420) {
          auto insn = std::make_unique<Adds.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 67 :
        if ((code & 0xff0) == 0x430) {
          auto insn = std::make_unique<Adds.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 68 :
        if ((code & 0xff0) == 0x440) {
          auto insn = std::make_unique<Movu.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 69 :
        if ((code & 0xff0) == 0x450) {
          auto insn = std::make_unique<Movu.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 70 :
        if ((code & 0xff0) == 0x460) {
          auto insn = std::make_unique<Movs.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 71 :
        if ((code & 0xff0) == 0x470) {
          auto insn = std::make_unique<Movs.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 72 :
        if ((code & 0xff0) == 0x480) {
          auto insn = std::make_unique<Subu.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 73 :
        if ((code & 0xff0) == 0x490) {
          auto insn = std::make_unique<Subu.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 74 :
        if ((code & 0xff0) == 0x4a0) {
          auto insn = std::make_unique<Subs.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 75 :
        if ((code & 0xff0) == 0x4b0) {
          auto insn = std::make_unique<Subs.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 76 :
        if ((code & 0xff0) == 0x4c0) {
          auto insn = std::make_unique<Lslr.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 77 :
        if ((code & 0xff0) == 0x4d0) {
          auto insn = std::make_unique<Lslr.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 78 :
        if ((code & 0xff0) == 0x4e0) {
          auto insn = std::make_unique<Lslr.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 79 :
        if ((code & 0xff0) == 0x4f0) {
          auto insn = std::make_unique<BtstInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 80 :
        if ((code & 0xff0) == 0x500) {
          auto insn = std::make_unique<Addi.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 81 :
        if ((code & 0xff0) == 0x510) {
          auto insn = std::make_unique<Addi.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 82 :
        if ((code & 0xff0) == 0x520) {
          auto insn = std::make_unique<Addi.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 83 :
        if ((code & 0xff0) == 0x530) {
          auto insn = std::make_unique<SccInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 84 :
        if ((code & 0xff0) == 0x540) {
          auto insn = std::make_unique<Addi-Acr.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 85 :
        if ((code & 0xff0) == 0x550) {
          auto insn = std::make_unique<Addi-Acr.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 86 :
        if ((code & 0xff0) == 0x560) {
          auto insn = std::make_unique<Addi-Acr.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 87 :
        if ((code & 0xff0) == 0x570) {
          auto insn = std::make_unique<Addc-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 88 :
        if ((code & 0xff0) == 0x580) {
          auto insn = std::make_unique<Neg.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 89 :
        if ((code & 0xff0) == 0x590) {
          auto insn = std::make_unique<Neg.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 90 :
        if ((code & 0xff0) == 0x5a0) {
          auto insn = std::make_unique<Neg.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 91 :
        if ((code & 0xff0) == 0x5b0) {
          auto insn = std::make_unique<SetfInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 92 :
        if ((code & 0xff0) == 0x5c0) {
          auto insn = std::make_unique<Bound-R.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 93 :
        if ((code & 0xff0) == 0x5d0) {
          auto insn = std::make_unique<Bound-R.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 94 :
        if ((code & 0xff0) == 0x5e0) {
          auto insn = std::make_unique<Bound-R.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 95 :
        if ((code & 0xff0) == 0x5f0) {
          auto insn = std::make_unique<ClearfInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 96 :
        if ((code & 0xff0) == 0x600) {
          auto insn = std::make_unique<Add.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 97 :
        if ((code & 0xff0) == 0x610) {
          auto insn = std::make_unique<Add.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 98 :
        if ((code & 0xff0) == 0x620) {
          auto insn = std::make_unique<Add.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 99 :
        if ((code & 0xff0) == 0x630) {
          auto insn = std::make_unique<Move-R-Sprv32Instruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 100 :
        if ((code & 0xff0) == 0x640) {
          auto insn = std::make_unique<Move.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 101 :
        if ((code & 0xff0) == 0x650) {
          auto insn = std::make_unique<Move.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 102 :
        if ((code & 0xff0) == 0x660) {
          auto insn = std::make_unique<Move.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 103 :
        if ((code & 0xff0) == 0x670) {
          auto insn = std::make_unique<Move-Spr-Rv32Instruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 104 :
        if ((code & 0xff0) == 0x680) {
          auto insn = std::make_unique<Sub.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 105 :
        if ((code & 0xff0) == 0x690) {
          auto insn = std::make_unique<Sub.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 106 :
        if ((code & 0xff0) == 0x6a0) {
          auto insn = std::make_unique<Sub.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 107 :
        if ((code & 0xff0) == 0x6b0) {
          auto insn = std::make_unique<AbsInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 108 :
        if ((code & 0xff0) == 0x6c0) {
          auto insn = std::make_unique<Cmp-R.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 109 :
        if ((code & 0xff0) == 0x6d0) {
          auto insn = std::make_unique<Cmp-R.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 110 :
        if ((code & 0xff0) == 0x6e0) {
          auto insn = std::make_unique<Cmp-R.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 111 :
        if ((code & 0xff0) == 0x6f0) {
          auto insn = std::make_unique<DstepInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 112 :
        if ((code & 0xff0) == 0x700) {
          auto insn = std::make_unique<And.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 113 :
        if ((code & 0xff0) == 0x710) {
          auto insn = std::make_unique<And.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 114 :
        if ((code & 0xff0) == 0x720) {
          auto insn = std::make_unique<And.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 115 :
        if ((code & 0xff0) == 0x730) {
          auto insn = std::make_unique<LzInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 116 :
        if ((code & 0xff0) == 0x740) {
          auto insn = std::make_unique<Orr.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 117 :
        if ((code & 0xff0) == 0x750) {
          auto insn = std::make_unique<Orr.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 118 :
        if ((code & 0xff0) == 0x760) {
          auto insn = std::make_unique<Orr.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 119 :
        if ((code & 0xff0) == 0x770) {
          auto insn = std::make_unique<SwapInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 120 :
        if ((code & 0xff0) == 0x780) {
          auto insn = std::make_unique<Asrr.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 121 :
        if ((code & 0xff0) == 0x790) {
          auto insn = std::make_unique<Asrr.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 122 :
        if ((code & 0xff0) == 0x7a0) {
          auto insn = std::make_unique<Asrr.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 123 :
        if ((code & 0xff0) == 0x7b0) {
          auto insn = std::make_unique<XorInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 124 :
        if ((code & 0xff0) == 0x7c0) {
          auto insn = std::make_unique<Lsrr.B-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 125 :
        if ((code & 0xff0) == 0x7d0) {
          auto insn = std::make_unique<Lsrr.W-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 126 :
        if ((code & 0xff0) == 0x7e0) {
          auto insn = std::make_unique<Lsrr.D-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 127 :
        if ((code & 0xff0) == 0x7f0) {
          auto insn = std::make_unique<McpInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 128 :
        if ((code & 0xbf0) == 0x800) {
          auto insn = std::make_unique<Addu-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 129 :
        if ((code & 0xbf0) == 0x810) {
          auto insn = std::make_unique<Addu-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 130 :
        if ((code & 0xbf0) == 0x820) {
          auto insn = std::make_unique<Adds-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 131 :
        if ((code & 0xbf0) == 0x830) {
          auto insn = std::make_unique<Adds-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 132 :
        if ((code & 0xbf0) == 0x840) {
          auto insn = std::make_unique<Movu-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 133 :
        if ((code & 0xbf0) == 0x850) {
          auto insn = std::make_unique<Movu-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 134 :
        if ((code & 0xbf0) == 0x860) {
          auto insn = std::make_unique<Movs-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 135 :
        if ((code & 0xbf0) == 0x870) {
          auto insn = std::make_unique<Movs-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 136 :
        if ((code & 0xbf0) == 0x880) {
          auto insn = std::make_unique<Subu-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 137 :
        if ((code & 0xbf0) == 0x890) {
          auto insn = std::make_unique<Subu-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 138 :
        if ((code & 0xbf0) == 0x8a0) {
          auto insn = std::make_unique<Subs-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 139 :
        if ((code & 0xbf0) == 0x8b0) {
          auto insn = std::make_unique<Subs-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 140 :
        if ((code & 0xbf0) == 0x8c0) {
          auto insn = std::make_unique<Cmpu-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 141 :
        if ((code & 0xbf0) == 0x8d0) {
          auto insn = std::make_unique<Cmpu-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 142 :
        if ((code & 0xbf0) == 0x8e0) {
          auto insn = std::make_unique<Cmps-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 143 :
        if ((code & 0xbf0) == 0x8f0) {
          auto insn = std::make_unique<Cmps-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 144 :
        if ((code & 0xff0) == 0x900) {
          auto insn = std::make_unique<Mulu.BInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 145 :
        if ((code & 0xff0) == 0x910) {
          auto insn = std::make_unique<Mulu.WInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 146 :
        if ((code & 0xff0) == 0x920) {
          auto insn = std::make_unique<Mulu.DInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 147 :
        switch (opcode) {
          case 2 :
            if ((code & 0xffff) == 0x2930) {
              auto insn = std::make_unique<RfeInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 3 :
            if ((code & 0xffff) == 0x3930) {
              auto insn = std::make_unique<SfeInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 4 :
            if ((code & 0xffff) == 0x4930) {
              auto insn = std::make_unique<RfgInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 5 :
            if ((code & 0xffff) == 0x5930) {
              auto insn = std::make_unique<RfnInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xfff0) == 0xe930) {
              auto insn = std::make_unique<BreakInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xffff) == 0xf930) {
              auto insn = std::make_unique<HaltInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 148 :
        if ((code & 0xbf0) == 0x940) {
          auto insn = std::make_unique<Addo-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 149 :
        if ((code & 0xbf0) == 0x950) {
          auto insn = std::make_unique<Addo-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 150 :
        if ((code & 0xbf0) == 0x960) {
          auto insn = std::make_unique<Addo-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 151 :
        if ((code & 0xff0) == 0x970) {
          auto insn = std::make_unique<LapcqInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 154 :
        if ((code & 0xbf0) == 0x9a0) {
          auto insn = std::make_unique<Addc-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 155 :
        if ((code & 0xff0) == 0x9b0) {
          auto insn = std::make_unique<Jas-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 159 :
        if ((code & 0xfff) == 0x9f0) {
          auto insn = std::make_unique<Jump-PInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 160 :
        if ((code & 0xbf0) == 0xa00) {
          auto insn = std::make_unique<Add-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 161 :
        if ((code & 0xbf0) == 0xa10) {
          auto insn = std::make_unique<Add-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 162 :
        if ((code & 0xbf0) == 0xa20) {
          auto insn = std::make_unique<Add-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 163 :
        if ((code & 0xbf0) == 0xa30) {
          auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 164 :
        if ((code & 0xbf0) == 0xa40) {
          auto insn = std::make_unique<Move-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 165 :
        if ((code & 0xbf0) == 0xa50) {
          auto insn = std::make_unique<Move-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 166 :
        if ((code & 0xbf0) == 0xa60) {
          auto insn = std::make_unique<Move-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 167 : /* fall through */
      case 231 :
        if ((code & 0xbf0) == 0xa70) {
          auto insn = std::make_unique<Move-Spr-Mv32Instruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 168 :
        if ((code & 0xbf0) == 0xa80) {
          auto insn = std::make_unique<Sub-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 169 :
        if ((code & 0xbf0) == 0xa90) {
          auto insn = std::make_unique<Sub-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 170 :
        if ((code & 0xbf0) == 0xaa0) {
          auto insn = std::make_unique<Sub-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 171 :
        switch (opcode) {
          case 0 :
            if ((code & 0xfff0) == 0xab0) {
              auto insn = std::make_unique<FidxdInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 1 :
            if ((code & 0xfff0) == 0x1ab0) {
              auto insn = std::make_unique<FtagdInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 172 :
        if ((code & 0xbf0) == 0xac0) {
          auto insn = std::make_unique<Cmp-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 173 :
        if ((code & 0xbf0) == 0xad0) {
          auto insn = std::make_unique<Cmp-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 174 :
        if ((code & 0xbf0) == 0xae0) {
          auto insn = std::make_unique<Cmp-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 176 :
        if ((code & 0xbf0) == 0xb00) {
          auto insn = std::make_unique<And-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 177 :
        if ((code & 0xbf0) == 0xb10) {
          auto insn = std::make_unique<And-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 178 :
        if ((code & 0xbf0) == 0xb20) {
          auto insn = std::make_unique<And-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 179 :
        if ((code & 0xff0) == 0xb30) {
          auto insn = std::make_unique<Jasc-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 180 :
        if ((code & 0xbf0) == 0xb40) {
          auto insn = std::make_unique<Or-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 181 :
        if ((code & 0xbf0) == 0xb50) {
          auto insn = std::make_unique<Or-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 182 :
        if ((code & 0xbf0) == 0xb60) {
          auto insn = std::make_unique<Or-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 183 :
        if ((code & 0xff0) == 0xb70) {
          auto insn = std::make_unique<Move-R-SsInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 184 : /* fall through */
      case 248 :
        if ((code & 0xfbf0) == 0xb80) {
          auto insn = std::make_unique<Test-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 185 : /* fall through */
      case 249 :
        if ((code & 0xfbf0) == 0xb90) {
          auto insn = std::make_unique<Test-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 186 : /* fall through */
      case 250 :
        if ((code & 0xfbf0) == 0xba0) {
          auto insn = std::make_unique<Test-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 187 : /* fall through */
      case 251 :
        if ((code & 0xbf0) == 0xbb0) {
          auto insn = std::make_unique<Movem-M-R-V32Instruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 188 : /* fall through */
      case 252 :
        if ((code & 0xbf0) == 0xbc0) {
          auto insn = std::make_unique<Move-R-M.B-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 189 : /* fall through */
      case 253 :
        if ((code & 0xbf0) == 0xbd0) {
          auto insn = std::make_unique<Move-R-M.W-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 190 : /* fall through */
      case 254 :
        if ((code & 0xbf0) == 0xbe0) {
          auto insn = std::make_unique<Move-R-M.D-MInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 191 : /* fall through */
      case 255 :
        if ((code & 0xbf0) == 0xbf0) {
          auto insn = std::make_unique<Movem-R-M-V32Instruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 192 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x800) {
              auto insn = std::make_unique<Addu-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc0f) {
              auto insn = std::make_unique<AdducbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 193 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x810) {
              auto insn = std::make_unique<Addu-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc1f) {
              auto insn = std::make_unique<AdducwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 194 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x820) {
              auto insn = std::make_unique<Adds-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc2f) {
              auto insn = std::make_unique<AddscbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 195 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x830) {
              auto insn = std::make_unique<Adds-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc3f) {
              auto insn = std::make_unique<AddscwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 196 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x840) {
              auto insn = std::make_unique<Movu-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc4f) {
              auto insn = std::make_unique<MovucbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 197 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x850) {
              auto insn = std::make_unique<Movu-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc5f) {
              auto insn = std::make_unique<MovucwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 198 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x860) {
              auto insn = std::make_unique<Movs-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc6f) {
              auto insn = std::make_unique<MovscbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 199 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x870) {
              auto insn = std::make_unique<Movs-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc7f) {
              auto insn = std::make_unique<MovscwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 200 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x880) {
              auto insn = std::make_unique<Subu-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc8f) {
              auto insn = std::make_unique<SubucbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 201 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x890) {
              auto insn = std::make_unique<Subu-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xc9f) {
              auto insn = std::make_unique<SubucwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 202 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x8a0) {
              auto insn = std::make_unique<Subs-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xcaf) {
              auto insn = std::make_unique<SubscbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 203 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x8b0) {
              auto insn = std::make_unique<Subs-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xcbf) {
              auto insn = std::make_unique<SubscwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 204 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x8c0) {
              auto insn = std::make_unique<Cmpu-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xccf) {
              auto insn = std::make_unique<CmpucbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 205 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x8d0) {
              auto insn = std::make_unique<Cmpu-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xcdf) {
              auto insn = std::make_unique<CmpucwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 206 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x8e0) {
              auto insn = std::make_unique<Cmps-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xcef) {
              auto insn = std::make_unique<CmpscbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 207 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x8f0) {
              auto insn = std::make_unique<Cmps-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xcff) {
              auto insn = std::make_unique<CmpscwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 208 :
        if ((code & 0xff0) == 0xd00) {
          auto insn = std::make_unique<Muls.BInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 209 :
        if ((code & 0xff0) == 0xd10) {
          auto insn = std::make_unique<Muls.WInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 210 :
        if ((code & 0xff0) == 0xd20) {
          auto insn = std::make_unique<Muls.DInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 211 :
        switch (opcode) {
          case 0 :
            if ((code & 0xfff0) == 0xd30) {
              auto insn = std::make_unique<FidxiInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 1 :
            if ((code & 0xfff0) == 0x1d30) {
              auto insn = std::make_unique<FtagiInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 212 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x940) {
              auto insn = std::make_unique<Addo-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xd4f) {
              auto insn = std::make_unique<Addo-CbInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 213 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x950) {
              auto insn = std::make_unique<Addo-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xd5f) {
              auto insn = std::make_unique<Addo-CwInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 214 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x960) {
              auto insn = std::make_unique<Addo-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xd6f) {
              auto insn = std::make_unique<Addo-CdInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 215 :
        if ((code & 0xfff) == 0xd7f) {
          auto insn = std::make_unique<Lapc-DInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 218 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0x9a0) {
              auto insn = std::make_unique<Addc-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xdaf) {
              auto insn = std::make_unique<Addc-CInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 219 :
        if ((code & 0xfff) == 0xdbf) {
          auto insn = std::make_unique<Jas-CInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 220 :
        if ((code & 0xfff) == 0xdcf) {
          auto insn = std::make_unique<Bound-CbInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 221 :
        if ((code & 0xfff) == 0xddf) {
          auto insn = std::make_unique<Bound-CwInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 222 :
        if ((code & 0xfff) == 0xdef) {
          auto insn = std::make_unique<Bound-CdInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 223 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 15 :
            if ((code & 0xfff) == 0xdff) {
              auto insn = std::make_unique<Bcc-WInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 14 :
            if ((code & 0xffff) == 0xedff) {
              auto insn = std::make_unique<Ba-WInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 224 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa00) {
              auto insn = std::make_unique<Add-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe0f) {
              auto insn = std::make_unique<AddcbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 225 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa10) {
              auto insn = std::make_unique<Add-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe1f) {
              auto insn = std::make_unique<AddcwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 226 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa20) {
              auto insn = std::make_unique<Add-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe2f) {
              auto insn = std::make_unique<AddcdrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 227 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 4 : /* fall through */
          case 8 :
            if ((code & 0xbf0) == 0xa30) {
              auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 2 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0x2e3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P2Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 3 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0x3e3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P3Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 5 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0x5e3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P5Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 6 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0x6e3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P6Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 7 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0x7e3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P7Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 9 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0x9e3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P9Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 10 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0xae3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P10Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 11 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0xbe3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P11Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 12 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0xce3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P12Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 13 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0xde3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P13Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 14 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0xee3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P14Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          case 15 :
            switch (opcode) {
              case 0 : /* fall through */
              case 1 : /* fall through */
              case 2 : /* fall through */
              case 3 : /* fall through */
              case 4 : /* fall through */
              case 5 : /* fall through */
              case 6 : /* fall through */
              case 7 : /* fall through */
              case 8 : /* fall through */
              case 9 : /* fall through */
              case 10 : /* fall through */
              case 11 : /* fall through */
              case 12 : /* fall through */
              case 13 : /* fall through */
              case 14 :
                if ((code & 0xbf0) == 0xa30) {
                  auto insn = std::make_unique<Move-M-Sprv32Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              case 15 :
                if ((code & 0xffff) == 0xfe3f) {
                  auto insn = std::make_unique<Move-C-Sprv32-P15Instruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
                } else {
                          auto insn = std::make_unique<InvalidInstruction>{opcode};
                          insn->parseSfmt(code);
                          return insn;
                }
              default :
                auto insn = std::make_unique<InvalidInstruction>{opcode};
                insn->parseSfmt(code);
                return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 228 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa40) {
              auto insn = std::make_unique<Move-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe4f) {
              auto insn = std::make_unique<MovecbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 229 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa50) {
              auto insn = std::make_unique<Move-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe5f) {
              auto insn = std::make_unique<MovecwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 230 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa60) {
              auto insn = std::make_unique<Move-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe6f) {
              auto insn = std::make_unique<MovecdrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 232 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa80) {
              auto insn = std::make_unique<Sub-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe8f) {
              auto insn = std::make_unique<SubcbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 233 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xa90) {
              auto insn = std::make_unique<Sub-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xe9f) {
              auto insn = std::make_unique<SubcwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 234 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xaa0) {
              auto insn = std::make_unique<Sub-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xeaf) {
              auto insn = std::make_unique<SubcdrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 235 :
        if ((code & 0xfff) == 0xebf) {
          auto insn = std::make_unique<Bas-CInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 236 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xac0) {
              auto insn = std::make_unique<Cmp-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xecf) {
              auto insn = std::make_unique<CmpcbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 237 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xad0) {
              auto insn = std::make_unique<Cmp-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xedf) {
              auto insn = std::make_unique<CmpcwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 238 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xae0) {
              auto insn = std::make_unique<Cmp-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xeef) {
              auto insn = std::make_unique<CmpcdrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 239 :
        if ((code & 0xfff) == 0xeff) {
          auto insn = std::make_unique<Basc-CInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 240 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xb00) {
              auto insn = std::make_unique<And-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xf0f) {
              auto insn = std::make_unique<AndcbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 241 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xb10) {
              auto insn = std::make_unique<And-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xf1f) {
              auto insn = std::make_unique<AndcwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 242 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xb20) {
              auto insn = std::make_unique<And-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xf2f) {
              auto insn = std::make_unique<AndcdrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 243 :
        if ((code & 0xfff) == 0xf3f) {
          auto insn = std::make_unique<Jasc-CInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      case 244 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xb40) {
              auto insn = std::make_unique<Or-M.B-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xf4f) {
              auto insn = std::make_unique<OrcbrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 245 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xb50) {
              auto insn = std::make_unique<Or-M.W-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xf5f) {
              auto insn = std::make_unique<OrcwrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 246 :
        switch (opcode) {
          case 0 : /* fall through */
          case 1 : /* fall through */
          case 2 : /* fall through */
          case 3 : /* fall through */
          case 4 : /* fall through */
          case 5 : /* fall through */
          case 6 : /* fall through */
          case 7 : /* fall through */
          case 8 : /* fall through */
          case 9 : /* fall through */
          case 10 : /* fall through */
          case 11 : /* fall through */
          case 12 : /* fall through */
          case 13 : /* fall through */
          case 14 :
            if ((code & 0xbf0) == 0xb60) {
              auto insn = std::make_unique<Or-M.D-MInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          case 15 :
            if ((code & 0xfff) == 0xf6f) {
              auto insn = std::make_unique<OrcdrInstruction>{opcode};
              insn->parseSfmt(code);
              return insn;
            } else {
                  auto insn = std::make_unique<InvalidInstruction>{opcode};
                  insn->parseSfmt(code);
                  return insn;
            }
          default :
            auto insn = std::make_unique<InvalidInstruction>{opcode};
            insn->parseSfmt(code);
            return insn;
        }
      case 247 :
        if ((code & 0xff0) == 0xf70) {
          auto insn = std::make_unique<Move-Ss-RInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        } else {
          auto insn = std::make_unique<InvalidInstruction>{opcode};
          insn->parseSfmt(code);
          return insn;
        }
      default :
        auto insn = std::make_unique<InvalidInstruction>{opcode};
        insn->parseSfmt(code);
        return insn;
    }
  }

  virtual voide parseSfmt(uint32_t code) = 0;
private:
  Instruction(unsigned int opcode)
    : _opcode{opcode} { }
protected:
  unsigned int _opcode;
};

/* Derived Instruction classes */

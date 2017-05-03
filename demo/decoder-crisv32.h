#include <cstdint>
#include <memory>

struct EmptySFormat {
};

struct Move.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Move.D-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct MoveqSFormat {
  unsigned int f_operand2;
  int f_s6;
};

struct Movs.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct MovecbrSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct MovecwrSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct MovecdrSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct MovscbrSFormat {
  unsigned int f_operand2;
  int f_indir_pc+_byte;
};

struct MovscwrSFormat {
  unsigned int f_operand2;
  int f_indir_pc+_word;
};

struct MovucbrSFormat {
  unsigned int f_operand2;
  int f_indir_pc+_byte;
};

struct MovucwrSFormat {
  unsigned int f_operand2;
  int f_indir_pc+_word;
};

struct AddqSFormat {
  unsigned int f_operand2;
  unsigned int f_u6;
};

struct Cmp-R.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Cmp-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Cmp-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Cmp-M.D-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct CmpcbrSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct CmpcwrSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct CmpcdrSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct CmpqSFormat {
  unsigned int f_operand2;
  int f_s6;
};

struct CmpucbrSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct CmpucwrSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct Move-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-M.D-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Movs-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Movs-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-R-Sprv32SFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Move-Spr-Rv32SFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Move-M-Sprv32SFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-C-Sprv32-P2SFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct Move-Spr-Mv32SFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-Ss-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Move-R-SsSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Movem-R-M-V32SFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Movem-M-R-V32SFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Add.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Add.D-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Add-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Add-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Add-M.D-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct AddcbrSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct AddcwrSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct AddcdrSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct Adds-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Adds-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct AddscbrSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct AddscwrSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct Addc-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Lapc-DSFormat {
  int f_indir_pc+_dword_pcrel;
  unsigned int f_operand2;
};

struct LapcqSFormat {
  unsigned int f_operand2;
  int f_qo;
};

struct Addi.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Neg.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Neg.D-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Test-M.B-MSFormat {
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Test-M.W-MSFormat {
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Test-M.D-MSFormat {
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-R-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-R-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Move-R-M.D-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Muls.BSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct McpSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct DstepSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct And.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct And.W-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct And.D-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct And-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct And-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct And-M.D-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct AndcbrSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct AndcwrSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct AndcdrSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct AndqSFormat {
  unsigned int f_operand2;
  int f_s6;
};

struct SwapSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Asrr.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct AsrqSFormat {
  unsigned int f_operand2;
  unsigned int f_u5;
};

struct Lsrr.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Lsrr.D-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct BtstSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct BtstqSFormat {
  unsigned int f_operand2;
  unsigned int f_u5;
};

struct SetfSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
  unsigned int f_dstsrc;
};

struct RfeSFormat {
};

struct SfeSFormat {
};

struct RfgSFormat {
};

struct RfnSFormat {
};

struct HaltSFormat {
};

struct Bcc-BSFormat {
  unsigned int f_operand2;
  unsigned int f_disp9_lo;
  int f_disp9_hi;
  int f_disp9;
};

struct Ba-BSFormat {
  unsigned int f_disp9_lo;
  int f_disp9_hi;
  int f_disp9;
};

struct Bcc-WSFormat {
  int f_indir_pc+_word_pcrel;
  unsigned int f_operand2;
};

struct Ba-WSFormat {
  int f_indir_pc+_word_pcrel;
};

struct Jas-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct Jas-CSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct Jump-PSFormat {
  unsigned int f_operand2;
};

struct Bas-CSFormat {
  int f_indir_pc+_dword_pcrel;
  unsigned int f_operand2;
};

struct Jasc-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct BreakSFormat {
  unsigned int f_u4;
};

struct Bound-CbSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct Bound-CwSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct Bound-CdSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct SccSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct AddoqSFormat {
  unsigned int f_operand2;
  int f_s8;
};

struct Addo-M.B-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Addo-M.W-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Addo-M.D-MSFormat {
  unsigned int f_operand2;
  unsigned int f_memmode;
  unsigned int f_operand1;
};

struct Addo-CbSFormat {
  int f_indir_pc+_byte;
  unsigned int f_operand2;
};

struct Addo-CwSFormat {
  int f_indir_pc+_word;
  unsigned int f_operand2;
};

struct Addo-CdSFormat {
  int f_indir_pc+_dword;
  unsigned int f_operand2;
};

struct Addi-Acr.B-RSFormat {
  unsigned int f_operand2;
  unsigned int f_operand1;
};

struct FidxiSFormat {
  unsigned int f_operand1;
};

class Instruction {
public:
  static std::unique_ptr<Instruction> make(unsigned int opcode, uint8_t *code);
  virtual void parseSfmt(uint8_t *code) = 0;
private:
  Instruction(unsigned int opcode)
    : _opcode{opcode} { }

protected:
  unsigned int _opcode;
};

class EmptyInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  EmptySFormat sfmt;
};

class Move.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move.B-RSFormat sfmt;
};

class Move.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move.B-RSFormat sfmt;
};

class Move.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move.D-RSFormat sfmt;
};

class MoveqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MoveqSFormat sfmt;
};

class Movs.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs.B-RSFormat sfmt;
};

class Movs.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs.B-RSFormat sfmt;
};

class Movu.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs.B-RSFormat sfmt;
};

class Movu.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs.B-RSFormat sfmt;
};

class MovecbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovecbrSFormat sfmt;
};

class MovecwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovecwrSFormat sfmt;
};

class MovecdrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovecdrSFormat sfmt;
};

class MovscbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovscbrSFormat sfmt;
};

class MovscwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovscwrSFormat sfmt;
};

class MovucbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovucbrSFormat sfmt;
};

class MovucwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  MovucwrSFormat sfmt;
};

class AddqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddqSFormat sfmt;
};

class SubqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddqSFormat sfmt;
};

class Cmp-R.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-R.B-RSFormat sfmt;
};

class Cmp-R.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-R.B-RSFormat sfmt;
};

class Cmp-R.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-R.B-RSFormat sfmt;
};

class Cmp-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.B-MSFormat sfmt;
};

class Cmp-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.W-MSFormat sfmt;
};

class Cmp-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.D-MSFormat sfmt;
};

class CmpcbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpcbrSFormat sfmt;
};

class CmpcwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpcwrSFormat sfmt;
};

class CmpcdrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpcdrSFormat sfmt;
};

class CmpqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpqSFormat sfmt;
};

class Cmps-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.B-MSFormat sfmt;
};

class Cmps-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.W-MSFormat sfmt;
};

class CmpscbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpcbrSFormat sfmt;
};

class CmpscwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpcwrSFormat sfmt;
};

class Cmpu-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.B-MSFormat sfmt;
};

class Cmpu-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Cmp-M.W-MSFormat sfmt;
};

class CmpucbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpucbrSFormat sfmt;
};

class CmpucwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CmpucwrSFormat sfmt;
};

class Move-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-M.B-MSFormat sfmt;
};

class Move-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-M.W-MSFormat sfmt;
};

class Move-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-M.D-MSFormat sfmt;
};

class Movs-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs-M.B-MSFormat sfmt;
};

class Movs-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs-M.W-MSFormat sfmt;
};

class Movu-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs-M.B-MSFormat sfmt;
};

class Movu-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs-M.W-MSFormat sfmt;
};

class Move-R-Sprv32Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-R-Sprv32SFormat sfmt;
};

class Move-Spr-Rv32Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-Spr-Rv32SFormat sfmt;
};

class Move-M-Sprv32Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-M-Sprv32SFormat sfmt;
};

class Move-C-Sprv32-P2Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P3Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P5Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P6Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P7Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P9Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P10Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P11Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P12Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P13Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P14Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-C-Sprv32-P15Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-C-Sprv32-P2SFormat sfmt;
};

class Move-Spr-Mv32Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-Spr-Mv32SFormat sfmt;
};

class Move-Ss-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-Ss-RSFormat sfmt;
};

class Move-R-SsInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-R-SsSFormat sfmt;
};

class Movem-R-M-V32Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movem-R-M-V32SFormat sfmt;
};

class Movem-M-R-V32Instruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movem-M-R-V32SFormat sfmt;
};

class Add.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.B-RSFormat sfmt;
};

class Add.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.B-RSFormat sfmt;
};

class Add.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Add-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add-M.B-MSFormat sfmt;
};

class Add-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add-M.W-MSFormat sfmt;
};

class Add-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add-M.D-MSFormat sfmt;
};

class AddcbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcbrSFormat sfmt;
};

class AddcwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcwrSFormat sfmt;
};

class AddcdrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcdrSFormat sfmt;
};

class Adds.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Adds.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Adds-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.B-MSFormat sfmt;
};

class Adds-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.W-MSFormat sfmt;
};

class AddscbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscbrSFormat sfmt;
};

class AddscwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscwrSFormat sfmt;
};

class Addu.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Addu.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Addu-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.B-MSFormat sfmt;
};

class Addu-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.W-MSFormat sfmt;
};

class AdducbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscbrSFormat sfmt;
};

class AdducwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscwrSFormat sfmt;
};

class Sub.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.B-RSFormat sfmt;
};

class Sub.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.B-RSFormat sfmt;
};

class Sub.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Sub-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add-M.B-MSFormat sfmt;
};

class Sub-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add-M.W-MSFormat sfmt;
};

class Sub-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add-M.D-MSFormat sfmt;
};

class SubcbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcbrSFormat sfmt;
};

class SubcwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcwrSFormat sfmt;
};

class SubcdrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcdrSFormat sfmt;
};

class Subs.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Subs.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Subs-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.B-MSFormat sfmt;
};

class Subs-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.W-MSFormat sfmt;
};

class SubscbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscbrSFormat sfmt;
};

class SubscwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscwrSFormat sfmt;
};

class Subu.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Subu.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Subu-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.B-MSFormat sfmt;
};

class Subu-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Adds-M.W-MSFormat sfmt;
};

class SubucbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscbrSFormat sfmt;
};

class SubucwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddscwrSFormat sfmt;
};

class Addc-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Add.D-RSFormat sfmt;
};

class Addc-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addc-MSFormat sfmt;
};

class Addc-CInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddcdrSFormat sfmt;
};

class Lapc-DInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lapc-DSFormat sfmt;
};

class LapcqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  LapcqSFormat sfmt;
};

class Addi.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addi.B-RSFormat sfmt;
};

class Addi.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addi.B-RSFormat sfmt;
};

class Addi.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addi.B-RSFormat sfmt;
};

class Neg.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Neg.B-RSFormat sfmt;
};

class Neg.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Neg.B-RSFormat sfmt;
};

class Neg.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Neg.D-RSFormat sfmt;
};

class Test-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Test-M.B-MSFormat sfmt;
};

class Test-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Test-M.W-MSFormat sfmt;
};

class Test-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Test-M.D-MSFormat sfmt;
};

class Move-R-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-R-M.B-MSFormat sfmt;
};

class Move-R-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-R-M.W-MSFormat sfmt;
};

class Move-R-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Move-R-M.D-MSFormat sfmt;
};

class Muls.BInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Muls.BSFormat sfmt;
};

class Muls.WInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Muls.BSFormat sfmt;
};

class Muls.DInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Muls.BSFormat sfmt;
};

class Mulu.BInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Muls.BSFormat sfmt;
};

class Mulu.WInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Muls.BSFormat sfmt;
};

class Mulu.DInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Muls.BSFormat sfmt;
};

class McpInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  McpSFormat sfmt;
};

class DstepInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DstepSFormat sfmt;
};

class AbsInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs.B-RSFormat sfmt;
};

class And.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.B-RSFormat sfmt;
};

class And.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.W-RSFormat sfmt;
};

class And.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.D-RSFormat sfmt;
};

class And-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And-M.B-MSFormat sfmt;
};

class And-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And-M.W-MSFormat sfmt;
};

class And-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And-M.D-MSFormat sfmt;
};

class AndcbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndcbrSFormat sfmt;
};

class AndcwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndcwrSFormat sfmt;
};

class AndcdrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndcdrSFormat sfmt;
};

class AndqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndqSFormat sfmt;
};

class Orr.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.B-RSFormat sfmt;
};

class Orr.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.W-RSFormat sfmt;
};

class Orr.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.D-RSFormat sfmt;
};

class Or-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And-M.B-MSFormat sfmt;
};

class Or-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And-M.W-MSFormat sfmt;
};

class Or-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And-M.D-MSFormat sfmt;
};

class OrcbrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndcbrSFormat sfmt;
};

class OrcwrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndcwrSFormat sfmt;
};

class OrcdrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndcdrSFormat sfmt;
};

class OrqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndqSFormat sfmt;
};

class XorInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DstepSFormat sfmt;
};

class SwapInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SwapSFormat sfmt;
};

class Asrr.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Asrr.B-RSFormat sfmt;
};

class Asrr.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Asrr.B-RSFormat sfmt;
};

class Asrr.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  And.D-RSFormat sfmt;
};

class AsrqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AsrqSFormat sfmt;
};

class Lsrr.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lsrr.B-RSFormat sfmt;
};

class Lsrr.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lsrr.B-RSFormat sfmt;
};

class Lsrr.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lsrr.D-RSFormat sfmt;
};

class LsrqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AsrqSFormat sfmt;
};

class Lslr.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lsrr.B-RSFormat sfmt;
};

class Lslr.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lsrr.B-RSFormat sfmt;
};

class Lslr.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Lsrr.D-RSFormat sfmt;
};

class LslqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AsrqSFormat sfmt;
};

class BtstInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BtstSFormat sfmt;
};

class BtstqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BtstqSFormat sfmt;
};

class SetfInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SetfSFormat sfmt;
};

class ClearfInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SetfSFormat sfmt;
};

class RfeInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  RfeSFormat sfmt;
};

class SfeInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SfeSFormat sfmt;
};

class RfgInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  RfgSFormat sfmt;
};

class RfnInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  RfnSFormat sfmt;
};

class HaltInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  HaltSFormat sfmt;
};

class Bcc-BInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bcc-BSFormat sfmt;
};

class Ba-BInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Ba-BSFormat sfmt;
};

class Bcc-WInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bcc-WSFormat sfmt;
};

class Ba-WInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Ba-WSFormat sfmt;
};

class Jas-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Jas-RSFormat sfmt;
};

class Jas-CInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Jas-CSFormat sfmt;
};

class Jump-PInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Jump-PSFormat sfmt;
};

class Bas-CInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bas-CSFormat sfmt;
};

class Jasc-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Jasc-RSFormat sfmt;
};

class Jasc-CInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Jas-CSFormat sfmt;
};

class Basc-CInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bas-CSFormat sfmt;
};

class BreakInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BreakSFormat sfmt;
};

class Bound-R.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DstepSFormat sfmt;
};

class Bound-R.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DstepSFormat sfmt;
};

class Bound-R.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DstepSFormat sfmt;
};

class Bound-CbInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bound-CbSFormat sfmt;
};

class Bound-CwInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bound-CwSFormat sfmt;
};

class Bound-CdInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Bound-CdSFormat sfmt;
};

class SccInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SccSFormat sfmt;
};

class LzInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Movs.B-RSFormat sfmt;
};

class AddoqInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddoqSFormat sfmt;
};

class Addo-M.B-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addo-M.B-MSFormat sfmt;
};

class Addo-M.W-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addo-M.W-MSFormat sfmt;
};

class Addo-M.D-MInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addo-M.D-MSFormat sfmt;
};

class Addo-CbInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addo-CbSFormat sfmt;
};

class Addo-CwInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addo-CwSFormat sfmt;
};

class Addo-CdInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addo-CdSFormat sfmt;
};

class Addi-Acr.B-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addi-Acr.B-RSFormat sfmt;
};

class Addi-Acr.W-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addi-Acr.B-RSFormat sfmt;
};

class Addi-Acr.D-RInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  Addi-Acr.B-RSFormat sfmt;
};

class FidxiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  FidxiSFormat sfmt;
};

class FtagiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  FidxiSFormat sfmt;
};

class FidxdInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  FidxiSFormat sfmt;
};

class FtagdInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  FidxiSFormat sfmt;
};


#include <cstdint>
#include <memory>

struct EmptySFormat {
};

struct AddSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_r2;
};

struct AddiSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct AndiSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_uimm;
};

struct AndhiiSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_uimm;
};

struct BSFormat {
  unsigned int f_r0;
};

struct BiSFormat {
  int f_call;
};

struct BeSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_branch;
};

struct CallSFormat {
  unsigned int f_r0;
};

struct CalliSFormat {
  int f_call;
};

struct DivuSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_r2;
};

struct LbSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct LhSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct LwSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct OriSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_uimm;
};

struct RcsrSFormat {
  unsigned int f_csr;
  unsigned int f_r2;
};

struct SbSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct SextbSFormat {
  unsigned int f_r0;
  unsigned int f_r2;
};

struct ShSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct SlSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_r2;
};

struct SwSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  int f_imm;
};

struct UserSFormat {
  unsigned int f_r0;
  unsigned int f_r1;
  unsigned int f_r2;
  unsigned int f_user;
};

struct WcsrSFormat {
  unsigned int f_csr;
  unsigned int f_r1;
};

struct BreakSFormat {
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

class AddInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class AddiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class AndInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class AndiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndiSFormat sfmt;
};

class AndhiiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndhiiSFormat sfmt;
};

class BInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BSFormat sfmt;
};

class BiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BiSFormat sfmt;
};

class BeInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BeSFormat sfmt;
};

class BgInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BeSFormat sfmt;
};

class BgeInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BeSFormat sfmt;
};

class BgeuInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BeSFormat sfmt;
};

class BguInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BeSFormat sfmt;
};

class BneInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BeSFormat sfmt;
};

class CallInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CallSFormat sfmt;
};

class CalliInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  CalliSFormat sfmt;
};

class CmpeInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class CmpeiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class CmpgInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class CmpgiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class CmpgeInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class CmpgeiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class CmpgeuInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class CmpgeuiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndiSFormat sfmt;
};

class CmpguInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class CmpguiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndiSFormat sfmt;
};

class CmpneInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class CmpneiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class DivuInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DivuSFormat sfmt;
};

class LbInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  LbSFormat sfmt;
};

class LbuInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  LbSFormat sfmt;
};

class LhInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  LhSFormat sfmt;
};

class LhuInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  LhSFormat sfmt;
};

class LwInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  LwSFormat sfmt;
};

class ModuInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  DivuSFormat sfmt;
};

class MulInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class MuliInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class NorInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class NoriInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndiSFormat sfmt;
};

class OrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class OriInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  OriSFormat sfmt;
};

class OrhiiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndhiiSFormat sfmt;
};

class RcsrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  RcsrSFormat sfmt;
};

class SbInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SbSFormat sfmt;
};

class SextbInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SextbSFormat sfmt;
};

class SexthInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SextbSFormat sfmt;
};

class ShInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  ShSFormat sfmt;
};

class SlInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SlSFormat sfmt;
};

class SliInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class SrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SlSFormat sfmt;
};

class SriInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class SruInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SlSFormat sfmt;
};

class SruiInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddiSFormat sfmt;
};

class SubInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class SwInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  SwSFormat sfmt;
};

class UserInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  UserSFormat sfmt;
};

class WcsrInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  WcsrSFormat sfmt;
};

class XorInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class XoriInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndiSFormat sfmt;
};

class XnorInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AddSFormat sfmt;
};

class XnoriInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  AndiSFormat sfmt;
};

class BreakInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BreakSFormat sfmt;
};

class ScallInstruction : public Instruction {
public:
  void parseSfmt(uint8_t *code);
private:
  BreakSFormat sfmt;
};


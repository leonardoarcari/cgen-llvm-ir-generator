#ifndef __A_R_COMPACT_ARC700_DECODER_H_
#define __A_R_COMPACT_ARC700_DECODER_H_

#include "cgen-ir-common.h"

#include "llvm/Support/Endian.h"
#include <cstdint>
#include <memory>
#include <sstream>
#include <string>
struct EmptySFormat {

  std::string dump() const;
};

struct B_SSFormat {
  constexpr static std::pair<int, int> bitRange = {-1, 31};
  std::string dump() const;

  unsigned int f_cond_i2 = 0;
  int f_rel10 = 0;
};

struct Bcc_SSFormat {
  constexpr static std::pair<int, int> bitRange = {5, 31};
  std::string dump() const;

  unsigned int f_cond_i3 = 0;
  int f_rel7 = 0;
};

struct Brcc_SSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_brscond = 0;
  int f_rel8 = 0;
};

struct Bcc_LSFormat {
  constexpr static std::pair<int, int> bitRange = {-4, 31};
  std::string dump() const;

  unsigned int f_d21l = 0;
  int f_d21h = 0;
  unsigned int f_cond_Q = 0;
  int f_rel21 = 0;
};

struct B_LSFormat {
  constexpr static std::pair<int, int> bitRange = {-4, 31};
  std::string dump() const;

  unsigned int f_d21l = 0;
  unsigned int f_d25m = 0;
  int f_d25h = 0;
  int f_rel25 = 0;
};

struct Brcc_RcSFormat {
  constexpr static std::pair<int, int> bitRange = {2, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_d9l = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_brcond = 0;
  unsigned int f_op_B = 0;
  int f_rel9 = 0;
};

struct Brcc_U6SFormat {
  constexpr static std::pair<int, int> bitRange = {2, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_d9l = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_brcond = 0;
  unsigned int f_op_B = 0;
  int f_rel9 = 0;
};

struct Bl_SSFormat {
  constexpr static std::pair<int, int> bitRange = {-5, 31};
  std::string dump() const;

  int f_rel13bl = 0;
};

struct BlccSFormat {
  constexpr static std::pair<int, int> bitRange = {-3, 31};
  std::string dump() const;

  unsigned int f_d21bl = 0;
  int f_d21h = 0;
  unsigned int f_cond_Q = 0;
  int f_rel21bl = 0;
};

struct BlSFormat {
  constexpr static std::pair<int, int> bitRange = {-3, 31};
  std::string dump() const;

  unsigned int f_d21bl = 0;
  unsigned int f_d25m = 0;
  int f_d25h = 0;
  int f_rel25bl = 0;
};

struct Bl_DSFormat {
  constexpr static std::pair<int, int> bitRange = {-3, 31};
  std::string dump() const;

  unsigned int f_d21bl = 0;
  unsigned int f_d25m = 0;
  int f_d25h = 0;
  int f_rel25bl = 0;
};

struct Ld_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Ld__Aw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Ld_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ld__Aw_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ld_S_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_op__a = 0;
};

struct Ld_S_AbuSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  int f_u5x4 = 0;
};

struct Ld_S_AbspSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  int f_u5x4 = 0;
};

struct Ld_S_GprelSFormat {
  constexpr static std::pair<int, int> bitRange = {-1, 31};
  std::string dump() const;

  int f_s9x4 = 0;
};

struct Ld_S_PcrelSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  int f_u8x4 = 0;
};

struct Ldb_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Ldb__Aw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Ldb_As_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ldb_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ldb__Aw_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ldb_As_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ldb_S_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_op__a = 0;
};

struct Ldb_S_AbuSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_u5 = 0;
};

struct Ldb_S_AbspSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  int f_u5x4 = 0;
};

struct Ldb_S_GprelSFormat {
  constexpr static std::pair<int, int> bitRange = {-1, 31};
  std::string dump() const;

  int f_s9x1 = 0;
};

struct Ldw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Ldw__Aw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Ldw_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ldw__Aw_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Ldw_S_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_op__a = 0;
};

struct Ldw_S_AbuSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  int f_u5x2 = 0;
};

struct Ldw_S_GprelSFormat {
  constexpr static std::pair<int, int> bitRange = {-1, 31};
  std::string dump() const;

  int f_s9x2 = 0;
};

struct St_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct St__Aw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct St_S_AbuSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  int f_u5x4 = 0;
};

struct St_S_AbspSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  int f_u5x4 = 0;
};

struct Stb_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Stb__Aw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Stb_As_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Stb_S_AbuSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_u5 = 0;
};

struct Stb_S_AbspSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  int f_u5x4 = 0;
};

struct Stw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Stw__Aw_AbsSFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
  int f_d9h = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
  int f_s9 = 0;
};

struct Stw_S_AbuSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  int f_u5x2 = 0;
};

struct Add_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Add_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Add_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Add_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Add_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Add_S_AbcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_op__a = 0;
};

struct Add_S_Cbu3SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
  unsigned int f_u3 = 0;
};

struct Add_S_McahSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_h_2_0 = 0;
  unsigned int f_h_5_3 = 0;
  unsigned int f_op_h = 0;
};

struct Add_S_AbspSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  int f_u5x4 = 0;
};

struct Add_S_AsspspSFormat {
  constexpr static std::pair<int, int> bitRange = {7, 31};
  std::string dump() const;

  int f_u5x4 = 0;
};

struct Add_S_GpSFormat {
  constexpr static std::pair<int, int> bitRange = {-1, 31};
  std::string dump() const;

  int f_s9x4 = 0;
};

struct Add_S_R_U7SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u7 = 0;
};

struct Adc_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Adc_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Adc_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Adc_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Adc_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct I16_Go_Sub_S_GoSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
};

struct Sub_S_Go_Sub_NeSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
};

struct Sub_S_SsbSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u5 = 0;
};

struct And_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct And_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct And_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct And_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct And_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mov_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Mov_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mov_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Mov_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Mov_Cc__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mov_S_McahSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_h_2_0 = 0;
  unsigned int f_h_5_3 = 0;
  unsigned int f_op_h = 0;
};

struct Mov_S_McahbSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_h_2_0 = 0;
  unsigned int f_h_5_3 = 0;
  unsigned int f_op_h = 0;
};

struct Mov_S_R_U7SFormat {
  constexpr static std::pair<int, int> bitRange = {1, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u8 = 0;
};

struct Tst_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Tst_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Tst_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Tst_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Tst_Cc__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Tst_S_GoSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
};

struct Cmp_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Cmp_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Cmp_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Cmp_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Cmp_Cc__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Cmp_S_McahSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_h_2_0 = 0;
  unsigned int f_h_5_3 = 0;
  unsigned int f_op_h = 0;
};

struct Cmp_S_R_U7SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u7 = 0;
};

struct Btst_S_SsbSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_u5 = 0;
};

struct Mpy_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Mpy_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mpy_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Mpy_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Mpy_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct J_L_R_R___Rc_Noilink_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_Cj = 0;
  unsigned int f_op_B = 0;
};

struct J_Cc___Rc_Noilink_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_Cj = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct J_L_R_R___Rc_Ilink_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_Cj = 0;
  unsigned int f_op_B = 0;
};

struct J_Cc___Rc_Ilink_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_Cj = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct J_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct J_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct J_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct J_SSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
};

struct J_S__SSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct J_Seq__SSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct J_L_S12_D_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct J_Ccu6_D_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct J_L_U6_D_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct J_L_R_R_D___Rc_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct J_Cc_D___Rc_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Jl_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Jl_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Jl_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Jl_SSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
};

struct Jl_L_R_R___Rc_Noilink_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_Cj = 0;
  unsigned int f_op_B = 0;
};

struct Jl_Cc___Rc_Noilink_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_Cj = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Jl_L_R_R_D___Rc_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Jl_Cc_D___Rc_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Jl_S_DSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
};

struct Lp_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12x2 = 0;
};

struct Lpcc_Ccu6SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  int f_u6x2 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Flag_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Flag_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Flag_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Flag_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Flag_Cc__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Lr_L_R_R___Rc_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Lr_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Lr_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Sr_L_R_R___Rc_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Sr_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Sr_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Asl_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Asl_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Asr_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Asr_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Rrc_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Rrc_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Sexb_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Sexb_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Sexw_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Sexw_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Abs_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Abs_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Not_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Not_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Ex_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Ex_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct SwiSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct Trap_SSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 31};
  std::string dump() const;

  unsigned int f_trapnum = 0;
};

struct BrkSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct Asl_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Asl_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Asl_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Asl_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Asl_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mul64_L_S12_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Mul64_Ccu6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mul64_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Mul64_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Mul64_Cc__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mul64_S_GoSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_op__c = 0;
};

struct Adds_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Adds_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Adds_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Adds_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Adds_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Divaw_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Divaw_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Divaw_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Divaw_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Divaw_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Asls_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Asls_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Asls_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Asls_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Asls_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Swap_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Swap_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Norm_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Rnd16_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Rnd16_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Abssw_L_R_R__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_B = 0;
};

struct Abssw_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Abss_L_U6_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_B = 0;
};

struct Nop_SSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct Pop_S_BSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
};

struct Pop_S_BlinkSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct Push_S_BSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
};

struct Push_S_BlinkSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct Mullw_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Mullw_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Mullw_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Mullw_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Mullw_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Maclw_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Maclw_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Maclw_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Maclw_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Maclw_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Machulw_L_S12__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  int f_s12h = 0;
  unsigned int f_op_B = 0;
  int f_s12 = 0;
};

struct Machulw_Ccu6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Machulw_L_U6__Ra_SFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_u6 = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Machulw_L_R_R__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_op_A = 0;
  unsigned int f_op_B = 0;
};

struct Machulw_Cc__Ra__RcSFormat {
  constexpr static std::pair<int, int> bitRange = {3, 31};
  std::string dump() const;

  unsigned int f_op__b = 0;
  unsigned int f_F = 0;
  unsigned int f_B_5_3 = 0;
  unsigned int f_op_C = 0;
  unsigned int f_cond_Q = 0;
  unsigned int f_op_B = 0;
};

struct Current_Loop_EndSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

struct Current_Loop_End_After_BranchSFormat {
  constexpr static std::pair<int, int> bitRange = {0, 0};
  std::string dump() const;
};

class Instruction {
public:
  using wordType = uint32_t;
  using chunkType = uint16_t;
  static const llvm::support::endianness endianness = llvm::support::little;

  static std::pair<std::unique_ptr<Instruction>, int>
  make(uint32_t baseRawInstruction, CgenIRContext &context);
  virtual int parseSfmt(uint32_t rawInstruction, CgenIRContext &context) = 0;
  virtual std::string dump() const = 0;
};

class EmptyInstruction : public Instruction {
public:
  EmptyInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const EmptySFormat &getSfmt() const;

private:
  EmptySFormat sfmt;
};

class B_SInstruction : public Instruction {
public:
  B_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const B_SSFormat &getSfmt() const;

private:
  B_SSFormat sfmt;
};

class Bcc_SInstruction : public Instruction {
public:
  Bcc_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Bcc_SSFormat &getSfmt() const;

private:
  Bcc_SSFormat sfmt;
};

class Brcc_SInstruction : public Instruction {
public:
  Brcc_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Brcc_SSFormat &getSfmt() const;

private:
  Brcc_SSFormat sfmt;
};

class Bcc_LInstruction : public Instruction {
public:
  Bcc_LInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Bcc_LSFormat &getSfmt() const;

private:
  Bcc_LSFormat sfmt;
};

class Bcc_L_DInstruction : public Instruction {
public:
  Bcc_L_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Bcc_LSFormat &getSfmt() const;

private:
  Bcc_LSFormat sfmt;
};

class B_LInstruction : public Instruction {
public:
  B_LInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const B_LSFormat &getSfmt() const;

private:
  B_LSFormat sfmt;
};

class B_L_DInstruction : public Instruction {
public:
  B_L_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const B_LSFormat &getSfmt() const;

private:
  B_LSFormat sfmt;
};

class Brcc_RcInstruction : public Instruction {
public:
  Brcc_RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Brcc_RcSFormat &getSfmt() const;

private:
  Brcc_RcSFormat sfmt;
};

class Brcc_Rc_DInstruction : public Instruction {
public:
  Brcc_Rc_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Brcc_RcSFormat &getSfmt() const;

private:
  Brcc_RcSFormat sfmt;
};

class Brcc_U6Instruction : public Instruction {
public:
  Brcc_U6Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Brcc_U6SFormat &getSfmt() const;

private:
  Brcc_U6SFormat sfmt;
};

class Brcc_U6_DInstruction : public Instruction {
public:
  Brcc_U6_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Brcc_U6SFormat &getSfmt() const;

private:
  Brcc_U6SFormat sfmt;
};

class Bl_SInstruction : public Instruction {
public:
  Bl_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Bl_SSFormat &getSfmt() const;

private:
  Bl_SSFormat sfmt;
};

class BlccInstruction : public Instruction {
public:
  BlccInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const BlccSFormat &getSfmt() const;

private:
  BlccSFormat sfmt;
};

class Blcc_DInstruction : public Instruction {
public:
  Blcc_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const BlccSFormat &getSfmt() const;

private:
  BlccSFormat sfmt;
};

class BlInstruction : public Instruction {
public:
  BlInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const BlSFormat &getSfmt() const;

private:
  BlSFormat sfmt;
};

class Bl_DInstruction : public Instruction {
public:
  Bl_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Bl_DSFormat &getSfmt() const;

private:
  Bl_DSFormat sfmt;
};

class Ld_AbsInstruction : public Instruction {
public:
  Ld_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_AbsSFormat &getSfmt() const;

private:
  Ld_AbsSFormat sfmt;
};

class Ld__Aw_AbsInstruction : public Instruction {
public:
  Ld__Aw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld__Aw_AbsSFormat &getSfmt() const;

private:
  Ld__Aw_AbsSFormat sfmt;
};

class Ld_Ab_AbsInstruction : public Instruction {
public:
  Ld_Ab_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld__Aw_AbsSFormat &getSfmt() const;

private:
  Ld__Aw_AbsSFormat sfmt;
};

class Ld_As_AbsInstruction : public Instruction {
public:
  Ld_As_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_AbsSFormat &getSfmt() const;

private:
  Ld_AbsSFormat sfmt;
};

class Ld_AbcInstruction : public Instruction {
public:
  Ld_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_AbcSFormat &getSfmt() const;

private:
  Ld_AbcSFormat sfmt;
};

class Ld__Aw_AbcInstruction : public Instruction {
public:
  Ld__Aw_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld__Aw_AbcSFormat &getSfmt() const;

private:
  Ld__Aw_AbcSFormat sfmt;
};

class Ld_Ab_AbcInstruction : public Instruction {
public:
  Ld_Ab_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld__Aw_AbcSFormat &getSfmt() const;

private:
  Ld__Aw_AbcSFormat sfmt;
};

class Ld_As_AbcInstruction : public Instruction {
public:
  Ld_As_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_AbcSFormat &getSfmt() const;

private:
  Ld_AbcSFormat sfmt;
};

class Ld_S_AbcInstruction : public Instruction {
public:
  Ld_S_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_S_AbcSFormat &getSfmt() const;

private:
  Ld_S_AbcSFormat sfmt;
};

class Ld_S_AbuInstruction : public Instruction {
public:
  Ld_S_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_S_AbuSFormat &getSfmt() const;

private:
  Ld_S_AbuSFormat sfmt;
};

class Ld_S_AbspInstruction : public Instruction {
public:
  Ld_S_AbspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_S_AbspSFormat &getSfmt() const;

private:
  Ld_S_AbspSFormat sfmt;
};

class Ld_S_GprelInstruction : public Instruction {
public:
  Ld_S_GprelInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_S_GprelSFormat &getSfmt() const;

private:
  Ld_S_GprelSFormat sfmt;
};

class Ld_S_PcrelInstruction : public Instruction {
public:
  Ld_S_PcrelInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ld_S_PcrelSFormat &getSfmt() const;

private:
  Ld_S_PcrelSFormat sfmt;
};

class Ldb_AbsInstruction : public Instruction {
public:
  Ldb_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_AbsSFormat &getSfmt() const;

private:
  Ldb_AbsSFormat sfmt;
};

class Ldb__Aw_AbsInstruction : public Instruction {
public:
  Ldb__Aw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbsSFormat &getSfmt() const;

private:
  Ldb__Aw_AbsSFormat sfmt;
};

class Ldb_Ab_AbsInstruction : public Instruction {
public:
  Ldb_Ab_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbsSFormat &getSfmt() const;

private:
  Ldb__Aw_AbsSFormat sfmt;
};

class Ldb_As_AbsInstruction : public Instruction {
public:
  Ldb_As_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_As_AbsSFormat &getSfmt() const;

private:
  Ldb_As_AbsSFormat sfmt;
};

class Ldb_AbcInstruction : public Instruction {
public:
  Ldb_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_AbcSFormat &getSfmt() const;

private:
  Ldb_AbcSFormat sfmt;
};

class Ldb__Aw_AbcInstruction : public Instruction {
public:
  Ldb__Aw_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbcSFormat &getSfmt() const;

private:
  Ldb__Aw_AbcSFormat sfmt;
};

class Ldb_Ab_AbcInstruction : public Instruction {
public:
  Ldb_Ab_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbcSFormat &getSfmt() const;

private:
  Ldb__Aw_AbcSFormat sfmt;
};

class Ldb_As_AbcInstruction : public Instruction {
public:
  Ldb_As_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_As_AbcSFormat &getSfmt() const;

private:
  Ldb_As_AbcSFormat sfmt;
};

class Ldb_S_AbcInstruction : public Instruction {
public:
  Ldb_S_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_S_AbcSFormat &getSfmt() const;

private:
  Ldb_S_AbcSFormat sfmt;
};

class Ldb_S_AbuInstruction : public Instruction {
public:
  Ldb_S_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_S_AbuSFormat &getSfmt() const;

private:
  Ldb_S_AbuSFormat sfmt;
};

class Ldb_S_AbspInstruction : public Instruction {
public:
  Ldb_S_AbspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_S_AbspSFormat &getSfmt() const;

private:
  Ldb_S_AbspSFormat sfmt;
};

class Ldb_S_GprelInstruction : public Instruction {
public:
  Ldb_S_GprelInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_S_GprelSFormat &getSfmt() const;

private:
  Ldb_S_GprelSFormat sfmt;
};

class Ldb_X_AbsInstruction : public Instruction {
public:
  Ldb_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_AbsSFormat &getSfmt() const;

private:
  Ldb_AbsSFormat sfmt;
};

class Ldb__Aw_X_AbsInstruction : public Instruction {
public:
  Ldb__Aw_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbsSFormat &getSfmt() const;

private:
  Ldb__Aw_AbsSFormat sfmt;
};

class Ldb_Ab_X_AbsInstruction : public Instruction {
public:
  Ldb_Ab_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbsSFormat &getSfmt() const;

private:
  Ldb__Aw_AbsSFormat sfmt;
};

class Ldb_As_X_AbsInstruction : public Instruction {
public:
  Ldb_As_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_As_AbsSFormat &getSfmt() const;

private:
  Ldb_As_AbsSFormat sfmt;
};

class Ldb_X_AbcInstruction : public Instruction {
public:
  Ldb_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_AbcSFormat &getSfmt() const;

private:
  Ldb_AbcSFormat sfmt;
};

class Ldb__Aw_X_AbcInstruction : public Instruction {
public:
  Ldb__Aw_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbcSFormat &getSfmt() const;

private:
  Ldb__Aw_AbcSFormat sfmt;
};

class Ldb_Ab_X_AbcInstruction : public Instruction {
public:
  Ldb_Ab_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb__Aw_AbcSFormat &getSfmt() const;

private:
  Ldb__Aw_AbcSFormat sfmt;
};

class Ldb_As_X_AbcInstruction : public Instruction {
public:
  Ldb_As_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldb_As_AbcSFormat &getSfmt() const;

private:
  Ldb_As_AbcSFormat sfmt;
};

class Ldw_AbsInstruction : public Instruction {
public:
  Ldw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbsSFormat &getSfmt() const;

private:
  Ldw_AbsSFormat sfmt;
};

class Ldw__Aw_AbsInstruction : public Instruction {
public:
  Ldw__Aw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbsSFormat &getSfmt() const;

private:
  Ldw__Aw_AbsSFormat sfmt;
};

class Ldw_Ab_AbsInstruction : public Instruction {
public:
  Ldw_Ab_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbsSFormat &getSfmt() const;

private:
  Ldw__Aw_AbsSFormat sfmt;
};

class Ldw_As_AbsInstruction : public Instruction {
public:
  Ldw_As_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbsSFormat &getSfmt() const;

private:
  Ldw_AbsSFormat sfmt;
};

class Ldw_AbcInstruction : public Instruction {
public:
  Ldw_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbcSFormat &getSfmt() const;

private:
  Ldw_AbcSFormat sfmt;
};

class Ldw__Aw_AbcInstruction : public Instruction {
public:
  Ldw__Aw_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbcSFormat &getSfmt() const;

private:
  Ldw__Aw_AbcSFormat sfmt;
};

class Ldw_Ab_AbcInstruction : public Instruction {
public:
  Ldw_Ab_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbcSFormat &getSfmt() const;

private:
  Ldw__Aw_AbcSFormat sfmt;
};

class Ldw_As_AbcInstruction : public Instruction {
public:
  Ldw_As_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbcSFormat &getSfmt() const;

private:
  Ldw_AbcSFormat sfmt;
};

class Ldw_S_AbcInstruction : public Instruction {
public:
  Ldw_S_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_S_AbcSFormat &getSfmt() const;

private:
  Ldw_S_AbcSFormat sfmt;
};

class Ldw_S_AbuInstruction : public Instruction {
public:
  Ldw_S_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_S_AbuSFormat &getSfmt() const;

private:
  Ldw_S_AbuSFormat sfmt;
};

class Ldw_S_GprelInstruction : public Instruction {
public:
  Ldw_S_GprelInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_S_GprelSFormat &getSfmt() const;

private:
  Ldw_S_GprelSFormat sfmt;
};

class Ldw_X_AbsInstruction : public Instruction {
public:
  Ldw_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbsSFormat &getSfmt() const;

private:
  Ldw_AbsSFormat sfmt;
};

class Ldw__Aw_X_AbsInstruction : public Instruction {
public:
  Ldw__Aw_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbsSFormat &getSfmt() const;

private:
  Ldw__Aw_AbsSFormat sfmt;
};

class Ldw_Ab_X_AbsInstruction : public Instruction {
public:
  Ldw_Ab_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbsSFormat &getSfmt() const;

private:
  Ldw__Aw_AbsSFormat sfmt;
};

class Ldw_As_X_AbsInstruction : public Instruction {
public:
  Ldw_As_X_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbsSFormat &getSfmt() const;

private:
  Ldw_AbsSFormat sfmt;
};

class Ldw_X_AbcInstruction : public Instruction {
public:
  Ldw_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbcSFormat &getSfmt() const;

private:
  Ldw_AbcSFormat sfmt;
};

class Ldw__Aw_X_AbcInstruction : public Instruction {
public:
  Ldw__Aw_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbcSFormat &getSfmt() const;

private:
  Ldw__Aw_AbcSFormat sfmt;
};

class Ldw_Ab_X_AbcInstruction : public Instruction {
public:
  Ldw_Ab_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw__Aw_AbcSFormat &getSfmt() const;

private:
  Ldw__Aw_AbcSFormat sfmt;
};

class Ldw_As_X_AbcInstruction : public Instruction {
public:
  Ldw_As_X_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_AbcSFormat &getSfmt() const;

private:
  Ldw_AbcSFormat sfmt;
};

class Ldw_S_X_AbuInstruction : public Instruction {
public:
  Ldw_S_X_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ldw_S_AbuSFormat &getSfmt() const;

private:
  Ldw_S_AbuSFormat sfmt;
};

class St_AbsInstruction : public Instruction {
public:
  St_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const St_AbsSFormat &getSfmt() const;

private:
  St_AbsSFormat sfmt;
};

class St__Aw_AbsInstruction : public Instruction {
public:
  St__Aw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const St__Aw_AbsSFormat &getSfmt() const;

private:
  St__Aw_AbsSFormat sfmt;
};

class St_Ab_AbsInstruction : public Instruction {
public:
  St_Ab_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const St__Aw_AbsSFormat &getSfmt() const;

private:
  St__Aw_AbsSFormat sfmt;
};

class St_As_AbsInstruction : public Instruction {
public:
  St_As_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const St_AbsSFormat &getSfmt() const;

private:
  St_AbsSFormat sfmt;
};

class St_S_AbuInstruction : public Instruction {
public:
  St_S_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const St_S_AbuSFormat &getSfmt() const;

private:
  St_S_AbuSFormat sfmt;
};

class St_S_AbspInstruction : public Instruction {
public:
  St_S_AbspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const St_S_AbspSFormat &getSfmt() const;

private:
  St_S_AbspSFormat sfmt;
};

class Stb_AbsInstruction : public Instruction {
public:
  Stb_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stb_AbsSFormat &getSfmt() const;

private:
  Stb_AbsSFormat sfmt;
};

class Stb__Aw_AbsInstruction : public Instruction {
public:
  Stb__Aw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stb__Aw_AbsSFormat &getSfmt() const;

private:
  Stb__Aw_AbsSFormat sfmt;
};

class Stb_Ab_AbsInstruction : public Instruction {
public:
  Stb_Ab_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stb__Aw_AbsSFormat &getSfmt() const;

private:
  Stb__Aw_AbsSFormat sfmt;
};

class Stb_As_AbsInstruction : public Instruction {
public:
  Stb_As_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stb_As_AbsSFormat &getSfmt() const;

private:
  Stb_As_AbsSFormat sfmt;
};

class Stb_S_AbuInstruction : public Instruction {
public:
  Stb_S_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stb_S_AbuSFormat &getSfmt() const;

private:
  Stb_S_AbuSFormat sfmt;
};

class Stb_S_AbspInstruction : public Instruction {
public:
  Stb_S_AbspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stb_S_AbspSFormat &getSfmt() const;

private:
  Stb_S_AbspSFormat sfmt;
};

class Stw_AbsInstruction : public Instruction {
public:
  Stw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stw_AbsSFormat &getSfmt() const;

private:
  Stw_AbsSFormat sfmt;
};

class Stw__Aw_AbsInstruction : public Instruction {
public:
  Stw__Aw_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stw__Aw_AbsSFormat &getSfmt() const;

private:
  Stw__Aw_AbsSFormat sfmt;
};

class Stw_Ab_AbsInstruction : public Instruction {
public:
  Stw_Ab_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stw__Aw_AbsSFormat &getSfmt() const;

private:
  Stw__Aw_AbsSFormat sfmt;
};

class Stw_As_AbsInstruction : public Instruction {
public:
  Stw_As_AbsInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stw_AbsSFormat &getSfmt() const;

private:
  Stw_AbsSFormat sfmt;
};

class Stw_S_AbuInstruction : public Instruction {
public:
  Stw_S_AbuInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Stw_S_AbuSFormat &getSfmt() const;

private:
  Stw_S_AbuSFormat sfmt;
};

class Add_L_S12__Ra_Instruction : public Instruction {
public:
  Add_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Add_Ccu6__Ra_Instruction : public Instruction {
public:
  Add_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Add_L_U6__Ra_Instruction : public Instruction {
public:
  Add_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Add_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Add_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Add_Cc__Ra__RcInstruction : public Instruction {
public:
  Add_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Add_S_AbcInstruction : public Instruction {
public:
  Add_S_AbcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_AbcSFormat &getSfmt() const;

private:
  Add_S_AbcSFormat sfmt;
};

class Add_S_Cbu3Instruction : public Instruction {
public:
  Add_S_Cbu3Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_Cbu3SFormat &getSfmt() const;

private:
  Add_S_Cbu3SFormat sfmt;
};

class Add_S_McahInstruction : public Instruction {
public:
  Add_S_McahInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_McahSFormat &getSfmt() const;

private:
  Add_S_McahSFormat sfmt;
};

class Add_S_AbspInstruction : public Instruction {
public:
  Add_S_AbspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_AbspSFormat &getSfmt() const;

private:
  Add_S_AbspSFormat sfmt;
};

class Add_S_AsspspInstruction : public Instruction {
public:
  Add_S_AsspspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_AsspspSFormat &getSfmt() const;

private:
  Add_S_AsspspSFormat sfmt;
};

class Add_S_GpInstruction : public Instruction {
public:
  Add_S_GpInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_GpSFormat &getSfmt() const;

private:
  Add_S_GpSFormat sfmt;
};

class Add_S_R_U7Instruction : public Instruction {
public:
  Add_S_R_U7Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_R_U7SFormat &getSfmt() const;

private:
  Add_S_R_U7SFormat sfmt;
};

class Adc_L_S12__Ra_Instruction : public Instruction {
public:
  Adc_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_L_S12__Ra_SFormat &getSfmt() const;

private:
  Adc_L_S12__Ra_SFormat sfmt;
};

class Adc_Ccu6__Ra_Instruction : public Instruction {
public:
  Adc_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Adc_Ccu6__Ra_SFormat sfmt;
};

class Adc_L_U6__Ra_Instruction : public Instruction {
public:
  Adc_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_L_U6__Ra_SFormat &getSfmt() const;

private:
  Adc_L_U6__Ra_SFormat sfmt;
};

class Adc_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Adc_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Adc_L_R_R__Ra__RcSFormat sfmt;
};

class Adc_Cc__Ra__RcInstruction : public Instruction {
public:
  Adc_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Adc_Cc__Ra__RcSFormat sfmt;
};

class Sub_L_S12__Ra_Instruction : public Instruction {
public:
  Sub_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Sub_Ccu6__Ra_Instruction : public Instruction {
public:
  Sub_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Sub_L_U6__Ra_Instruction : public Instruction {
public:
  Sub_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Sub_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Sub_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Sub_Cc__Ra__RcInstruction : public Instruction {
public:
  Sub_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Sub_S_Cbu3Instruction : public Instruction {
public:
  Sub_S_Cbu3Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_Cbu3SFormat &getSfmt() const;

private:
  Add_S_Cbu3SFormat sfmt;
};

class I16_Go_Sub_S_GoInstruction : public Instruction {
public:
  I16_Go_Sub_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Sub_S_Go_Sub_NeInstruction : public Instruction {
public:
  Sub_S_Go_Sub_NeInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_Go_Sub_NeSFormat &getSfmt() const;

private:
  Sub_S_Go_Sub_NeSFormat sfmt;
};

class Sub_S_SsbInstruction : public Instruction {
public:
  Sub_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class Sub_S_AsspspInstruction : public Instruction {
public:
  Sub_S_AsspspInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_AsspspSFormat &getSfmt() const;

private:
  Add_S_AsspspSFormat sfmt;
};

class Sbc_L_S12__Ra_Instruction : public Instruction {
public:
  Sbc_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_L_S12__Ra_SFormat &getSfmt() const;

private:
  Adc_L_S12__Ra_SFormat sfmt;
};

class Sbc_Ccu6__Ra_Instruction : public Instruction {
public:
  Sbc_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Adc_Ccu6__Ra_SFormat sfmt;
};

class Sbc_L_U6__Ra_Instruction : public Instruction {
public:
  Sbc_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_L_U6__Ra_SFormat &getSfmt() const;

private:
  Adc_L_U6__Ra_SFormat sfmt;
};

class Sbc_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Sbc_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Adc_L_R_R__Ra__RcSFormat sfmt;
};

class Sbc_Cc__Ra__RcInstruction : public Instruction {
public:
  Sbc_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adc_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Adc_Cc__Ra__RcSFormat sfmt;
};

class And_L_S12__Ra_Instruction : public Instruction {
public:
  And_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class And_Ccu6__Ra_Instruction : public Instruction {
public:
  And_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class And_L_U6__Ra_Instruction : public Instruction {
public:
  And_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class And_L_R_R__Ra__RcInstruction : public Instruction {
public:
  And_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class And_Cc__Ra__RcInstruction : public Instruction {
public:
  And_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_And_S_GoInstruction : public Instruction {
public:
  I16_Go_And_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Or_L_S12__Ra_Instruction : public Instruction {
public:
  Or_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Or_Ccu6__Ra_Instruction : public Instruction {
public:
  Or_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Or_L_U6__Ra_Instruction : public Instruction {
public:
  Or_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Or_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Or_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Or_Cc__Ra__RcInstruction : public Instruction {
public:
  Or_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_Or_S_GoInstruction : public Instruction {
public:
  I16_Go_Or_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Bic_L_S12__Ra_Instruction : public Instruction {
public:
  Bic_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Bic_Ccu6__Ra_Instruction : public Instruction {
public:
  Bic_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Bic_L_U6__Ra_Instruction : public Instruction {
public:
  Bic_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Bic_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Bic_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Bic_Cc__Ra__RcInstruction : public Instruction {
public:
  Bic_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_Bic_S_GoInstruction : public Instruction {
public:
  I16_Go_Bic_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Xor_L_S12__Ra_Instruction : public Instruction {
public:
  Xor_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Xor_Ccu6__Ra_Instruction : public Instruction {
public:
  Xor_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Xor_L_U6__Ra_Instruction : public Instruction {
public:
  Xor_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Xor_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Xor_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Xor_Cc__Ra__RcInstruction : public Instruction {
public:
  Xor_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_Xor_S_GoInstruction : public Instruction {
public:
  I16_Go_Xor_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Max_L_S12__Ra_Instruction : public Instruction {
public:
  Max_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Max_Ccu6__Ra_Instruction : public Instruction {
public:
  Max_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Max_L_U6__Ra_Instruction : public Instruction {
public:
  Max_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Max_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Max_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Max_Cc__Ra__RcInstruction : public Instruction {
public:
  Max_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Min_L_S12__Ra_Instruction : public Instruction {
public:
  Min_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Min_Ccu6__Ra_Instruction : public Instruction {
public:
  Min_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Min_L_U6__Ra_Instruction : public Instruction {
public:
  Min_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Min_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Min_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Min_Cc__Ra__RcInstruction : public Instruction {
public:
  Min_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Mov_L_S12_Instruction : public Instruction {
public:
  Mov_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_L_S12_SFormat &getSfmt() const;

private:
  Mov_L_S12_SFormat sfmt;
};

class Mov_Ccu6_Instruction : public Instruction {
public:
  Mov_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_Ccu6_SFormat &getSfmt() const;

private:
  Mov_Ccu6_SFormat sfmt;
};

class Mov_L_U6_Instruction : public Instruction {
public:
  Mov_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_L_U6_SFormat &getSfmt() const;

private:
  Mov_L_U6_SFormat sfmt;
};

class Mov_L_R_R__RcInstruction : public Instruction {
public:
  Mov_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_L_R_R__RcSFormat &getSfmt() const;

private:
  Mov_L_R_R__RcSFormat sfmt;
};

class Mov_Cc__RcInstruction : public Instruction {
public:
  Mov_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_Cc__RcSFormat &getSfmt() const;

private:
  Mov_Cc__RcSFormat sfmt;
};

class Mov_S_McahInstruction : public Instruction {
public:
  Mov_S_McahInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_S_McahSFormat &getSfmt() const;

private:
  Mov_S_McahSFormat sfmt;
};

class Mov_S_McahbInstruction : public Instruction {
public:
  Mov_S_McahbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_S_McahbSFormat &getSfmt() const;

private:
  Mov_S_McahbSFormat sfmt;
};

class Mov_S_R_U7Instruction : public Instruction {
public:
  Mov_S_R_U7Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mov_S_R_U7SFormat &getSfmt() const;

private:
  Mov_S_R_U7SFormat sfmt;
};

class Tst_L_S12_Instruction : public Instruction {
public:
  Tst_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_L_S12_SFormat &getSfmt() const;

private:
  Tst_L_S12_SFormat sfmt;
};

class Tst_Ccu6_Instruction : public Instruction {
public:
  Tst_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_Ccu6_SFormat &getSfmt() const;

private:
  Tst_Ccu6_SFormat sfmt;
};

class Tst_L_U6_Instruction : public Instruction {
public:
  Tst_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_L_U6_SFormat &getSfmt() const;

private:
  Tst_L_U6_SFormat sfmt;
};

class Tst_L_R_R__RcInstruction : public Instruction {
public:
  Tst_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_L_R_R__RcSFormat &getSfmt() const;

private:
  Tst_L_R_R__RcSFormat sfmt;
};

class Tst_Cc__RcInstruction : public Instruction {
public:
  Tst_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_Cc__RcSFormat &getSfmt() const;

private:
  Tst_Cc__RcSFormat sfmt;
};

class Tst_S_GoInstruction : public Instruction {
public:
  Tst_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_S_GoSFormat &getSfmt() const;

private:
  Tst_S_GoSFormat sfmt;
};

class Cmp_L_S12_Instruction : public Instruction {
public:
  Cmp_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_L_S12_SFormat &getSfmt() const;

private:
  Cmp_L_S12_SFormat sfmt;
};

class Cmp_Ccu6_Instruction : public Instruction {
public:
  Cmp_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_Ccu6_SFormat &getSfmt() const;

private:
  Cmp_Ccu6_SFormat sfmt;
};

class Cmp_L_U6_Instruction : public Instruction {
public:
  Cmp_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_L_U6_SFormat &getSfmt() const;

private:
  Cmp_L_U6_SFormat sfmt;
};

class Cmp_L_R_R__RcInstruction : public Instruction {
public:
  Cmp_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_L_R_R__RcSFormat &getSfmt() const;

private:
  Cmp_L_R_R__RcSFormat sfmt;
};

class Cmp_Cc__RcInstruction : public Instruction {
public:
  Cmp_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_Cc__RcSFormat &getSfmt() const;

private:
  Cmp_Cc__RcSFormat sfmt;
};

class Cmp_S_McahInstruction : public Instruction {
public:
  Cmp_S_McahInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_S_McahSFormat &getSfmt() const;

private:
  Cmp_S_McahSFormat sfmt;
};

class Cmp_S_R_U7Instruction : public Instruction {
public:
  Cmp_S_R_U7Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_S_R_U7SFormat &getSfmt() const;

private:
  Cmp_S_R_U7SFormat sfmt;
};

class Rcmp_L_S12_Instruction : public Instruction {
public:
  Rcmp_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_L_S12_SFormat &getSfmt() const;

private:
  Cmp_L_S12_SFormat sfmt;
};

class Rcmp_Ccu6_Instruction : public Instruction {
public:
  Rcmp_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_Ccu6_SFormat &getSfmt() const;

private:
  Cmp_Ccu6_SFormat sfmt;
};

class Rcmp_L_U6_Instruction : public Instruction {
public:
  Rcmp_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_L_U6_SFormat &getSfmt() const;

private:
  Cmp_L_U6_SFormat sfmt;
};

class Rcmp_L_R_R__RcInstruction : public Instruction {
public:
  Rcmp_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_L_R_R__RcSFormat &getSfmt() const;

private:
  Cmp_L_R_R__RcSFormat sfmt;
};

class Rcmp_Cc__RcInstruction : public Instruction {
public:
  Rcmp_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Cmp_Cc__RcSFormat &getSfmt() const;

private:
  Cmp_Cc__RcSFormat sfmt;
};

class Rsub_L_S12__Ra_Instruction : public Instruction {
public:
  Rsub_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Rsub_Ccu6__Ra_Instruction : public Instruction {
public:
  Rsub_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Rsub_L_U6__Ra_Instruction : public Instruction {
public:
  Rsub_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Rsub_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Rsub_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Rsub_Cc__Ra__RcInstruction : public Instruction {
public:
  Rsub_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Bset_L_S12__Ra_Instruction : public Instruction {
public:
  Bset_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Bset_Ccu6__Ra_Instruction : public Instruction {
public:
  Bset_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Bset_L_U6__Ra_Instruction : public Instruction {
public:
  Bset_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Bset_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Bset_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Bset_Cc__Ra__RcInstruction : public Instruction {
public:
  Bset_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class Bset_S_SsbInstruction : public Instruction {
public:
  Bset_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class Bclr_L_S12__Ra_Instruction : public Instruction {
public:
  Bclr_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Bclr_Ccu6__Ra_Instruction : public Instruction {
public:
  Bclr_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Bclr_L_U6__Ra_Instruction : public Instruction {
public:
  Bclr_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Bclr_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Bclr_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Bclr_Cc__Ra__RcInstruction : public Instruction {
public:
  Bclr_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class Bclr_S_SsbInstruction : public Instruction {
public:
  Bclr_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class Btst_L_S12_Instruction : public Instruction {
public:
  Btst_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_L_S12_SFormat &getSfmt() const;

private:
  Tst_L_S12_SFormat sfmt;
};

class Btst_Ccu6_Instruction : public Instruction {
public:
  Btst_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_Ccu6_SFormat &getSfmt() const;

private:
  Tst_Ccu6_SFormat sfmt;
};

class Btst_L_U6_Instruction : public Instruction {
public:
  Btst_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_L_U6_SFormat &getSfmt() const;

private:
  Tst_L_U6_SFormat sfmt;
};

class Btst_L_R_R__RcInstruction : public Instruction {
public:
  Btst_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_L_R_R__RcSFormat &getSfmt() const;

private:
  Tst_L_R_R__RcSFormat sfmt;
};

class Btst_Cc__RcInstruction : public Instruction {
public:
  Btst_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Tst_Cc__RcSFormat &getSfmt() const;

private:
  Tst_Cc__RcSFormat sfmt;
};

class Btst_S_SsbInstruction : public Instruction {
public:
  Btst_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Btst_S_SsbSFormat &getSfmt() const;

private:
  Btst_S_SsbSFormat sfmt;
};

class Bxor_L_S12__Ra_Instruction : public Instruction {
public:
  Bxor_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Bxor_Ccu6__Ra_Instruction : public Instruction {
public:
  Bxor_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Bxor_L_U6__Ra_Instruction : public Instruction {
public:
  Bxor_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Bxor_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Bxor_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Bxor_Cc__Ra__RcInstruction : public Instruction {
public:
  Bxor_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class Bmsk_L_S12__Ra_Instruction : public Instruction {
public:
  Bmsk_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_S12__Ra_SFormat &getSfmt() const;

private:
  And_L_S12__Ra_SFormat sfmt;
};

class Bmsk_Ccu6__Ra_Instruction : public Instruction {
public:
  Bmsk_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Ccu6__Ra_SFormat &getSfmt() const;

private:
  And_Ccu6__Ra_SFormat sfmt;
};

class Bmsk_L_U6__Ra_Instruction : public Instruction {
public:
  Bmsk_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_U6__Ra_SFormat &getSfmt() const;

private:
  And_L_U6__Ra_SFormat sfmt;
};

class Bmsk_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Bmsk_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  And_L_R_R__Ra__RcSFormat sfmt;
};

class Bmsk_Cc__Ra__RcInstruction : public Instruction {
public:
  Bmsk_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const And_Cc__Ra__RcSFormat &getSfmt() const;

private:
  And_Cc__Ra__RcSFormat sfmt;
};

class Bmsk_S_SsbInstruction : public Instruction {
public:
  Bmsk_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class Add1_L_S12__Ra_Instruction : public Instruction {
public:
  Add1_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Add1_Ccu6__Ra_Instruction : public Instruction {
public:
  Add1_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Add1_L_U6__Ra_Instruction : public Instruction {
public:
  Add1_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Add1_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Add1_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Add1_Cc__Ra__RcInstruction : public Instruction {
public:
  Add1_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_Add1_S_GoInstruction : public Instruction {
public:
  I16_Go_Add1_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Add2_L_S12__Ra_Instruction : public Instruction {
public:
  Add2_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Add2_Ccu6__Ra_Instruction : public Instruction {
public:
  Add2_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Add2_L_U6__Ra_Instruction : public Instruction {
public:
  Add2_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Add2_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Add2_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Add2_Cc__Ra__RcInstruction : public Instruction {
public:
  Add2_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_Add2_S_GoInstruction : public Instruction {
public:
  I16_Go_Add2_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Add3_L_S12__Ra_Instruction : public Instruction {
public:
  Add3_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Add3_Ccu6__Ra_Instruction : public Instruction {
public:
  Add3_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Add3_L_U6__Ra_Instruction : public Instruction {
public:
  Add3_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Add3_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Add3_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Add3_Cc__Ra__RcInstruction : public Instruction {
public:
  Add3_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class I16_Go_Add3_S_GoInstruction : public Instruction {
public:
  I16_Go_Add3_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Sub1_L_S12__Ra_Instruction : public Instruction {
public:
  Sub1_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Sub1_Ccu6__Ra_Instruction : public Instruction {
public:
  Sub1_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Sub1_L_U6__Ra_Instruction : public Instruction {
public:
  Sub1_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Sub1_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Sub1_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Sub1_Cc__Ra__RcInstruction : public Instruction {
public:
  Sub1_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Sub2_L_S12__Ra_Instruction : public Instruction {
public:
  Sub2_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Sub2_Ccu6__Ra_Instruction : public Instruction {
public:
  Sub2_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Sub2_L_U6__Ra_Instruction : public Instruction {
public:
  Sub2_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Sub2_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Sub2_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Sub2_Cc__Ra__RcInstruction : public Instruction {
public:
  Sub2_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Sub3_L_S12__Ra_Instruction : public Instruction {
public:
  Sub3_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_S12__Ra_SFormat &getSfmt() const;

private:
  Add_L_S12__Ra_SFormat sfmt;
};

class Sub3_Ccu6__Ra_Instruction : public Instruction {
public:
  Sub3_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Add_Ccu6__Ra_SFormat sfmt;
};

class Sub3_L_U6__Ra_Instruction : public Instruction {
public:
  Sub3_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_U6__Ra_SFormat &getSfmt() const;

private:
  Add_L_U6__Ra_SFormat sfmt;
};

class Sub3_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Sub3_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Add_L_R_R__Ra__RcSFormat sfmt;
};

class Sub3_Cc__Ra__RcInstruction : public Instruction {
public:
  Sub3_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Add_Cc__Ra__RcSFormat sfmt;
};

class Mpy_L_S12__Ra_Instruction : public Instruction {
public:
  Mpy_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_S12__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_S12__Ra_SFormat sfmt;
};

class Mpy_Ccu6__Ra_Instruction : public Instruction {
public:
  Mpy_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Mpy_Ccu6__Ra_SFormat sfmt;
};

class Mpy_L_U6__Ra_Instruction : public Instruction {
public:
  Mpy_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_U6__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_U6__Ra_SFormat sfmt;
};

class Mpy_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Mpy_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_L_R_R__Ra__RcSFormat sfmt;
};

class Mpy_Cc__Ra__RcInstruction : public Instruction {
public:
  Mpy_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_Cc__Ra__RcSFormat sfmt;
};

class Mpyh_L_S12__Ra_Instruction : public Instruction {
public:
  Mpyh_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_S12__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_S12__Ra_SFormat sfmt;
};

class Mpyh_Ccu6__Ra_Instruction : public Instruction {
public:
  Mpyh_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Mpy_Ccu6__Ra_SFormat sfmt;
};

class Mpyh_L_U6__Ra_Instruction : public Instruction {
public:
  Mpyh_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_U6__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_U6__Ra_SFormat sfmt;
};

class Mpyh_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Mpyh_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_L_R_R__Ra__RcSFormat sfmt;
};

class Mpyh_Cc__Ra__RcInstruction : public Instruction {
public:
  Mpyh_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_Cc__Ra__RcSFormat sfmt;
};

class Mpyhu_L_S12__Ra_Instruction : public Instruction {
public:
  Mpyhu_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_S12__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_S12__Ra_SFormat sfmt;
};

class Mpyhu_Ccu6__Ra_Instruction : public Instruction {
public:
  Mpyhu_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Mpy_Ccu6__Ra_SFormat sfmt;
};

class Mpyhu_L_U6__Ra_Instruction : public Instruction {
public:
  Mpyhu_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_U6__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_U6__Ra_SFormat sfmt;
};

class Mpyhu_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Mpyhu_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_L_R_R__Ra__RcSFormat sfmt;
};

class Mpyhu_Cc__Ra__RcInstruction : public Instruction {
public:
  Mpyhu_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_Cc__Ra__RcSFormat sfmt;
};

class Mpyu_L_S12__Ra_Instruction : public Instruction {
public:
  Mpyu_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_S12__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_S12__Ra_SFormat sfmt;
};

class Mpyu_Ccu6__Ra_Instruction : public Instruction {
public:
  Mpyu_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Mpy_Ccu6__Ra_SFormat sfmt;
};

class Mpyu_L_U6__Ra_Instruction : public Instruction {
public:
  Mpyu_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_U6__Ra_SFormat &getSfmt() const;

private:
  Mpy_L_U6__Ra_SFormat sfmt;
};

class Mpyu_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Mpyu_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_L_R_R__Ra__RcSFormat sfmt;
};

class Mpyu_Cc__Ra__RcInstruction : public Instruction {
public:
  Mpyu_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mpy_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Mpy_Cc__Ra__RcSFormat sfmt;
};

class J_L_R_R___Rc_Noilink_Instruction : public Instruction {
public:
  J_L_R_R___Rc_Noilink_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_R_R___Rc_Noilink_SFormat &getSfmt() const;

private:
  J_L_R_R___Rc_Noilink_SFormat sfmt;
};

class J_Cc___Rc_Noilink_Instruction : public Instruction {
public:
  J_Cc___Rc_Noilink_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Cc___Rc_Noilink_SFormat &getSfmt() const;

private:
  J_Cc___Rc_Noilink_SFormat sfmt;
};

class J_L_R_R___Rc_Ilink_Instruction : public Instruction {
public:
  J_L_R_R___Rc_Ilink_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_R_R___Rc_Ilink_SFormat &getSfmt() const;

private:
  J_L_R_R___Rc_Ilink_SFormat sfmt;
};

class J_Cc___Rc_Ilink_Instruction : public Instruction {
public:
  J_Cc___Rc_Ilink_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Cc___Rc_Ilink_SFormat &getSfmt() const;

private:
  J_Cc___Rc_Ilink_SFormat sfmt;
};

class J_L_S12_Instruction : public Instruction {
public:
  J_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_S12_SFormat &getSfmt() const;

private:
  J_L_S12_SFormat sfmt;
};

class J_Ccu6_Instruction : public Instruction {
public:
  J_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Ccu6_SFormat &getSfmt() const;

private:
  J_Ccu6_SFormat sfmt;
};

class J_L_U6_Instruction : public Instruction {
public:
  J_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_U6_SFormat &getSfmt() const;

private:
  J_L_U6_SFormat sfmt;
};

class J_SInstruction : public Instruction {
public:
  J_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_SSFormat &getSfmt() const;

private:
  J_SSFormat sfmt;
};

class J_S__SInstruction : public Instruction {
public:
  J_S__SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_S__SSFormat &getSfmt() const;

private:
  J_S__SSFormat sfmt;
};

class J_Seq__SInstruction : public Instruction {
public:
  J_Seq__SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Seq__SSFormat &getSfmt() const;

private:
  J_Seq__SSFormat sfmt;
};

class J_Sne__SInstruction : public Instruction {
public:
  J_Sne__SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Seq__SSFormat &getSfmt() const;

private:
  J_Seq__SSFormat sfmt;
};

class J_L_S12_D_Instruction : public Instruction {
public:
  J_L_S12_D_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_S12_D_SFormat &getSfmt() const;

private:
  J_L_S12_D_SFormat sfmt;
};

class J_Ccu6_D_Instruction : public Instruction {
public:
  J_Ccu6_D_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Ccu6_D_SFormat &getSfmt() const;

private:
  J_Ccu6_D_SFormat sfmt;
};

class J_L_U6_D_Instruction : public Instruction {
public:
  J_L_U6_D_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_U6_D_SFormat &getSfmt() const;

private:
  J_L_U6_D_SFormat sfmt;
};

class J_L_R_R_D___Rc_Instruction : public Instruction {
public:
  J_L_R_R_D___Rc_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_L_R_R_D___Rc_SFormat &getSfmt() const;

private:
  J_L_R_R_D___Rc_SFormat sfmt;
};

class J_Cc_D___Rc_Instruction : public Instruction {
public:
  J_Cc_D___Rc_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_Cc_D___Rc_SFormat &getSfmt() const;

private:
  J_Cc_D___Rc_SFormat sfmt;
};

class J_S_DInstruction : public Instruction {
public:
  J_S_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_SSFormat &getSfmt() const;

private:
  J_SSFormat sfmt;
};

class J_S__S_DInstruction : public Instruction {
public:
  J_S__S_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const J_S__SSFormat &getSfmt() const;

private:
  J_S__SSFormat sfmt;
};

class Jl_L_S12_Instruction : public Instruction {
public:
  Jl_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_L_S12_SFormat &getSfmt() const;

private:
  Jl_L_S12_SFormat sfmt;
};

class Jl_Ccu6_Instruction : public Instruction {
public:
  Jl_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_Ccu6_SFormat &getSfmt() const;

private:
  Jl_Ccu6_SFormat sfmt;
};

class Jl_L_U6_Instruction : public Instruction {
public:
  Jl_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_L_U6_SFormat &getSfmt() const;

private:
  Jl_L_U6_SFormat sfmt;
};

class Jl_SInstruction : public Instruction {
public:
  Jl_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_SSFormat &getSfmt() const;

private:
  Jl_SSFormat sfmt;
};

class Jl_L_R_R___Rc_Noilink_Instruction : public Instruction {
public:
  Jl_L_R_R___Rc_Noilink_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_L_R_R___Rc_Noilink_SFormat &getSfmt() const;

private:
  Jl_L_R_R___Rc_Noilink_SFormat sfmt;
};

class Jl_Cc___Rc_Noilink_Instruction : public Instruction {
public:
  Jl_Cc___Rc_Noilink_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_Cc___Rc_Noilink_SFormat &getSfmt() const;

private:
  Jl_Cc___Rc_Noilink_SFormat sfmt;
};

class Jl_L_S12_D_Instruction : public Instruction {
public:
  Jl_L_S12_D_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_L_S12_SFormat &getSfmt() const;

private:
  Jl_L_S12_SFormat sfmt;
};

class Jl_Ccu6_D_Instruction : public Instruction {
public:
  Jl_Ccu6_D_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_Ccu6_SFormat &getSfmt() const;

private:
  Jl_Ccu6_SFormat sfmt;
};

class Jl_L_U6_D_Instruction : public Instruction {
public:
  Jl_L_U6_D_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_L_U6_SFormat &getSfmt() const;

private:
  Jl_L_U6_SFormat sfmt;
};

class Jl_L_R_R_D___Rc_Instruction : public Instruction {
public:
  Jl_L_R_R_D___Rc_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_L_R_R_D___Rc_SFormat &getSfmt() const;

private:
  Jl_L_R_R_D___Rc_SFormat sfmt;
};

class Jl_Cc_D___Rc_Instruction : public Instruction {
public:
  Jl_Cc_D___Rc_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_Cc_D___Rc_SFormat &getSfmt() const;

private:
  Jl_Cc_D___Rc_SFormat sfmt;
};

class Jl_S_DInstruction : public Instruction {
public:
  Jl_S_DInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Jl_S_DSFormat &getSfmt() const;

private:
  Jl_S_DSFormat sfmt;
};

class Lp_L_S12_Instruction : public Instruction {
public:
  Lp_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Lp_L_S12_SFormat &getSfmt() const;

private:
  Lp_L_S12_SFormat sfmt;
};

class Lpcc_Ccu6Instruction : public Instruction {
public:
  Lpcc_Ccu6Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Lpcc_Ccu6SFormat &getSfmt() const;

private:
  Lpcc_Ccu6SFormat sfmt;
};

class Flag_L_S12_Instruction : public Instruction {
public:
  Flag_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Flag_L_S12_SFormat &getSfmt() const;

private:
  Flag_L_S12_SFormat sfmt;
};

class Flag_Ccu6_Instruction : public Instruction {
public:
  Flag_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Flag_Ccu6_SFormat &getSfmt() const;

private:
  Flag_Ccu6_SFormat sfmt;
};

class Flag_L_U6_Instruction : public Instruction {
public:
  Flag_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Flag_L_U6_SFormat &getSfmt() const;

private:
  Flag_L_U6_SFormat sfmt;
};

class Flag_L_R_R__RcInstruction : public Instruction {
public:
  Flag_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Flag_L_R_R__RcSFormat &getSfmt() const;

private:
  Flag_L_R_R__RcSFormat sfmt;
};

class Flag_Cc__RcInstruction : public Instruction {
public:
  Flag_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Flag_Cc__RcSFormat &getSfmt() const;

private:
  Flag_Cc__RcSFormat sfmt;
};

class Lr_L_R_R___Rc_Instruction : public Instruction {
public:
  Lr_L_R_R___Rc_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Lr_L_R_R___Rc_SFormat &getSfmt() const;

private:
  Lr_L_R_R___Rc_SFormat sfmt;
};

class Lr_L_S12_Instruction : public Instruction {
public:
  Lr_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Lr_L_S12_SFormat &getSfmt() const;

private:
  Lr_L_S12_SFormat sfmt;
};

class Lr_L_U6_Instruction : public Instruction {
public:
  Lr_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Lr_L_U6_SFormat &getSfmt() const;

private:
  Lr_L_U6_SFormat sfmt;
};

class Sr_L_R_R___Rc_Instruction : public Instruction {
public:
  Sr_L_R_R___Rc_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sr_L_R_R___Rc_SFormat &getSfmt() const;

private:
  Sr_L_R_R___Rc_SFormat sfmt;
};

class Sr_L_S12_Instruction : public Instruction {
public:
  Sr_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sr_L_S12_SFormat &getSfmt() const;

private:
  Sr_L_S12_SFormat sfmt;
};

class Sr_L_U6_Instruction : public Instruction {
public:
  Sr_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sr_L_U6_SFormat &getSfmt() const;

private:
  Sr_L_U6_SFormat sfmt;
};

class Asl_L_R_R__RcInstruction : public Instruction {
public:
  Asl_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_R_R__RcSFormat &getSfmt() const;

private:
  Asl_L_R_R__RcSFormat sfmt;
};

class Asl_L_U6_Instruction : public Instruction {
public:
  Asl_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_U6_SFormat &getSfmt() const;

private:
  Asl_L_U6_SFormat sfmt;
};

class I16_Go_Asl_S_GoInstruction : public Instruction {
public:
  I16_Go_Asl_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Asr_L_R_R__RcInstruction : public Instruction {
public:
  Asr_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asr_L_R_R__RcSFormat &getSfmt() const;

private:
  Asr_L_R_R__RcSFormat sfmt;
};

class Asr_L_U6_Instruction : public Instruction {
public:
  Asr_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asr_L_U6_SFormat &getSfmt() const;

private:
  Asr_L_U6_SFormat sfmt;
};

class I16_Go_Asr_S_GoInstruction : public Instruction {
public:
  I16_Go_Asr_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Lsr_L_R_R__RcInstruction : public Instruction {
public:
  Lsr_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asr_L_R_R__RcSFormat &getSfmt() const;

private:
  Asr_L_R_R__RcSFormat sfmt;
};

class Lsr_L_U6_Instruction : public Instruction {
public:
  Lsr_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asr_L_U6_SFormat &getSfmt() const;

private:
  Asr_L_U6_SFormat sfmt;
};

class I16_Go_Lsr_S_GoInstruction : public Instruction {
public:
  I16_Go_Lsr_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Ror_L_R_R__RcInstruction : public Instruction {
public:
  Ror_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asr_L_R_R__RcSFormat &getSfmt() const;

private:
  Asr_L_R_R__RcSFormat sfmt;
};

class Ror_L_U6_Instruction : public Instruction {
public:
  Ror_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asr_L_U6_SFormat &getSfmt() const;

private:
  Asr_L_U6_SFormat sfmt;
};

class Rrc_L_R_R__RcInstruction : public Instruction {
public:
  Rrc_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rrc_L_R_R__RcSFormat &getSfmt() const;

private:
  Rrc_L_R_R__RcSFormat sfmt;
};

class Rrc_L_U6_Instruction : public Instruction {
public:
  Rrc_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rrc_L_U6_SFormat &getSfmt() const;

private:
  Rrc_L_U6_SFormat sfmt;
};

class Sexb_L_R_R__RcInstruction : public Instruction {
public:
  Sexb_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexb_L_R_R__RcSFormat &getSfmt() const;

private:
  Sexb_L_R_R__RcSFormat sfmt;
};

class Sexb_L_U6_Instruction : public Instruction {
public:
  Sexb_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexb_L_U6_SFormat &getSfmt() const;

private:
  Sexb_L_U6_SFormat sfmt;
};

class I16_Go_Sexb_S_GoInstruction : public Instruction {
public:
  I16_Go_Sexb_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Sexw_L_R_R__RcInstruction : public Instruction {
public:
  Sexw_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexw_L_R_R__RcSFormat &getSfmt() const;

private:
  Sexw_L_R_R__RcSFormat sfmt;
};

class Sexw_L_U6_Instruction : public Instruction {
public:
  Sexw_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexw_L_U6_SFormat &getSfmt() const;

private:
  Sexw_L_U6_SFormat sfmt;
};

class I16_Go_Sexw_S_GoInstruction : public Instruction {
public:
  I16_Go_Sexw_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Extb_L_R_R__RcInstruction : public Instruction {
public:
  Extb_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexb_L_R_R__RcSFormat &getSfmt() const;

private:
  Sexb_L_R_R__RcSFormat sfmt;
};

class Extb_L_U6_Instruction : public Instruction {
public:
  Extb_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexb_L_U6_SFormat &getSfmt() const;

private:
  Sexb_L_U6_SFormat sfmt;
};

class I16_Go_Extb_S_GoInstruction : public Instruction {
public:
  I16_Go_Extb_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Extw_L_R_R__RcInstruction : public Instruction {
public:
  Extw_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexw_L_R_R__RcSFormat &getSfmt() const;

private:
  Sexw_L_R_R__RcSFormat sfmt;
};

class Extw_L_U6_Instruction : public Instruction {
public:
  Extw_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sexw_L_U6_SFormat &getSfmt() const;

private:
  Sexw_L_U6_SFormat sfmt;
};

class I16_Go_Extw_S_GoInstruction : public Instruction {
public:
  I16_Go_Extw_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Abs_L_R_R__RcInstruction : public Instruction {
public:
  Abs_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abs_L_R_R__RcSFormat &getSfmt() const;

private:
  Abs_L_R_R__RcSFormat sfmt;
};

class Abs_L_U6_Instruction : public Instruction {
public:
  Abs_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abs_L_U6_SFormat &getSfmt() const;

private:
  Abs_L_U6_SFormat sfmt;
};

class I16_Go_Abs_S_GoInstruction : public Instruction {
public:
  I16_Go_Abs_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Not_L_R_R__RcInstruction : public Instruction {
public:
  Not_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Not_L_R_R__RcSFormat &getSfmt() const;

private:
  Not_L_R_R__RcSFormat sfmt;
};

class Not_L_U6_Instruction : public Instruction {
public:
  Not_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Not_L_U6_SFormat &getSfmt() const;

private:
  Not_L_U6_SFormat sfmt;
};

class I16_Go_Not_S_GoInstruction : public Instruction {
public:
  I16_Go_Not_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Rlc_L_R_R__RcInstruction : public Instruction {
public:
  Rlc_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rrc_L_R_R__RcSFormat &getSfmt() const;

private:
  Rrc_L_R_R__RcSFormat sfmt;
};

class Rlc_L_U6_Instruction : public Instruction {
public:
  Rlc_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rrc_L_U6_SFormat &getSfmt() const;

private:
  Rrc_L_U6_SFormat sfmt;
};

class Ex_L_R_R__RcInstruction : public Instruction {
public:
  Ex_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ex_L_R_R__RcSFormat &getSfmt() const;

private:
  Ex_L_R_R__RcSFormat sfmt;
};

class Ex_L_U6_Instruction : public Instruction {
public:
  Ex_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Ex_L_U6_SFormat &getSfmt() const;

private:
  Ex_L_U6_SFormat sfmt;
};

class I16_Go_Neg_S_GoInstruction : public Instruction {
public:
  I16_Go_Neg_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class SwiInstruction : public Instruction {
public:
  SwiInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const SwiSFormat &getSfmt() const;

private:
  SwiSFormat sfmt;
};

class Trap_SInstruction : public Instruction {
public:
  Trap_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Trap_SSFormat &getSfmt() const;

private:
  Trap_SSFormat sfmt;
};

class BrkInstruction : public Instruction {
public:
  BrkInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const BrkSFormat &getSfmt() const;

private:
  BrkSFormat sfmt;
};

class Brk_SInstruction : public Instruction {
public:
  Brk_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const BrkSFormat &getSfmt() const;

private:
  BrkSFormat sfmt;
};

class Asl_L_S12__Ra_Instruction : public Instruction {
public:
  Asl_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asl_L_S12__Ra_SFormat sfmt;
};

class Asl_Ccu6__Ra_Instruction : public Instruction {
public:
  Asl_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asl_Ccu6__Ra_SFormat sfmt;
};

class Asl_L_U6__Ra_Instruction : public Instruction {
public:
  Asl_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asl_L_U6__Ra_SFormat sfmt;
};

class Asl_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Asl_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asl_L_R_R__Ra__RcSFormat sfmt;
};

class Asl_Cc__Ra__RcInstruction : public Instruction {
public:
  Asl_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asl_Cc__Ra__RcSFormat sfmt;
};

class Asl_S_Cbu3Instruction : public Instruction {
public:
  Asl_S_Cbu3Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_Cbu3SFormat &getSfmt() const;

private:
  Add_S_Cbu3SFormat sfmt;
};

class Asl_S_SsbInstruction : public Instruction {
public:
  Asl_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class I16_Go_Aslm_S_GoInstruction : public Instruction {
public:
  I16_Go_Aslm_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Lsr_L_S12__Ra_Instruction : public Instruction {
public:
  Lsr_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asl_L_S12__Ra_SFormat sfmt;
};

class Lsr_Ccu6__Ra_Instruction : public Instruction {
public:
  Lsr_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asl_Ccu6__Ra_SFormat sfmt;
};

class Lsr_L_U6__Ra_Instruction : public Instruction {
public:
  Lsr_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asl_L_U6__Ra_SFormat sfmt;
};

class Lsr_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Lsr_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asl_L_R_R__Ra__RcSFormat sfmt;
};

class Lsr_Cc__Ra__RcInstruction : public Instruction {
public:
  Lsr_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asl_Cc__Ra__RcSFormat sfmt;
};

class Lsr_S_SsbInstruction : public Instruction {
public:
  Lsr_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class I16_Go_Lsrm_S_GoInstruction : public Instruction {
public:
  I16_Go_Lsrm_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Asr_L_S12__Ra_Instruction : public Instruction {
public:
  Asr_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asl_L_S12__Ra_SFormat sfmt;
};

class Asr_Ccu6__Ra_Instruction : public Instruction {
public:
  Asr_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asl_Ccu6__Ra_SFormat sfmt;
};

class Asr_L_U6__Ra_Instruction : public Instruction {
public:
  Asr_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asl_L_U6__Ra_SFormat sfmt;
};

class Asr_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Asr_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asl_L_R_R__Ra__RcSFormat sfmt;
};

class Asr_Cc__Ra__RcInstruction : public Instruction {
public:
  Asr_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asl_Cc__Ra__RcSFormat sfmt;
};

class Asr_S_Cbu3Instruction : public Instruction {
public:
  Asr_S_Cbu3Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Add_S_Cbu3SFormat &getSfmt() const;

private:
  Add_S_Cbu3SFormat sfmt;
};

class Asr_S_SsbInstruction : public Instruction {
public:
  Asr_S_SsbInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Sub_S_SsbSFormat &getSfmt() const;

private:
  Sub_S_SsbSFormat sfmt;
};

class I16_Go_Asrm_S_GoInstruction : public Instruction {
public:
  I16_Go_Asrm_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const I16_Go_Sub_S_GoSFormat &getSfmt() const;

private:
  I16_Go_Sub_S_GoSFormat sfmt;
};

class Ror_L_S12__Ra_Instruction : public Instruction {
public:
  Ror_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asl_L_S12__Ra_SFormat sfmt;
};

class Ror_Ccu6__Ra_Instruction : public Instruction {
public:
  Ror_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asl_Ccu6__Ra_SFormat sfmt;
};

class Ror_L_U6__Ra_Instruction : public Instruction {
public:
  Ror_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asl_L_U6__Ra_SFormat sfmt;
};

class Ror_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Ror_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asl_L_R_R__Ra__RcSFormat sfmt;
};

class Ror_Cc__Ra__RcInstruction : public Instruction {
public:
  Ror_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asl_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asl_Cc__Ra__RcSFormat sfmt;
};

class Mul64_L_S12_Instruction : public Instruction {
public:
  Mul64_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_L_S12_SFormat &getSfmt() const;

private:
  Mul64_L_S12_SFormat sfmt;
};

class Mul64_Ccu6_Instruction : public Instruction {
public:
  Mul64_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_Ccu6_SFormat &getSfmt() const;

private:
  Mul64_Ccu6_SFormat sfmt;
};

class Mul64_L_U6_Instruction : public Instruction {
public:
  Mul64_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_L_U6_SFormat &getSfmt() const;

private:
  Mul64_L_U6_SFormat sfmt;
};

class Mul64_L_R_R__RcInstruction : public Instruction {
public:
  Mul64_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_L_R_R__RcSFormat &getSfmt() const;

private:
  Mul64_L_R_R__RcSFormat sfmt;
};

class Mul64_Cc__RcInstruction : public Instruction {
public:
  Mul64_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_Cc__RcSFormat &getSfmt() const;

private:
  Mul64_Cc__RcSFormat sfmt;
};

class Mul64_S_GoInstruction : public Instruction {
public:
  Mul64_S_GoInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_S_GoSFormat &getSfmt() const;

private:
  Mul64_S_GoSFormat sfmt;
};

class Mulu64_L_S12_Instruction : public Instruction {
public:
  Mulu64_L_S12_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_L_S12_SFormat &getSfmt() const;

private:
  Mul64_L_S12_SFormat sfmt;
};

class Mulu64_Ccu6_Instruction : public Instruction {
public:
  Mulu64_Ccu6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_Ccu6_SFormat &getSfmt() const;

private:
  Mul64_Ccu6_SFormat sfmt;
};

class Mulu64_L_U6_Instruction : public Instruction {
public:
  Mulu64_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_L_U6_SFormat &getSfmt() const;

private:
  Mul64_L_U6_SFormat sfmt;
};

class Mulu64_L_R_R__RcInstruction : public Instruction {
public:
  Mulu64_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_L_R_R__RcSFormat &getSfmt() const;

private:
  Mul64_L_R_R__RcSFormat sfmt;
};

class Mulu64_Cc__RcInstruction : public Instruction {
public:
  Mulu64_Cc__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mul64_Cc__RcSFormat &getSfmt() const;

private:
  Mul64_Cc__RcSFormat sfmt;
};

class Adds_L_S12__Ra_Instruction : public Instruction {
public:
  Adds_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_L_S12__Ra_SFormat &getSfmt() const;

private:
  Adds_L_S12__Ra_SFormat sfmt;
};

class Adds_Ccu6__Ra_Instruction : public Instruction {
public:
  Adds_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Adds_Ccu6__Ra_SFormat sfmt;
};

class Adds_L_U6__Ra_Instruction : public Instruction {
public:
  Adds_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_L_U6__Ra_SFormat &getSfmt() const;

private:
  Adds_L_U6__Ra_SFormat sfmt;
};

class Adds_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Adds_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Adds_L_R_R__Ra__RcSFormat sfmt;
};

class Adds_Cc__Ra__RcInstruction : public Instruction {
public:
  Adds_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Adds_Cc__Ra__RcSFormat sfmt;
};

class Subs_L_S12__Ra_Instruction : public Instruction {
public:
  Subs_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_L_S12__Ra_SFormat &getSfmt() const;

private:
  Adds_L_S12__Ra_SFormat sfmt;
};

class Subs_Ccu6__Ra_Instruction : public Instruction {
public:
  Subs_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Adds_Ccu6__Ra_SFormat sfmt;
};

class Subs_L_U6__Ra_Instruction : public Instruction {
public:
  Subs_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_L_U6__Ra_SFormat &getSfmt() const;

private:
  Adds_L_U6__Ra_SFormat sfmt;
};

class Subs_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Subs_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Adds_L_R_R__Ra__RcSFormat sfmt;
};

class Subs_Cc__Ra__RcInstruction : public Instruction {
public:
  Subs_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Adds_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Adds_Cc__Ra__RcSFormat sfmt;
};

class Divaw_L_S12__Ra_Instruction : public Instruction {
public:
  Divaw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Divaw_L_S12__Ra_SFormat &getSfmt() const;

private:
  Divaw_L_S12__Ra_SFormat sfmt;
};

class Divaw_Ccu6__Ra_Instruction : public Instruction {
public:
  Divaw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Divaw_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Divaw_Ccu6__Ra_SFormat sfmt;
};

class Divaw_L_U6__Ra_Instruction : public Instruction {
public:
  Divaw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Divaw_L_U6__Ra_SFormat &getSfmt() const;

private:
  Divaw_L_U6__Ra_SFormat sfmt;
};

class Divaw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Divaw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Divaw_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Divaw_L_R_R__Ra__RcSFormat sfmt;
};

class Divaw_Cc__Ra__RcInstruction : public Instruction {
public:
  Divaw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Divaw_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Divaw_Cc__Ra__RcSFormat sfmt;
};

class Asls_L_S12__Ra_Instruction : public Instruction {
public:
  Asls_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asls_L_S12__Ra_SFormat sfmt;
};

class Asls_Ccu6__Ra_Instruction : public Instruction {
public:
  Asls_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asls_Ccu6__Ra_SFormat sfmt;
};

class Asls_L_U6__Ra_Instruction : public Instruction {
public:
  Asls_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asls_L_U6__Ra_SFormat sfmt;
};

class Asls_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Asls_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asls_L_R_R__Ra__RcSFormat sfmt;
};

class Asls_Cc__Ra__RcInstruction : public Instruction {
public:
  Asls_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asls_Cc__Ra__RcSFormat sfmt;
};

class Asrs_L_S12__Ra_Instruction : public Instruction {
public:
  Asrs_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asls_L_S12__Ra_SFormat sfmt;
};

class Asrs_Ccu6__Ra_Instruction : public Instruction {
public:
  Asrs_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asls_Ccu6__Ra_SFormat sfmt;
};

class Asrs_L_U6__Ra_Instruction : public Instruction {
public:
  Asrs_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asls_L_U6__Ra_SFormat sfmt;
};

class Asrs_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Asrs_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asls_L_R_R__Ra__RcSFormat sfmt;
};

class Asrs_Cc__Ra__RcInstruction : public Instruction {
public:
  Asrs_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asls_Cc__Ra__RcSFormat sfmt;
};

class Addsdw_L_S12__Ra_Instruction : public Instruction {
public:
  Addsdw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asls_L_S12__Ra_SFormat sfmt;
};

class Addsdw_Ccu6__Ra_Instruction : public Instruction {
public:
  Addsdw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asls_Ccu6__Ra_SFormat sfmt;
};

class Addsdw_L_U6__Ra_Instruction : public Instruction {
public:
  Addsdw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asls_L_U6__Ra_SFormat sfmt;
};

class Addsdw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Addsdw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asls_L_R_R__Ra__RcSFormat sfmt;
};

class Addsdw_Cc__Ra__RcInstruction : public Instruction {
public:
  Addsdw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asls_Cc__Ra__RcSFormat sfmt;
};

class Subsdw_L_S12__Ra_Instruction : public Instruction {
public:
  Subsdw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_S12__Ra_SFormat &getSfmt() const;

private:
  Asls_L_S12__Ra_SFormat sfmt;
};

class Subsdw_Ccu6__Ra_Instruction : public Instruction {
public:
  Subsdw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Asls_Ccu6__Ra_SFormat sfmt;
};

class Subsdw_L_U6__Ra_Instruction : public Instruction {
public:
  Subsdw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_U6__Ra_SFormat &getSfmt() const;

private:
  Asls_L_U6__Ra_SFormat sfmt;
};

class Subsdw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Subsdw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Asls_L_R_R__Ra__RcSFormat sfmt;
};

class Subsdw_Cc__Ra__RcInstruction : public Instruction {
public:
  Subsdw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Asls_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Asls_Cc__Ra__RcSFormat sfmt;
};

class Swap_L_R_R__RcInstruction : public Instruction {
public:
  Swap_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Swap_L_R_R__RcSFormat &getSfmt() const;

private:
  Swap_L_R_R__RcSFormat sfmt;
};

class Swap_L_U6_Instruction : public Instruction {
public:
  Swap_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Swap_L_U6_SFormat &getSfmt() const;

private:
  Swap_L_U6_SFormat sfmt;
};

class Norm_L_R_R__RcInstruction : public Instruction {
public:
  Norm_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Swap_L_R_R__RcSFormat &getSfmt() const;

private:
  Swap_L_R_R__RcSFormat sfmt;
};

class Norm_L_U6_Instruction : public Instruction {
public:
  Norm_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Norm_L_U6_SFormat &getSfmt() const;

private:
  Norm_L_U6_SFormat sfmt;
};

class Rnd16_L_R_R__RcInstruction : public Instruction {
public:
  Rnd16_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rnd16_L_R_R__RcSFormat &getSfmt() const;

private:
  Rnd16_L_R_R__RcSFormat sfmt;
};

class Rnd16_L_U6_Instruction : public Instruction {
public:
  Rnd16_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rnd16_L_U6_SFormat &getSfmt() const;

private:
  Rnd16_L_U6_SFormat sfmt;
};

class Abssw_L_R_R__RcInstruction : public Instruction {
public:
  Abssw_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abssw_L_R_R__RcSFormat &getSfmt() const;

private:
  Abssw_L_R_R__RcSFormat sfmt;
};

class Abssw_L_U6_Instruction : public Instruction {
public:
  Abssw_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abssw_L_U6_SFormat &getSfmt() const;

private:
  Abssw_L_U6_SFormat sfmt;
};

class Abss_L_R_R__RcInstruction : public Instruction {
public:
  Abss_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rnd16_L_R_R__RcSFormat &getSfmt() const;

private:
  Rnd16_L_R_R__RcSFormat sfmt;
};

class Abss_L_U6_Instruction : public Instruction {
public:
  Abss_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abss_L_U6_SFormat &getSfmt() const;

private:
  Abss_L_U6_SFormat sfmt;
};

class Negsw_L_R_R__RcInstruction : public Instruction {
public:
  Negsw_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abssw_L_R_R__RcSFormat &getSfmt() const;

private:
  Abssw_L_R_R__RcSFormat sfmt;
};

class Negsw_L_U6_Instruction : public Instruction {
public:
  Negsw_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Abssw_L_U6_SFormat &getSfmt() const;

private:
  Abssw_L_U6_SFormat sfmt;
};

class Negs_L_R_R__RcInstruction : public Instruction {
public:
  Negs_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rnd16_L_R_R__RcSFormat &getSfmt() const;

private:
  Rnd16_L_R_R__RcSFormat sfmt;
};

class Negs_L_U6_Instruction : public Instruction {
public:
  Negs_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Rnd16_L_U6_SFormat &getSfmt() const;

private:
  Rnd16_L_U6_SFormat sfmt;
};

class Normw_L_R_R__RcInstruction : public Instruction {
public:
  Normw_L_R_R__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Swap_L_R_R__RcSFormat &getSfmt() const;

private:
  Swap_L_R_R__RcSFormat sfmt;
};

class Normw_L_U6_Instruction : public Instruction {
public:
  Normw_L_U6_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Swap_L_U6_SFormat &getSfmt() const;

private:
  Swap_L_U6_SFormat sfmt;
};

class Nop_SInstruction : public Instruction {
public:
  Nop_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Nop_SSFormat &getSfmt() const;

private:
  Nop_SSFormat sfmt;
};

class Unimp_SInstruction : public Instruction {
public:
  Unimp_SInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Nop_SSFormat &getSfmt() const;

private:
  Nop_SSFormat sfmt;
};

class Pop_S_BInstruction : public Instruction {
public:
  Pop_S_BInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Pop_S_BSFormat &getSfmt() const;

private:
  Pop_S_BSFormat sfmt;
};

class Pop_S_BlinkInstruction : public Instruction {
public:
  Pop_S_BlinkInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Pop_S_BlinkSFormat &getSfmt() const;

private:
  Pop_S_BlinkSFormat sfmt;
};

class Push_S_BInstruction : public Instruction {
public:
  Push_S_BInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Push_S_BSFormat &getSfmt() const;

private:
  Push_S_BSFormat sfmt;
};

class Push_S_BlinkInstruction : public Instruction {
public:
  Push_S_BlinkInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Push_S_BlinkSFormat &getSfmt() const;

private:
  Push_S_BlinkSFormat sfmt;
};

class Mullw_L_S12__Ra_Instruction : public Instruction {
public:
  Mullw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_L_S12__Ra_SFormat &getSfmt() const;

private:
  Mullw_L_S12__Ra_SFormat sfmt;
};

class Mullw_Ccu6__Ra_Instruction : public Instruction {
public:
  Mullw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Mullw_Ccu6__Ra_SFormat sfmt;
};

class Mullw_L_U6__Ra_Instruction : public Instruction {
public:
  Mullw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_L_U6__Ra_SFormat &getSfmt() const;

private:
  Mullw_L_U6__Ra_SFormat sfmt;
};

class Mullw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Mullw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Mullw_L_R_R__Ra__RcSFormat sfmt;
};

class Mullw_Cc__Ra__RcInstruction : public Instruction {
public:
  Mullw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Mullw_Cc__Ra__RcSFormat sfmt;
};

class Maclw_L_S12__Ra_Instruction : public Instruction {
public:
  Maclw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_L_S12__Ra_SFormat &getSfmt() const;

private:
  Maclw_L_S12__Ra_SFormat sfmt;
};

class Maclw_Ccu6__Ra_Instruction : public Instruction {
public:
  Maclw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Maclw_Ccu6__Ra_SFormat sfmt;
};

class Maclw_L_U6__Ra_Instruction : public Instruction {
public:
  Maclw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_L_U6__Ra_SFormat &getSfmt() const;

private:
  Maclw_L_U6__Ra_SFormat sfmt;
};

class Maclw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Maclw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Maclw_L_R_R__Ra__RcSFormat sfmt;
};

class Maclw_Cc__Ra__RcInstruction : public Instruction {
public:
  Maclw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Maclw_Cc__Ra__RcSFormat sfmt;
};

class Machlw_L_S12__Ra_Instruction : public Instruction {
public:
  Machlw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_L_S12__Ra_SFormat &getSfmt() const;

private:
  Maclw_L_S12__Ra_SFormat sfmt;
};

class Machlw_Ccu6__Ra_Instruction : public Instruction {
public:
  Machlw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Maclw_Ccu6__Ra_SFormat sfmt;
};

class Machlw_L_U6__Ra_Instruction : public Instruction {
public:
  Machlw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_L_U6__Ra_SFormat &getSfmt() const;

private:
  Maclw_L_U6__Ra_SFormat sfmt;
};

class Machlw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Machlw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Maclw_L_R_R__Ra__RcSFormat sfmt;
};

class Machlw_Cc__Ra__RcInstruction : public Instruction {
public:
  Machlw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Maclw_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Maclw_Cc__Ra__RcSFormat sfmt;
};

class Mululw_L_S12__Ra_Instruction : public Instruction {
public:
  Mululw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_L_S12__Ra_SFormat &getSfmt() const;

private:
  Mullw_L_S12__Ra_SFormat sfmt;
};

class Mululw_Ccu6__Ra_Instruction : public Instruction {
public:
  Mululw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Mullw_Ccu6__Ra_SFormat sfmt;
};

class Mululw_L_U6__Ra_Instruction : public Instruction {
public:
  Mululw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_L_U6__Ra_SFormat &getSfmt() const;

private:
  Mullw_L_U6__Ra_SFormat sfmt;
};

class Mululw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Mululw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Mullw_L_R_R__Ra__RcSFormat sfmt;
};

class Mululw_Cc__Ra__RcInstruction : public Instruction {
public:
  Mululw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Mullw_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Mullw_Cc__Ra__RcSFormat sfmt;
};

class Machulw_L_S12__Ra_Instruction : public Instruction {
public:
  Machulw_L_S12__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Machulw_L_S12__Ra_SFormat &getSfmt() const;

private:
  Machulw_L_S12__Ra_SFormat sfmt;
};

class Machulw_Ccu6__Ra_Instruction : public Instruction {
public:
  Machulw_Ccu6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Machulw_Ccu6__Ra_SFormat &getSfmt() const;

private:
  Machulw_Ccu6__Ra_SFormat sfmt;
};

class Machulw_L_U6__Ra_Instruction : public Instruction {
public:
  Machulw_L_U6__Ra_Instruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Machulw_L_U6__Ra_SFormat &getSfmt() const;

private:
  Machulw_L_U6__Ra_SFormat sfmt;
};

class Machulw_L_R_R__Ra__RcInstruction : public Instruction {
public:
  Machulw_L_R_R__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Machulw_L_R_R__Ra__RcSFormat &getSfmt() const;

private:
  Machulw_L_R_R__Ra__RcSFormat sfmt;
};

class Machulw_Cc__Ra__RcInstruction : public Instruction {
public:
  Machulw_Cc__Ra__RcInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Machulw_Cc__Ra__RcSFormat &getSfmt() const;

private:
  Machulw_Cc__Ra__RcSFormat sfmt;
};

class Current_Loop_EndInstruction : public Instruction {
public:
  Current_Loop_EndInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Current_Loop_EndSFormat &getSfmt() const;

private:
  Current_Loop_EndSFormat sfmt;
};

class Current_Loop_End_After_BranchInstruction : public Instruction {
public:
  Current_Loop_End_After_BranchInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Current_Loop_End_After_BranchSFormat &getSfmt() const;

private:
  Current_Loop_End_After_BranchSFormat sfmt;
};

class Arc600_Current_Loop_End_After_BranchInstruction : public Instruction {
public:
  Arc600_Current_Loop_End_After_BranchInstruction() {}
  int parseSfmt(uint32_t rawInstruction, CgenIRContext &context);
  std::string dump() const;
  const Current_Loop_End_After_BranchSFormat &getSfmt() const;

private:
  Current_Loop_End_After_BranchSFormat sfmt;
};

#endif

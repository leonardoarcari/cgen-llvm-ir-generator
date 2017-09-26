#ifndef _CGEN_IR_COMMON_H_
#define _CGEN_IR_COMMON_H_

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

#include "llvm/IR/Constants.h"
#include "llvm/IR/GlobalVariable.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/Endian.h"

class CgenIRContext {
public:
  explicit CgenIRContext(const std::string &filePath)
      : builder(llvm::IRBuilder<>(llvm::getGlobalContext())),
        m(llvm::make_unique<llvm::Module>("Cgen-IR",
                                          llvm::getGlobalContext())) {
    // Read input file into text
    // TODO: Check for exceptions
    auto in = std::ifstream(filePath, std::ios::binary | std::ios::ate);
    auto pos = in.tellg();

    text = new char[pos];
    in.seekg(0, std::ios::beg);
    in.read(text, pos);

    text_size = static_cast<size_t>(pos);
    pc = text;
    uint16_t *p = (uint16_t *)text;
    for (unsigned int i = 0; i < text_size / sizeof(uint16_t); ++i) {
      std::cout << std::hex << *(p + i);
    }
    std::cout << '\n';
  }

  ~CgenIRContext() { delete text; }

  template <typename T, typename ChunkType>
  T readWord(size_t offset, llvm::support::endianness endianness =
                                llvm::support::endianness::native) const {
    T word = 0;
    auto chunks = std::vector<ChunkType>{};
    for (auto i = 0; i < (sizeof(T) / sizeof(ChunkType)); ++i) {
      chunks.push_back(llvm::support::endian::read<ChunkType, endianness>(
          pc + offset + i * sizeof(ChunkType)));
      if (i == 0) {
        word = chunks[i];
      } else {
        word = (word << sizeof(ChunkType)) | word[i];
      }
    }
    return word;
  }

  bool hasNext() const { return pc < (text + text_size); }

  uint8_t getPc() const { return *pc; }

  void incrementPc(size_t byte) {
    if (pc + byte >= text + text_size) {
      throw std::out_of_range(std::string("Cannot increment pc by ") +
                              std::to_string(byte));
    } else {
      pc = pc + byte;
    }
  }

private:
  char *text = nullptr;
  char *pc = nullptr;
  size_t text_size = 0;
  llvm::IRBuilder<> builder;
  std::unique_ptr<llvm::Module> m;
};

template <typename T>
inline T extractLSB0(T val, unsigned total, unsigned start, unsigned length) {
  return (val << ((sizeof(T) * 8) - start - 1)) >> ((sizeof(T) * 8) - length);
}

template <typename T>
inline T extractMSB0(T val, unsigned total, unsigned start, unsigned length) {
  return (val << ((sizeof(T) * 8) - total + start)) >>
         ((sizeof(T) * 8) - length);
}

/* Semantic operations */

template <typename T, typename S> inline auto Add(T x, S y) -> decltype(x + y) {
  return x + y;
}

template <typename T, typename S> inline auto Sub(T x, S y) -> decltype(x - y) {
  return x - y;
}

template <typename T, typename S> inline auto Mul(T x, S y) -> decltype(x * y) {
  return x * y;
}

template <typename T, typename S> inline auto Div(T x, S y) -> decltype(x / y) {
  return x / y;
}

template <typename T, typename S> inline auto Mod(T x, S y) -> decltype(x % y) {
  return x % y;
}

template <typename T> inline T Sra(T x, int y) { return x >> y; }

// Is this correct? Probabiliy not. Need a specification
// for integer types.
template <typename T> inline T Srl(T x, int y) { return x >> y; }

template <typename T> inline T Sll(T x, int y) { return x << y; }

template <typename T> inline T Ror(T x, int shift) {
  if (shift != 0) {
    int remain = 8 - shift;
    int mask = (1 << shift) - 1;
    T result = (x & mask) << remain;
    mask = (1 << remain) - 1;
    result |= (x >> shift) & mask;
    return result;
  }
  return x;
}

template <typename T> inline T Rol(T x, int shift) {
  if (shift != 0) {
    int remain = 8 - shift;
    int mask = (1 << remain) - 1;
    T result = (x & mask) << shift;
    mask = (1 << shift) - 1;
    result |= (x >> remain) & mask;
    return result;
  }
  return x;
}

template <typename T, typename S> inline auto And(T x, S y) -> decltype(x & y) {
  return x & y;
}

template <typename T, typename S> inline auto Or(T x, S y) -> decltype(x | y) {
  return x | y;
}

template <typename T, typename S> inline auto Xor(T x, S y) -> decltype(x ^ y) {
  return x ^ y;
}

template <typename T> inline T Neg(T x) { return -x; }

template <typename T> inline T Not(T x) { return !x; }

template <typename T> inline T Inv(T x) { return ~x; }

template <typename T> inline T Abs(T x) { return (x < 0 ? -x : x); }

template <typename T> inline T Eq(T x, T y) { return x == y; }

template <typename T> inline T Ne(T x, T y) { return x != y; }

template <typename T> inline T Lt(T x, T y) { return x < y; }

template <typename T> inline T Le(T x, T y) { return x <= y; }

template <typename T> inline T Gt(T x, T y) { return x > y; }

template <typename T> inline T Ge(T x, T y) { return x >= y; }

/* Binary with bit operations */

template <typename T> inline T AddC(T a, T b, unsigned char c) {
  T res = a + (b + c);
  return res;
}

template <typename T> inline unsigned char AddCF(T a, T b, unsigned char c) {
  T tmp = a + (b + c);
  unsigned char res = (tmp < a) || (c && tmp == a);
  return res;
}

template <typename T> inline unsigned char AddOF(T a, T b, unsigned char c) {
  T tmp = a + (b + c);
  unsigned char res = (((a < 0) == (b < 0)) && ((a < 0) != (tmp < 0)));
  return res;
}

template <typename T> inline T SubC(T a, T b, unsigned char c) {
  T res = a - (b + c);
  return res;
}

template <typename T> inline unsigned char SubCF(T a, T b, unsigned char c) {
  unsigned char res = (a < b) || (c && a == b);
  return res;
}

template <typename T> inline unsigned char SubOF(T a, T b, unsigned char c) {
  T tmp = a - (b + c);
  unsigned char res = (((a < 0) != (b < 0)) && ((a < 0) != (tmp < 0)));
  return res;
}

/* More complex operations */

template <typename T> inline T Max(T x, T y) { return std::max(x, y); }

template <typename T> inline T Min(T x, T y) { return std::min(x, y); }

// More investigation needed on return types
template <typename T> inline double Sin(T arg) {
  return std::sin(static_cast<double>(arg));
}

template <typename T> inline double Cos(T arg) {
  return std::cos(static_cast<double>(arg));
}

template <typename T> inline double Sqrt(T arg) {
  return std::sqrt(static_cast<double>(arg));
}

/* Conversion operations */

template <typename D, typename S> inline D ExtTo(S x) {
  return static_cast<D>(x);
}

// Not sure about semantic exactness of the following.
// Need more investigation.

template <typename D, typename S> inline D ZExtTo(S x) {
  return static_cast<D>(x);
}

template <typename D, typename S> inline D TruncTo(S x) {
  return static_cast<D>(x);
}

#endif
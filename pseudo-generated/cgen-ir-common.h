#include <cstdint>

template <typename SizeType>
SizeType getInstruction(void *someDataStructure, uint8_t *address) {
  auto size = sizeof(SizeType); // How much to shift

  // doSomething(size, address);
}

template <typename T>
inline T extractLSB0(T val, unsigned total, unsigned start, unsigned length) {
  return (val << ((sizeof(T) * 8) - start - 1)) >> ((sizeof(T) * 8) - length);
}

template <typename T>
inline T extractMSB0(T val, unsigned total, unsigned start, unsigned length) {
  return (val << ((sizeof(T) * 8) - total + start)) >>
         ((sizeof(T) * 8) - length);
}

template <typename T> inline T addC(T a, T b, unsigned char c) {
  T res = a + (b + c);
  return res;
}

template <typename T> inline unsigned char addCF(T a, T b, unsigned char c) {
  T tmp = a + (b + c);
  unsigned char res = (tmp < a) || (c && tmp == a);
  return res;
}

template <typename T> inline unsigned char addOF(T a, T b, unsigned char c) {
  T tmp = a + (b + c);
  unsigned char res = (((a < 0) == (b < 0)) && ((a < 0) != (tmp < 0)));
  return res;
}

template <typename T> inline T subC(T a, T b, unsigned char c) {
  T res = a - (b + c);
  return res;
}

template <typename T> inline unsigned char subCF(T a, T b, unsigned char c) {
  unsigned char res = (a < b) || (c && a == b);
  return res;
}

template <typename T> inline unsigned char subOF(T a, T b, unsigned char c) {
  T tmp = a - (b + c);
  unsigned char res = (((a < 0) != (b < 0)) && ((a < 0) != (tmp < 0)));
  return res;
}

template <typename D, typename S> inline D extTo(S x) {
  return static_cast<D>(x);
}

// Not sure about semantic exactness of the following.
// Need more investigation.

template <typename D, typename S> inline D zExtTo(S x) {
  return static_cast<D>(x);
}

template <typename D, typename S> inline D truncTo(S x) {
  return static_cast<D>(x);
}

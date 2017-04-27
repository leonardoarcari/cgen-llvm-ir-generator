#include <cstdint>

template<typename SizeType>
SizeType getInstruction(void * someDataStructure, uint8_t * address) {
	auto size = sizeof(SizeType); // How much to shift

	// doSomething(size, address);
}

template<typename T>
T extractLSB0(T val, unsigned total, unsigned start, unsigned length) {
	return (val << ((sizeof(T) * 8) - start - 1)) >> ((sizeof(T) * 8) - length);
}

template<typename T>
T extractMSB0(T val, unsigned total, unsigned start, unsigned length) {
	return (val << ((sizeof(T) * 8) - total + start)) >> ((sizeof(T) * 8) - length);
}
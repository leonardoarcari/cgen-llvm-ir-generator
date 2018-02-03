#include "ARCompactArc700Decoder.h"
#include "cgen-ir-common.h"

#include <iostream>

int main(int argc, char const *argv[]) {
  CgenIRContext a(argv[1]);
  while (a.hasNext()) {
    // Instruction::chunkType word1 =
    //     a.readWord<Instruction::chunkType, Instruction::chunkType,
    //                Instruction::endianness>(0);
    // Instruction::chunkType word2 =
    //     a.readWord<Instruction::chunkType, Instruction::chunkType,
    //                Instruction::endianness>(sizeof(Instruction::chunkType));
    // Instruction::wordType word =
    //     (word1 << sizeof(Instruction::chunkType) * 8) | word2;
    auto word = a.readWord<Instruction::wordType, Instruction::chunkType,
                           Instruction::endianness>(0);
    std::cout << std::hex << word << '\n';
    std::unique_ptr<Instruction> insn(nullptr);
    int bytes_read = 0;
    std::tie(insn, bytes_read) = Instruction::make(word, a);
    std::cout << insn->dump() << '\n';
    try {
      a.incrementPc(sizeof(Instruction::wordType) + bytes_read);
    } catch (std::out_of_range e) {
      std::cout << "Reached EOF\n";
      break;
    }
  }
  return 0;
}

#ifndef DEBUG_H_VOQBRAKI
#define DEBUG_H_VOQBRAKI

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif /* end of include guard: DEBUG_H_VOQBRAKI */

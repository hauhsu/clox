#ifndef CHUNK_H_ZEI2BRSP
#define CHUNK_H_ZEI2BRSP

#include "common.h"

typedef enum {
  OP_RETURN,
} OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif /* end of include guard: CHUNK_H_ZEI2BRSP */

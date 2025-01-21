#ifndef VM_H_7KKUGH2W
#define VM_H_7KKUGH2W

#include "chunk.h"

typedef struct {
  Chunk* chunk;
  uint8_t* ip;
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR,
} InterpretResult;

void initVM();
void freeVM();
InterpretResult interpret(Chunk* chunk);

#endif /* end of include guard: VM_H_7KKUGH2W */

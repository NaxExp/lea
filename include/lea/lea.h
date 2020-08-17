#ifndef LEA_H
#define LEA_H 1

#include <lea/_abi.h>

typedef struct LeaContext LeaContext;

LEA_API LeaContext* leaCreateContext(void);
LEA_API void        leaDestroyContext(LeaContext* ctx);

#endif

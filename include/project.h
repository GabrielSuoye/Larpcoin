#pragma once
#define _GNU_SOURCE
#include <assert.h>
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;
typedef unsigned _BitInt(4192) int4k;

typedef int16 word;

#define $c (char *)
#define $1 (int8 *)
#define $2 (int16)
#define $4 (int32)
#define $8 (int64)
#define $v (void *)
#define $i (int)

#define alloc(x) malloc($i(x))
#define destroy(x) free(x)

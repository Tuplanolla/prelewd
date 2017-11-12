/// Single-token aliases for standard types.

#ifndef PRELEWD_ALIAS_H
#define PRELEWD_ALIAS_H

typedef signed char signed_char;
typedef unsigned char unsigned_char;
typedef short int short_int;
typedef unsigned short int unsigned_short_int;
typedef unsigned int unsigned_int;
typedef long int long_int;
typedef unsigned long int unsigned_long_int;
typedef long long int long_long_int;
typedef unsigned long long int unsigned_long_long_int;

typedef long double long_double;

#ifndef __STDC_NO_COMPLEX__

#include <complex.h>

typedef complex float complex_float;
typedef complex double complex_double;
typedef complex long double complex_long_double;

#endif

#include <time.h>

typedef struct tm struct_tm;
typedef struct timespec struct_timespec;

#include <locale.h>

typedef struct lconv struct_lconv;

#endif

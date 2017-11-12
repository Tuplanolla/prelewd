#include "alias.h"

#define Eq signed_char
#include "std_eq_decl.h"
#undef Eq
#define Eq unsigned_char
#include "std_eq_decl.h"
#undef Eq
#define Eq short_int
#include "std_eq_decl.h"
#undef Eq
#define Eq unsigned_short_int
#include "std_eq_decl.h"
#undef Eq
#define Eq int
#include "std_eq_decl.h"
#undef Eq
#define Eq unsigned_int
#include "std_eq_decl.h"
#undef Eq
#define Eq long_int
#include "std_eq_decl.h"
#undef Eq
#define Eq unsigned_long_int
#include "std_eq_decl.h"
#undef Eq
#define Eq long_long_int
#include "std_eq_decl.h"
#undef Eq
#define Eq unsigned_long_long_int
#include "std_eq_decl.h"
#undef Eq
#define Eq char
#include "std_eq_decl.h"
#undef Eq

#include <wchar.h>

#define Eq wchar_t
#include "std_eq_decl.h"
#undef Eq

#include <wctype.h>

#define Eq wint_t
#include "std_eq_decl.h"
#undef Eq
#define Eq wctype_t
#include "std_eq_decl.h"
#undef Eq
#define Eq wctrans_t
#include "std_eq_decl.h"
#undef Eq

#include <uchar.h>

#define Eq char16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq char32_t
#include "std_eq_decl.h"
#undef Eq

#include <signal.h>

#define Eq sig_atomic_t
#include "std_eq_decl.h"
#undef Eq

#include <stddef.h>

#define Eq ptrdiff_t
#include "std_eq_decl.h"
#undef Eq
#define Eq size_t
#include "std_eq_decl.h"
#undef Eq

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Eq rsize_t
#include "std_eq_decl.h"
#undef Eq

#endif
#endif

#include <stdint.h>

#define Eq intptr_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uintptr_t
#include "std_eq_decl.h"
#undef Eq
#define Eq intmax_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uintmax_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int8_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint8_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_least8_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_least8_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_fast8_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_fast8_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_least16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_least16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_fast16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_fast16_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int32_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint32_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_least32_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_least32_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_fast32_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_fast32_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int64_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint64_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_least64_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_least64_t
#include "std_eq_decl.h"
#undef Eq
#define Eq int_fast64_t
#include "std_eq_decl.h"
#undef Eq
#define Eq uint_fast64_t
#include "std_eq_decl.h"
#undef Eq

#include <errno.h>

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Eq errno_t
#include "std_eq_decl.h"
#undef Eq

#endif
#endif

#define Eq float
#include "std_eq_decl.h"
#undef Eq
#define Eq double
#include "std_eq_decl.h"
#undef Eq
#define Eq long_double
#include "std_eq_decl.h"
#undef Eq

#include <math.h>

#define Eq float_t
#include "std_eq_decl.h"
#undef Eq
#define Eq double_t
#include "std_eq_decl.h"
#undef Eq

#ifndef __STDC_NO_COMPLEX__

#include <complex.h>

#define Eq complex_float
#include "std_eq_decl.h"
#undef Eq
#define Eq complex_double
#include "std_eq_decl.h"
#undef Eq
#define Eq complex_long_double
#include "std_eq_decl.h"
#undef Eq

#endif

#include <fenv.h>

#define Eq fexcept_t
#include "std_eq_decl.h"
#undef Eq

#include <time.h>

#define Eq clock_t
#include "std_eq_decl.h"
#undef Eq
#define Eq time_t
#include "std_eq_decl.h"
#undef Eq

#include <stdbool.h>

#define Eq bool
#include "std_eq_decl.h"
#undef Eq

#ifndef __STDC_NO_ATOMICS__

#include <stdatomic.h>

#define Eq memory_order
#include "std_eq_decl.h"
#undef Eq

#endif

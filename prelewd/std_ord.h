#include "alias.h"

#define Ord signed_char
#include "std_ord_decl.h"
#undef Ord
#define Ord unsigned_char
#include "std_ord_decl.h"
#undef Ord
#define Ord short_int
#include "std_ord_decl.h"
#undef Ord
#define Ord unsigned_short_int
#include "std_ord_decl.h"
#undef Ord
#define Ord int
#include "std_ord_decl.h"
#undef Ord
#define Ord unsigned_int
#include "std_ord_decl.h"
#undef Ord
#define Ord long_int
#include "std_ord_decl.h"
#undef Ord
#define Ord unsigned_long_int
#include "std_ord_decl.h"
#undef Ord
#define Ord long_long_int
#include "std_ord_decl.h"
#undef Ord
#define Ord unsigned_long_long_int
#include "std_ord_decl.h"
#undef Ord
#define Ord char
#include "std_ord_decl.h"
#undef Ord

#include <wchar.h>

#define Ord wchar_t
#include "std_ord_decl.h"
#undef Ord

#include <wctype.h>

#define Ord wint_t
#include "std_ord_decl.h"
#undef Ord
#define Ord wctype_t
#include "std_ord_decl.h"
#undef Ord
#define Ord wctrans_t
#include "std_ord_decl.h"
#undef Ord

#include <uchar.h>

#define Ord char16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord char32_t
#include "std_ord_decl.h"
#undef Ord

#include <signal.h>

#define Ord sig_atomic_t
#include "std_ord_decl.h"
#undef Ord

#include <stddef.h>

#define Ord ptrdiff_t
#include "std_ord_decl.h"
#undef Ord
#define Ord size_t
#include "std_ord_decl.h"
#undef Ord

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Ord rsize_t
#include "std_ord_decl.h"
#undef Ord

#endif
#endif

#include <stdint.h>

#define Ord intptr_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uintptr_t
#include "std_ord_decl.h"
#undef Ord
#define Ord intmax_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uintmax_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int8_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint8_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_least8_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_least8_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_fast8_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_fast8_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_least16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_least16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_fast16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_fast16_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int32_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint32_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_least32_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_least32_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_fast32_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_fast32_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int64_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint64_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_least64_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_least64_t
#include "std_ord_decl.h"
#undef Ord
#define Ord int_fast64_t
#include "std_ord_decl.h"
#undef Ord
#define Ord uint_fast64_t
#include "std_ord_decl.h"
#undef Ord

#include <errno.h>

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Ord errno_t
#include "std_ord_decl.h"
#undef Ord

#endif
#endif

#define Ord float
#include "std_ord_decl.h"
#undef Ord
#define Ord double
#include "std_ord_decl.h"
#undef Ord
#define Ord long_double
#include "std_ord_decl.h"
#undef Ord

#include <math.h>

#define Ord float_t
#include "std_ord_decl.h"
#undef Ord
#define Ord double_t
#include "std_ord_decl.h"
#undef Ord

#include <fenv.h>

#define Ord fexcept_t
#include "std_ord_decl.h"
#undef Ord

#include <time.h>

#define Ord clock_t
#include "std_ord_decl.h"
#undef Ord
#define Ord time_t
#include "std_ord_decl.h"
#undef Ord

#include <stdbool.h>

#define Ord bool
#include "std_ord_decl.h"
#undef Ord

#ifndef __STDC_NO_ATOMICS__

#include <stdatomic.h>

#define Ord memory_order
#include "std_ord_decl.h"
#undef Ord

#endif

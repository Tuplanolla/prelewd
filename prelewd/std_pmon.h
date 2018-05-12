#include "alias.h"

#define Mon signed_char
#include "std_pmon_decl.h"
#undef Mon
#define Mon unsigned_char
#include "std_pmon_decl.h"
#undef Mon
#define Mon short_int
#include "std_pmon_decl.h"
#undef Mon
#define Mon unsigned_short_int
#include "std_pmon_decl.h"
#undef Mon
#define Mon int
#include "std_pmon_decl.h"
#undef Mon
#define Mon unsigned_int
#include "std_pmon_decl.h"
#undef Mon
#define Mon long_int
#include "std_pmon_decl.h"
#undef Mon
#define Mon unsigned_long_int
#include "std_pmon_decl.h"
#undef Mon
#define Mon long_long_int
#include "std_pmon_decl.h"
#undef Mon
#define Mon unsigned_long_long_int
#include "std_pmon_decl.h"
#undef Mon

#include <wctype.h>

#define Mon wint_t
#include "std_pmon_decl.h"
#undef Mon

#include <uchar.h>

#define Mon char16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon char32_t
#include "std_pmon_decl.h"
#undef Mon

#include <signal.h>

#define Mon sig_atomic_t
#include "std_pmon_decl.h"
#undef Mon

#include <stddef.h>

#define Mon ptrdiff_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon size_t
#include "std_pmon_decl.h"
#undef Mon

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Mon rsize_t
#include "std_pmon_decl.h"
#undef Mon

#endif
#endif

#include <stdint.h>

#define Mon intptr_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uintptr_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon intmax_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uintmax_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int8_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint8_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_least8_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_least8_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_fast8_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_fast8_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_least16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_least16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_fast16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_fast16_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int32_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint32_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_least32_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_least32_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_fast32_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_fast32_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int64_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint64_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_least64_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_least64_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon int_fast64_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon uint_fast64_t
#include "std_pmon_decl.h"
#undef Mon

#define Mon float
#include "std_pmon_decl.h"
#undef Mon
#define Mon double
#include "std_pmon_decl.h"
#undef Mon
#define Mon long_double
#include "std_pmon_decl.h"
#undef Mon

#include <math.h>

#define Mon float_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon double_t
#include "std_pmon_decl.h"
#undef Mon

#include <time.h>

#define Mon clock_t
#include "std_pmon_decl.h"
#undef Mon
#define Mon time_t
#include "std_pmon_decl.h"
#undef Mon

#include <stdbool.h>

#define Mon bool
#include "std_pmon_decl.h"
#undef Mon

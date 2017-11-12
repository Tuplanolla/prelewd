#include "alias.h"

#define Type signed_char
#include "lift_poly.h"
#undef Type
#define Type unsigned_char
#include "lift_poly.h"
#undef Type
#define Type short_int
#include "lift_poly.h"
#undef Type
#define Type unsigned_short_int
#include "lift_poly.h"
#undef Type
#define Type int
#include "lift_poly.h"
#undef Type
#define Type unsigned_int
#include "lift_poly.h"
#undef Type
#define Type long_int
#include "lift_poly.h"
#undef Type
#define Type unsigned_long_int
#include "lift_poly.h"
#undef Type
#define Type long_long_int
#include "lift_poly.h"
#undef Type
#define Type unsigned_long_long_int
#include "lift_poly.h"
#undef Type
#define Type char
#include "lift_poly.h"
#undef Type

#include <wchar.h>

#define Type wchar_t
#include "lift_poly.h"
#undef Type
#define Type mbstate_t
#include "lift_poly.h"
#undef Type

#include <wctype.h>

#define Type wint_t
#include "lift_poly.h"
#undef Type
#define Type wctype_t
#include "lift_poly.h"
#undef Type
#define Type wctrans_t
#include "lift_poly.h"
#undef Type

#include <uchar.h>

#define Type char16_t
#include "lift_poly.h"
#undef Type
#define Type char32_t
#include "lift_poly.h"
#undef Type

#include <signal.h>

#define Type sig_atomic_t
#include "lift_poly.h"
#undef Type

#include <stddef.h>

#define Type ptrdiff_t
#include "lift_poly.h"
#undef Type
#define Type size_t
#include "lift_poly.h"
#undef Type
#define Type max_align_t
#include "lift_poly.h"
#undef Type

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Type rsize_t
#include "lift_poly.h"
#undef Type

#endif
#endif

#include <stdint.h>

#define Type intptr_t
#include "lift_poly.h"
#undef Type
#define Type uintptr_t
#include "lift_poly.h"
#undef Type
#define Type intmax_t
#include "lift_poly.h"
#undef Type
#define Type uintmax_t
#include "lift_poly.h"
#undef Type
#define Type int8_t
#include "lift_poly.h"
#undef Type
#define Type uint8_t
#include "lift_poly.h"
#undef Type
#define Type int_least8_t
#include "lift_poly.h"
#undef Type
#define Type uint_least8_t
#include "lift_poly.h"
#undef Type
#define Type int_fast8_t
#include "lift_poly.h"
#undef Type
#define Type uint_fast8_t
#include "lift_poly.h"
#undef Type
#define Type int16_t
#include "lift_poly.h"
#undef Type
#define Type uint16_t
#include "lift_poly.h"
#undef Type
#define Type int_least16_t
#include "lift_poly.h"
#undef Type
#define Type uint_least16_t
#include "lift_poly.h"
#undef Type
#define Type int_fast16_t
#include "lift_poly.h"
#undef Type
#define Type uint_fast16_t
#include "lift_poly.h"
#undef Type
#define Type int32_t
#include "lift_poly.h"
#undef Type
#define Type uint32_t
#include "lift_poly.h"
#undef Type
#define Type int_least32_t
#include "lift_poly.h"
#undef Type
#define Type uint_least32_t
#include "lift_poly.h"
#undef Type
#define Type int_fast32_t
#include "lift_poly.h"
#undef Type
#define Type uint_fast32_t
#include "lift_poly.h"
#undef Type
#define Type int64_t
#include "lift_poly.h"
#undef Type
#define Type uint64_t
#include "lift_poly.h"
#undef Type
#define Type int_least64_t
#include "lift_poly.h"
#undef Type
#define Type uint_least64_t
#include "lift_poly.h"
#undef Type
#define Type int_fast64_t
#include "lift_poly.h"
#undef Type
#define Type uint_fast64_t
#include "lift_poly.h"
#undef Type

#include <errno.h>

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Type errno_t
#include "lift_poly.h"
#undef Type

#endif
#endif

#define Type float
#include "lift_poly.h"
#undef Type
#define Type double
#include "lift_poly.h"
#undef Type
#define Type long_double
#include "lift_poly.h"
#undef Type

#include <math.h>

#define Type float_t
#include "lift_poly.h"
#undef Type
#define Type double_t
#include "lift_poly.h"
#undef Type

#ifndef __STDC_NO_COMPLEX__

#include <complex.h>

#define Type complex_float
#include "lift_poly.h"
#undef Type
#define Type complex_double
#include "lift_poly.h"
#undef Type
#define Type complex_long_double
#include "lift_poly.h"
#undef Type

#endif

#include <fenv.h>

#define Type fenv_t
#include "lift_poly.h"
#undef Type
#define Type fexcept_t
#include "lift_poly.h"
#undef Type

#include <time.h>

#define Type clock_t
#include "lift_poly.h"
#undef Type
#define Type time_t
#include "lift_poly.h"
#undef Type
#define Type struct_tm
#include "lift_poly.h"
#undef Type
#define Type struct_timespec
#include "lift_poly.h"
#undef Type

#include <locale.h>

#define Type struct_lconv
#include "lift_poly.h"
#undef Type

#include <stdlib.h>

#define Type div_t
#include "lift_poly.h"
#undef Type
#define Type ldiv_t
#include "lift_poly.h"
#undef Type
#define Type lldiv_t
#include "lift_poly.h"
#undef Type

#include <inttypes.h>

#define Type imaxdiv_t
#include "lift_poly.h"
#undef Type

#include <stdbool.h>

#define Type bool
#include "lift_poly.h"
#undef Type

#include <stdio.h>

#define Type FILE
#include "lift_poly.h"
#undef Type
#define Type fpos_t
#include "lift_poly.h"
#undef Type

#include <stdarg.h>

#define Type va_list
#include "lift_poly.h"
#undef Type

#include <setjmp.h>

#define Type jmp_buf
#include "lift_poly.h"
#undef Type

#ifndef __STDC_NO_THREADS__

#include <threads.h>

#define Type cnd_t
#include "lift_poly.h"
#undef Type
#define Type thrd_t
#include "lift_poly.h"
#undef Type
#define Type tss_t
#include "lift_poly.h"
#undef Type
#define Type mtx_t
#include "lift_poly.h"
#undef Type
#define Type tss_dtor_t
#include "lift_poly.h"
#undef Type
#define Type thrd_start_t
#include "lift_poly.h"
#undef Type
#define Type once_flag
#include "lift_poly.h"
#undef Type

#endif

#ifndef __STDC_NO_ATOMICS__

#include <stdatomic.h>

#define Type memory_order
#include "lift_poly.h"
#undef Type
#define Type atomic_flag
#include "lift_poly.h"
#undef Type

#endif

#include "alias.h"

#define Any signed_char
#include "std_any_decl.h"
#undef Any
#define Any unsigned_char
#include "std_any_decl.h"
#undef Any
#define Any short_int
#include "std_any_decl.h"
#undef Any
#define Any unsigned_short_int
#include "std_any_decl.h"
#undef Any
#define Any int
#include "std_any_decl.h"
#undef Any
#define Any unsigned_int
#include "std_any_decl.h"
#undef Any
#define Any long_int
#include "std_any_decl.h"
#undef Any
#define Any unsigned_long_int
#include "std_any_decl.h"
#undef Any
#define Any long_long_int
#include "std_any_decl.h"
#undef Any
#define Any unsigned_long_long_int
#include "std_any_decl.h"
#undef Any
#define Any char
#include "std_any_decl.h"
#undef Any

#include <wchar.h>

#define Any wchar_t
#include "std_any_decl.h"
#undef Any
#define Any mbstate_t
#include "std_any_decl.h"
#undef Any

#include <wctype.h>

#define Any wint_t
#include "std_any_decl.h"
#undef Any
#define Any wctype_t
#include "std_any_decl.h"
#undef Any
#define Any wctrans_t
#include "std_any_decl.h"
#undef Any

#include <uchar.h>

#define Any char16_t
#include "std_any_decl.h"
#undef Any
#define Any char32_t
#include "std_any_decl.h"
#undef Any

#include <signal.h>

#define Any sig_atomic_t
#include "std_any_decl.h"
#undef Any

#include <stddef.h>

#define Any ptrdiff_t
#include "std_any_decl.h"
#undef Any
#define Any size_t
#include "std_any_decl.h"
#undef Any
#define Any max_align_t
#include "std_any_decl.h"
#undef Any

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Any rsize_t
#include "std_any_decl.h"
#undef Any

#endif
#endif

#include <stdint.h>

#define Any intptr_t
#include "std_any_decl.h"
#undef Any
#define Any uintptr_t
#include "std_any_decl.h"
#undef Any
#define Any intmax_t
#include "std_any_decl.h"
#undef Any
#define Any uintmax_t
#include "std_any_decl.h"
#undef Any
#define Any int8_t
#include "std_any_decl.h"
#undef Any
#define Any uint8_t
#include "std_any_decl.h"
#undef Any
#define Any int_least8_t
#include "std_any_decl.h"
#undef Any
#define Any uint_least8_t
#include "std_any_decl.h"
#undef Any
#define Any int_fast8_t
#include "std_any_decl.h"
#undef Any
#define Any uint_fast8_t
#include "std_any_decl.h"
#undef Any
#define Any int16_t
#include "std_any_decl.h"
#undef Any
#define Any uint16_t
#include "std_any_decl.h"
#undef Any
#define Any int_least16_t
#include "std_any_decl.h"
#undef Any
#define Any uint_least16_t
#include "std_any_decl.h"
#undef Any
#define Any int_fast16_t
#include "std_any_decl.h"
#undef Any
#define Any uint_fast16_t
#include "std_any_decl.h"
#undef Any
#define Any int32_t
#include "std_any_decl.h"
#undef Any
#define Any uint32_t
#include "std_any_decl.h"
#undef Any
#define Any int_least32_t
#include "std_any_decl.h"
#undef Any
#define Any uint_least32_t
#include "std_any_decl.h"
#undef Any
#define Any int_fast32_t
#include "std_any_decl.h"
#undef Any
#define Any uint_fast32_t
#include "std_any_decl.h"
#undef Any
#define Any int64_t
#include "std_any_decl.h"
#undef Any
#define Any uint64_t
#include "std_any_decl.h"
#undef Any
#define Any int_least64_t
#include "std_any_decl.h"
#undef Any
#define Any uint_least64_t
#include "std_any_decl.h"
#undef Any
#define Any int_fast64_t
#include "std_any_decl.h"
#undef Any
#define Any uint_fast64_t
#include "std_any_decl.h"
#undef Any

#include <errno.h>

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Any errno_t
#include "std_any_decl.h"
#undef Any

#endif
#endif

#define Any float
#include "std_any_decl.h"
#undef Any
#define Any double
#include "std_any_decl.h"
#undef Any
#define Any long_double
#include "std_any_decl.h"
#undef Any

#include <math.h>

#define Any float_t
#include "std_any_decl.h"
#undef Any
#define Any double_t
#include "std_any_decl.h"
#undef Any

#ifndef __STDC_NO_COMPLEX__

#include <complex.h>

#define Any complex_float
#include "std_any_decl.h"
#undef Any
#define Any complex_double
#include "std_any_decl.h"
#undef Any
#define Any complex_long_double
#include "std_any_decl.h"
#undef Any

#endif

#include <fenv.h>

#define Any fenv_t
#include "std_any_decl.h"
#undef Any
#define Any fexcept_t
#include "std_any_decl.h"
#undef Any

#include <time.h>

#define Any clock_t
#include "std_any_decl.h"
#undef Any
#define Any time_t
#include "std_any_decl.h"
#undef Any
#define Any struct_tm
#include "std_any_decl.h"
#undef Any
#define Any struct_timespec
#include "std_any_decl.h"
#undef Any

#include <locale.h>

#define Any struct_lconv
#include "std_any_decl.h"
#undef Any

#include <stdlib.h>

#define Any div_t
#include "std_any_decl.h"
#undef Any
#define Any ldiv_t
#include "std_any_decl.h"
#undef Any
#define Any lldiv_t
#include "std_any_decl.h"
#undef Any

#include <inttypes.h>

#define Any imaxdiv_t
#include "std_any_decl.h"
#undef Any

#include <stdbool.h>

#define Any bool
#include "std_any_decl.h"
#undef Any

#include <stdio.h>

#define Any fpos_t
#include "std_any_decl.h"
#undef Any

#ifndef __STDC_NO_THREADS__

#include <threads.h>

#define Any tss_dtor_t
#include "std_any_decl.h"
#undef Any
#define Any thrd_start_t
#include "std_any_decl.h"
#undef Any

#endif

#ifndef __STDC_NO_ATOMICS__

#include <stdatomic.h>

#define Any memory_order
#include "std_any_decl.h"
#undef Any

#endif

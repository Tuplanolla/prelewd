#include "alias.h"

#define Any signed_char
#include "x_any_decl.h"
#undef Any
#define Any unsigned_char
#include "x_any_decl.h"
#undef Any
#define Any short_int
#include "x_any_decl.h"
#undef Any
#define Any unsigned_short_int
#include "x_any_decl.h"
#undef Any
#define Any int
#include "x_any_decl.h"
#undef Any
#define Any unsigned_int
#include "x_any_decl.h"
#undef Any
#define Any long_int
#include "x_any_decl.h"
#undef Any
#define Any unsigned_long_int
#include "x_any_decl.h"
#undef Any
#define Any long_long_int
#include "x_any_decl.h"
#undef Any
#define Any unsigned_long_long_int
#include "x_any_decl.h"
#undef Any
#define Any char
#include "x_any_decl.h"
#undef Any

#include <wchar.h>

#define Any wchar_t
#include "x_any_decl.h"
#undef Any
#define Any mbstate_t
#include "x_any_decl.h"
#undef Any

#include <wctype.h>

#define Any wint_t
#include "x_any_decl.h"
#undef Any
#define Any wctype_t
#include "x_any_decl.h"
#undef Any
#define Any wctrans_t
#include "x_any_decl.h"
#undef Any

#include <uchar.h>

#define Any char16_t
#include "x_any_decl.h"
#undef Any
#define Any char32_t
#include "x_any_decl.h"
#undef Any

#include <signal.h>

#define Any sig_atomic_t
#include "x_any_decl.h"
#undef Any

#include <stddef.h>

#define Any ptrdiff_t
#include "x_any_decl.h"
#undef Any
#define Any size_t
#include "x_any_decl.h"
#undef Any
#define Any max_align_t
#include "x_any_decl.h"
#undef Any

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#define Any rsize_t
#include "x_any_decl.h"
#undef Any

#endif
#endif

#include <stdint.h>

#define Any intptr_t
#include "x_any_decl.h"
#undef Any
#define Any uintptr_t
#include "x_any_decl.h"
#undef Any
#define Any intmax_t
#include "x_any_decl.h"
#undef Any
#define Any uintmax_t
#include "x_any_decl.h"
#undef Any
#define Any int8_t
#include "x_any_decl.h"
#undef Any
#define Any uint8_t
#include "x_any_decl.h"
#undef Any
#define Any int_least8_t
#include "x_any_decl.h"
#undef Any
#define Any uint_least8_t
#include "x_any_decl.h"
#undef Any
#define Any int_fast8_t
#include "x_any_decl.h"
#undef Any
#define Any uint_fast8_t
#include "x_any_decl.h"
#undef Any
#define Any int16_t
#include "x_any_decl.h"
#undef Any
#define Any uint16_t
#include "x_any_decl.h"
#undef Any
#define Any int_least16_t
#include "x_any_decl.h"
#undef Any
#define Any uint_least16_t
#include "x_any_decl.h"
#undef Any
#define Any int_fast16_t
#include "x_any_decl.h"
#undef Any
#define Any uint_fast16_t
#include "x_any_decl.h"
#undef Any
#define Any int32_t
#include "x_any_decl.h"
#undef Any
#define Any uint32_t
#include "x_any_decl.h"
#undef Any
#define Any int_least32_t
#include "x_any_decl.h"
#undef Any
#define Any uint_least32_t
#include "x_any_decl.h"
#undef Any
#define Any int_fast32_t
#include "x_any_decl.h"
#undef Any
#define Any uint_fast32_t
#include "x_any_decl.h"
#undef Any
#define Any int64_t
#include "x_any_decl.h"
#undef Any
#define Any uint64_t
#include "x_any_decl.h"
#undef Any
#define Any int_least64_t
#include "x_any_decl.h"
#undef Any
#define Any uint_least64_t
#include "x_any_decl.h"
#undef Any
#define Any int_fast64_t
#include "x_any_decl.h"
#undef Any
#define Any uint_fast64_t
#include "x_any_decl.h"
#undef Any

#ifdef __STDC_LIB_EXT1__
#ifdef __STDC_WANT_LIB_EXT1__

#include <errno.h>

#define Any errno_t
#include "x_any_decl.h"
#undef Any

#endif
#endif

#define Any float
#include "x_any_decl.h"
#undef Any
#define Any double
#include "x_any_decl.h"
#undef Any
#define Any long_double
#include "x_any_decl.h"
#undef Any

#include <math.h>

#define Any float_t
#include "x_any_decl.h"
#undef Any
#define Any double_t
#include "x_any_decl.h"
#undef Any

#ifndef __STDC_NO_COMPLEX__

#include <complex.h>

#define Any complex_float
#include "x_any_decl.h"
#undef Any
#define Any complex_double
#include "x_any_decl.h"
#undef Any
#define Any complex_long_double
#include "x_any_decl.h"
#undef Any

#endif

#include <fenv.h>

#define Any fenv_t
#include "x_any_decl.h"
#undef Any
#define Any fexcept_t
#include "x_any_decl.h"
#undef Any

#include <time.h>

#define Any clock_t
#include "x_any_decl.h"
#undef Any
#define Any time_t
#include "x_any_decl.h"
#undef Any
#define Any struct_tm
#include "x_any_decl.h"
#undef Any
#define Any struct_timespec
#include "x_any_decl.h"
#undef Any

#include <locale.h>

#define Any struct_lconv
#include "x_any_decl.h"
#undef Any

#include <stdlib.h>

#define Any div_t
#include "x_any_decl.h"
#undef Any
#define Any ldiv_t
#include "x_any_decl.h"
#undef Any
#define Any lldiv_t
#include "x_any_decl.h"
#undef Any

#include <inttypes.h>

#define Any imaxdiv_t
#include "x_any_decl.h"
#undef Any

#include <stdbool.h>

#define Any bool
#include "x_any_decl.h"
#undef Any

#include <stdio.h>

#define Any FILE
#include "x_any_decl.h"
#undef Any
#define Any fpos_t
#include "x_any_decl.h"
#undef Any

#include <stdarg.h>

#define Any va_list
#include "x_any_decl.h"
#undef Any

#include <setjmp.h>

#define Any jmp_buf
#include "x_any_decl.h"
#undef Any

#ifndef __STDC_NO_THREADS__

#include <threads.h>

#define Any cnd_t
#include "x_any_decl.h"
#undef Any
#define Any thrd_t
#include "x_any_decl.h"
#undef Any
#define Any tss_t
#include "x_any_decl.h"
#undef Any
#define Any mtx_t
#include "x_any_decl.h"
#undef Any
#define Any tss_dtor_t
#include "x_any_decl.h"
#undef Any
#define Any thrd_start_t
#include "x_any_decl.h"
#undef Any
#define Any once_flag
#include "x_any_decl.h"
#undef Any

#endif

#ifndef __STDC_NO_ATOMICS__

#include <stdatomic.h>

#define Any memory_order
#include "x_any_decl.h"
#undef Any
#define Any atomic_flag
#include "x_any_decl.h"
#undef Any

#endif

# C

## Conditional Features

| Standard | Feature         | Macro
|:---------|:----------------|:-------------------------
| C11      |                 | `__STDC_NO_VLA__`
| C11      | `rsize_t`       | `__STDC_LIB_EXT1__`
| C11      | `errno_t`       | `__STDC_LIB_EXT1__`
| C11      | `complex.h`     | `__STDC_NO_COMPLEX__`
| C11      | `threads.h`     | `__STDC_NO_THREADS__`
| C11      | `stdatomic.h`   | `__STDC_NO_ATOMICS__`

## Function Specifiers

| Standard | Header          | Specifier
|:---------|:----------------|:---------------
| C99      |                 | `inline`
| C11      | `stdnoreturn.h` | `noreturn`

## Storage Class Specifiers

| Standard | Header          | Specifier
|:---------|:----------------|:---------------
| C89      |                 | `static`
| C89      |                 | `typedef`
| C89      |                 | `extern`
| C89      |                 | `register`
| C89      |                 | `auto`
| C11      | `threads.h`     | `thread_local`

## Type Qualifiers

| Standard | Header          | Qualifier
|:---------|:----------------|:---------------
| C89      |                 | `const`
| C89      |                 | `volatile`
| C99      |                 | `restrict`
| C11      | `stdatomic.h`   | `atomic`

## Basic Types

| Standard | Header          | Type                     | Signed Type              | Unsigned Type
|:---------|:----------------|:-------------------------|:-------------------------|:-------------------------
| C89      |                 |                          | `signed char`            | `unsigned char`
| C89      |                 |                          | `short int`              | `unsigned short int`
| C89      |                 |                          | `int`                    | `unsigned int`
| C89      |                 |                          | `long int`               | `unsigned long int`
| C99      |                 |                          | `long long int`          | `unsigned long long int`
| C89      |                 |                          | `char`                   | `char`
| C95      | `wchar.h`       |                          | `wchar_t`                | `wchar_t`
| C95      | `wchar.h`       | `mbstate_t`              |                          |
| C95      | `wctype.h`      |                          | `wint_t`                 | `wint_t`
| C95      | `wctype.h`      | `wctype_t`               |                          |
| C95      | `wctype.h`      | `wctrans_t`              |                          |
| C11      | `uchar.h`       |                          |                          | `char16_t`
| C11      | `uchar.h`       |                          |                          | `char32_t`
| C89      | `signal.h`      |                          | `sig_atomic_t`           | `sig_atomic_t`
| C89      | `stddef.h`      |                          | `ptrdiff_t`              |
| C89      | `stddef.h`      |                          |                          | `size_t`
| C11      | `stddef.h`      | `max_align_t`            |                          |
| C11      | `stddef.h`      |                          |                          | `rsize_t`
| C99      | `stdint.h`      |                          | `intptr_t`               | `uintptr_t`
| C99      | `stdint.h`      |                          | `intmax_t`               | `uintmax_t`
| C99      | `stdint.h`      |                          | `int8_t`                 | `uint8_t`
| C99      | `stdint.h`      |                          | `int_least8_t`           | `uint_least8_t`
| C99      | `stdint.h`      |                          | `int_fast8_t`            | `uint_fast8_t`
| C99      | `stdint.h`      |                          | `int16_t`                | `uint16_t`
| C99      | `stdint.h`      |                          | `int_least16_t`          | `uint_least16_t`
| C99      | `stdint.h`      |                          | `int_fast16_t`           | `uint_fast16_t`
| C99      | `stdint.h`      |                          | `int32_t`                | `uint32_t`
| C99      | `stdint.h`      |                          | `int_least32_t`          | `uint_least32_t`
| C99      | `stdint.h`      |                          | `int_fast32_t`           | `uint_fast32_t`
| C99      | `stdint.h`      |                          | `int64_t`                | `uint64_t`
| C99      | `stdint.h`      |                          | `int_least64_t`          | `uint_least64_t`
| C99      | `stdint.h`      |                          | `int_fast64_t`           | `uint_fast64_t`
| C11      | `errno.h`       |                          | `errno_t`                |
| C89      |                 |                          | `float`                  |
| C89      |                 |                          | `double`                 |
| C99      |                 |                          | `long double`            |
| C99      | `math.h`        |                          | `float_t`                |
| C99      | `math.h`        |                          | `double_t`               |
| C99      | `complex.h`     |                          | `complex float`          |
| C99      | `complex.h`     |                          | `complex double`         |
| C99      | `complex.h`     |                          | `complex long double`    |
| C99      | `fenv.h`        | `fenv_t`                 |                          |
| C99      | `fenv.h`        | `fexcept_t`              |                          |
| C89      | `time.h`        | `clock_t`                |                          |
| C89      | `time.h`        | `time_t`                 |                          |
| C89      | `time.h`        | `struct tm`              |                          |
| C11      | `time.h`        | `struct timespec`        |                          |
| C89      | `locale.h`      | `struct lconv`           |                          |
| C89      | `stdlib.h`      | `div_t`                  |                          |
| C89      | `stdlib.h`      | `ldiv_t`                 |                          |
| C99      | `stdlib.h`      | `lldiv_t`                |                          |
| C99      | `inttypes.h`    | `imaxdiv_t`              |                          |
| C99      | `stdbool.h`     | `bool`                   |                          |
| C89      | `stdio.h`       | `FILE`                   |                          |
| C89      | `stdio.h`       | `fpos_t`                 |                          |
| C89      | `stdarg.h`      | `va_list`                |                          |
| C89      | `setjmp.h`      | `jmp_buf`                |                          |
| C11      | `threads.h`     | `cnd_t`                  |                          |
| C11      | `threads.h`     | `thrd_t`                 |                          |
| C11      | `threads.h`     | `tss_t`                  |                          |
| C11      | `threads.h`     | `mtx_t`                  |                          |
| C11      | `threads.h`     | `tss_dtor_t`             |                          |
| C11      | `threads.h`     | `thrd_start_t`           |                          |
| C11      | `threads.h`     | `once_flag`              |                          |
| C11      | `stdatomic.h`   | `memory_order`           |                          |
| C11      | `stdatomic.h`   | `atomic_flag`            |                          |

## Numerical Limits

### Signed Types

| Standard | Header          | Type                     | Minimum Value      | Maximum Value
|:---------|:----------------|:-------------------------|:-------------------|:-------------------
| C89      | `limits.h`      | `signed char`            | `SCHAR_MIN`        | `SCHAR_MAX`
| C89      | `limits.h`      | `short int`              | `SHRT_MIN`         | `SHRT_MAX`
| C89      | `limits.h`      | `int`                    | `INT_MIN`          | `INT_MAX`
| C89      | `limits.h`      | `long int`               | `LONG_MIN`         | `LONG_MAX`
| C99      | `limits.h`      | `long long int`          | `LLONG_MIN`        | `LLONG_MAX`
| C89      | `limits.h`      | `char`                   | `CHAR_MIN`         | `CHAR_MAX`
| C95      | `wchar.h`       | `wchar_t`                | `WCHAR_MIN`        | `WCHAR_MAX`
| C99      | `stdint.h`      | `wint_t`                 | `WINT_MIN`         | `WINT_MAX`
| C99      | `stdint.h`      | `sig_atomic_t`           | `SIG_ATOMIC_MIN`   | `SIG_ATOMIC_MAX`
| C99      | `stdint.h`      | `ptrdiff_t`              | `PTRDIFF_MIN`      | `PTRDIFF_MAX`
| C99      | `stdint.h`      | `intptr_t`               | `INTPTR_MIN`       | `INTPTR_MAX`
| C99      | `stdint.h`      | `intmax_t`               | `INTMAX_MIN`       | `INTMAX_MAX`
| C99      | `stdint.h`      | `int8_t`                 | `INT8_MIN`         | `INT8_MAX`
| C99      | `stdint.h`      | `int_least8_t`           | `INT_LEAST8_MIN`   | `INT_LEAST8_MAX`
| C99      | `stdint.h`      | `int_fast8_t`            | `INT_FAST8_MIN`    | `INT_FAST8_MAX`
| C99      | `stdint.h`      | `int16_t`                | `INT16_MIN`        | `INT16_MAX`
| C99      | `stdint.h`      | `int_least16_t`          | `INT_LEAST16_MIN`  | `INT_LEAST16_MAX`
| C99      | `stdint.h`      | `int_fast16_t`           | `INT_FAST16_MIN`   | `INT_FAST16_MAX`
| C99      | `stdint.h`      | `int32_t`                | `INT32_MIN`        | `INT32_MAX`
| C99      | `stdint.h`      | `int_least32_t`          | `INT_LEAST32_MIN`  | `INT_LEAST32_MAX`
| C99      | `stdint.h`      | `int_fast32_t`           | `INT_FAST32_MIN`   | `INT_FAST32_MAX`
| C99      | `stdint.h`      | `int64_t`                | `INT64_MIN`        | `INT64_MAX`
| C99      | `stdint.h`      | `int_least64_t`          | `INT_LEAST64_MIN`  | `INT_LEAST64_MAX`
| C99      | `stdint.h`      | `int_fast64_t`           | `INT_FAST64_MIN`   | `INT_FAST64_MAX`
| C11      | `errno.h`       | `errno_t`                | `INT_MIN`          | `INT_MAX`
| C99      | `float.h`       | `float`                  | `-FLT_MAX`         | `FLT_MAX`
| C99      | `float.h`       | `double`                 | `-DBL_MAX`         | `DBL_MAX`
| C99      | `float.h`       | `long double`            | `-LDBL_MAX`        | `LDBL_MAX`

### Unsigned Types

| Standard | Header          | Type                     | Minimum Value      | Maximum Value
|:---------|:----------------|:-------------------------|:-------------------|:-------------------
| C89      | `limits.h`      | `unsigned char`          | `0`                | `UCHAR_MAX`
| C89      | `limits.h`      | `unsigned short int`     | `0`                | `USHRT_MAX`
| C89      | `limits.h`      | `unsigned int`           | `0`                | `UINT_MAX`
| C89      | `limits.h`      | `unsigned long int`      | `0`                | `ULONG_MAX`
| C99      | `limits.h`      | `unsigned long long int` | `0`                | `ULLONG_MAX`
| C89      | `limits.h`      | `char`                   | `0`                | `CHAR_MAX`
| C11      | `stdint.h`      | `char16_t`               | `0`                | `UINT_LEAST16_MAX`
| C11      | `stdint.h`      | `char32_t`               | `0`                | `UINT_LEAST32_MAX`
| C99      | `stdint.h`      | `sig_atomic_t`           | `0`                | `SIG_ATOMIC_MAX`
| C99      | `stdint.h`      | `size_t`                 | `0`                | `SIZE_MAX`
| C11      | `stdint.h`      | `rsize_t`                | `0`                | `RSIZE_MAX`
| C99      | `stdint.h`      | `uintptr_t`              | `0`                | `UINTPTR_MAX`
| C99      | `stdint.h`      | `uintmax_t`              | `0`                | `UINTMAX_MAX`
| C99      | `stdint.h`      | `uint8_t`                | `0`                | `UINT8_MAX`
| C99      | `stdint.h`      | `uint_least8_t`          | `0`                | `UINT_LEAST8_MAX`
| C99      | `stdint.h`      | `uint_fast8_t`           | `0`                | `UINT_FAST8_MAX`
| C99      | `stdint.h`      | `uint16_t`               | `0`                | `UINT16_MAX`
| C99      | `stdint.h`      | `uint_least16_t`         | `0`                | `UINT_LEAST16_MAX`
| C99      | `stdint.h`      | `uint_fast16_t`          | `0`                | `UINT_FAST16_MAX`
| C99      | `stdint.h`      | `uint32_t`               | `0`                | `UINT32_MAX`
| C99      | `stdint.h`      | `uint_least32_t`         | `0`                | `UINT_LEAST32_MAX`
| C99      | `stdint.h`      | `uint_fast32_t`          | `0`                | `UINT_FAST32_MAX`
| C99      | `stdint.h`      | `uint64_t`               | `0`                | `UINT64_MAX`
| C99      | `stdint.h`      | `uint_least64_t`         | `0`                | `UINT_LEAST64_MAX`
| C99      | `stdint.h`      | `uint_fast64_t`          | `0`                | `UINT_FAST64_MAX`

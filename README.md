# Prelewd for C11

## Naming Conventions

All names consist of tokens that are eight or fewer characters long.
Procedures are prefixed with the `namespace##_` token.
Higher-order procedures that take closures
are suffixed with the `##_cls` token.
Procedures that need to emphasize mutation
are suffixed with the `##_mut` token.
In-parameters do not have prefixes or suffixes.
Out-parameters that are written only use the prefix `o##`.
Out-parameters that are read and written use the prefix `io##`.

## More Naming

The term "subscript" is defined in section 6.5.2.1 of N1570
to mean accessing a member of an array.
The term "call" is defined in section 6.5.2.2 of N1570
to mean passing arguments to a procedure.
The term "indirect" is defined in section 6.5.3.2 of N1570
to mean accessing a reference.
The term "invoke" is defined in section 6.10.3 of N1570
to mean providing a macro with arguments.
The term "concatenate" is defined in section 6.10.3.3 of N1570
to mean combining two tokens into one.

To avoid conflicts, we use the following terms.
The term "index" is defined
to mean accessing a definition.
The term "get" is defined
to mean accessing a member of a list.
The term "apply" is defined
to mean passing arguments to a macro.
The term "eval" is defined
to mean indexing followed by application.

#### Number Systems

These may be implemented for various number types.
Note that in curried languages "more constant" parameters come first,
so for example `x / y == div y x`; here the opposite is the case.

    /// The call `from(x)`
    /// returns the value of `x`.
    /// This is analogous to the unary operator `(type)`.

    /// The call `to(x)`
    /// returns the value of `x`.
    /// This is analogous to the unary operator `(type)`.

    /// The call `zero()`
    /// returns zero.
    /// This is analogous to the constant `0`.

    /// The call `add(x, y)`
    /// returns the sum of `x` and `y`.
    /// This is analogous to the binary operator `+`.

    /// The call `neg(x)`
    /// returns the negation of `x`.
    /// This is analogous to the unary operator `-`.

    /// The call `sub(x, y)`
    /// returns the difference of `x` and `y`.
    /// This is analogous to the binary operator `-`.

    /// The call `succ(x)`
    /// returns the successor of `x`.

    /// The call `pred(x)`
    /// returns the predecessor of `x`.

    /// The call `one()`
    /// returns one.
    /// This is analogous to the constant `1`.

    /// The call `mul(x, y)`
    /// returns the product of `x` and `y`.
    /// This is analogous to the binary operator `*`.

    /// The call `recip(x)`
    /// returns the reciprocal of `x`.

    /// The call `div(x, y)`
    /// returns the division of `x` and `y`.
    /// This is analogous to the binary operator `/`.

    /// The call `quott(x, y)`
    /// returns the truncated quotient of `x` and `y`.
    /// This is analogous to the binary operator `/`.

    /// The call `remt(x, y)`
    /// returns the truncated remainder of `x` and `y`.
    /// This is analogous to the binary operator `%`.

    /// The call `quote(x, y)`
    /// returns the Euclidean quotient of `x` and `y`.

    /// The call `reme(x, y)`
    /// returns the Euclidean remainder of `x` and `y`.

    /// The call `pow(x, y)`
    /// returns the value of `x` raised to the power of `y`.

More exotic things are polymorphic over two types.

    /// The call `dist(x, y)`
    /// returns the distance between `x` and `y`.

    /// The call `smul(x, a)`
    /// returns the scalar product of `x` and `a`.

    /// The call `norm(x)`
    /// returns the norm of `x`.

    /// The call `conj(x)`
    /// returns the conjugate of `x`.

    /// The call `imul(x, y)`
    /// returns the inner product of `x` and `y`.

Allocated versions follow.

    /// The call `from(oy, x)`
    /// stores into `oy` the value of `x`.
    /// This is analogous to the unary operator `(type)`.

    /// The call `to(oy, x)`
    /// stores into `oy` the value of `x`.
    /// This is analogous to the unary operator `(type)`.

    /// The call `zero(ox)`
    /// stores into `ox` zero.
    /// This is analogous to the constant `0`.

    /// The call `add(oz, x, y)`
    /// stores into `oz` the sum of `x` and `y`.
    /// This is analogous to the binary operator `+`.

    /// The call `neg(oy, x)`
    /// stores into `oy` the negation of `x`.
    /// This is analogous to the unary operator `-`.

    /// The call `sub(oz, x, y)`
    /// stores into `oz` the difference of `x` and `y`.
    /// This is analogous to the binary operator `-`.

    /// The call `succ(oy, x)`
    /// stores into `oy` the successor of `x`.

    /// The call `pred(oy, x)`
    /// stores into `oy` the predecessor of `x`.

    /// The call `one(ox)`
    /// stores into `ox` one.
    /// This is analogous to the constant `1`.

    /// The call `mul(oz, x, y)`
    /// stores into `oz` the product of `x` and `y`.
    /// This is analogous to the binary operator `*`.

    /// The call `recip(oy, x)`
    /// stores into `oy` the reciprocal of `x`.

    /// The call `div(oz, x, y)`
    /// stores into `oz` the division of `x` and `y`.
    /// This is analogous to the binary operator `/`.

    /// The call `quott(oz, x, y)`
    /// stores into `oz` the truncated quotient of `x` and `y`.
    /// This is analogous to the binary operator `/`.

    /// The call `remt(oz, x, y)`
    /// stores into `oz` the truncated remainder of `x` and `y`.
    /// This is analogous to the binary operator `%`.

    /// The call `quote(oz, x, y)`
    /// stores into `oz` the Euclidean quotient of `x` and `y`.

    /// The call `reme(oz, x, y)`
    /// stores into `oz` the Euclidean remainder of `x` and `y`.

Polymorphism mixes up the following.

    /// The call `dist(oa, x, y)`
    /// stores into `oa` the distance between `x` and `y`.

    /// The call `smul(oy, x, a)`
    /// stores into `oy` the scalar product of `x` and `a`.

    /// The call `norm(oa, x)`
    /// stores into `oa` the norm of `x`.

    /// The call `conj(oy, x)`
    /// stores into `oy` the conjugate of `x`.

    /// The call `imul(oa, x, y)`
    /// stores into `oa` the inner product of `x` and `y`.

Mutating versions follow.

    /// The call `add_mut(iox, y)`
    /// stores into `iox` the sum of `iox` and `y`.
    /// This is analogous to the binary operator `+=`.

    /// The call `neg_mut(iox)`
    /// stores into `iox` the negation of `iox`.

    /// The call `sub_mut(iox, y)`
    /// stores into `iox` the difference of `iox` and `y`.
    /// This is analogous to the binary operator `-=`.

    /// The call `succ_mut(iox)`
    /// stores into `iox` the successor of `iox`.
    /// This is analogous to the unary operator `++`.

    /// The call `pred_mut(iox)`
    /// stores into `iox` the predecessor of `iox`.
    /// This is analogous to the unary operator `--`.

    /// The call `mul_mut(iox, y)`
    /// stores into `iox` the product of `iox` and `y`.
    /// This is analogous to the binary operator `*=`.

    /// The call `recip_mut(iox)`
    /// stores into `iox` the reciprocal of `iox`.

    /// The call `div_mut(iox, y)`
    /// stores into `iox` the division of `iox` and `y`.
    /// This is analogous to the binary operator `/`.

    /// The call `quott_mut(iox, y)`
    /// stores into `iox` the truncated quotient of `iox` and `y`.
    /// This is analogous to the binary operator `/=`.

    /// The call `remt_mut(iox, y)`
    /// stores into `iox` the truncated remainder of `iox` and `y`.
    /// This is analogous to the binary operator `%=`.

    /// The call `quote_mut(iox, y)`
    /// stores into `iox` the Euclidean quotient of `iox` and `y`.

    /// The call `reme_mut(iox, y)`
    /// stores into `iox` the Euclidean remainder of `iox` and `y`.

The other cases are, again, tricky.

    /// The call `smul_mut(iox, a)`
    /// stores into `iox` the scalar product of `iox` and `a`.

    /// The call `conj_mut(iox)`
    /// stores into `iox` the conjugate of `iox`.

# Notes

The following [has been said][kopperman-1998].

> 1. *Definition.* A *value semigroup* is an additive abelian semigroup $A$
> with identity $0$ and absorbing element $\infty \ne 0$, satisfying:
> (vl) if $a + x = b$ and $b + y = a$ then $a = b$,
> (thus $a < b$ iff $b = a + x$ for some $x$, defines a partial order),
> (v2) for each $a$ there is a unique $b$ (called $(1/2) a$ or $a/2$)
> such that $b + b = a$,
> (v3) for each $a$, $b$ there is an inf, $a \wedge b$,
> (v4) $a \wedge b + c = (a + c) \wedge (b + c)$.

[kopperman-1998]: https://www.jstor.org/stable/2323060

## Would Like to Do This

    __attribute__ ((__nonnull__))
    inline A $(add, A)(A const x, A const y) {
      // ??
    }

    __attribute__ ((__nonnull__))
    inline void $(add_mut, A)(A *const iox,
        A const y) {
      *iox = add(*iox, y);
    }

    __attribute__ ((__nonnull__))
    inline void $(add_in, A)(A *const oz,
        A const *const x, A const *const y) {
      // ??
    }

    __attribute__ ((__nonnull__))
    inline void $(add_in_mut, A)(A *const iox,
        A const *const y) {
      add(iox, iox, y);
    }

    __attribute__ ((__nonnull__))
    inline void $(add_in_rest, A)(A *const oz,
        A const *restrict const x, A const *restrict const y) {
      // ??
    }

    __attribute__ ((__nonnull__))
    inline void $(add_in_rest_mut, A)(A *const iox,
        A const *restrict const y) {
      add(iox, iox, y);
    }

    __attribute__ ((__nonnull__))
    inline void $(add_in_unrest, A)(A *restrict const oz,
        A const *restrict const x, A const *restrict const y) {
      *oz = *x + *y;
    }

    __attribute__ ((__nonnull__))
    inline void $(add_in_unrest_mut, A)(A *restrict const iox,
        A const *restrict const y) {
      // ??
    }

## Operators

    () [] -> .                           left to right
    ! ~ ++ -- + - (type) * & sizeof      right to left
    * / %                                left to right
    + -                                  left to right
    << >>                                left to right
    < <= > >=                            left to right
    == !=                                left to right
    &                                    left to right
    ^                                    left to right
    |                                    left to right
    &&                                   left to right
    ||                                   left to right
    ?:                                   right to left
    = += -= *= /= %= <<= >>= &= ^= |=    right to left
    ,                                    left to right

## Keywords

    C89
      auto
      break
      case
      char
      const
      continue
      default
      do
      double
      else
      enum
      extern
      float
      for
      goto
      if
      int
      long
      register
      return
      short
      signed
      sizeof
      static
      struct
      switch
      typedef
      union
      unsigned
      void
      volatile
      while

    C99
      _Bool
      _Complex
      _Imaginary
      inline
      restrict

    C11
      _Alignas
      _Alignof
      _Atomic
      _Generic
      _Noreturn
      _Static_assert
      _Thread_local

## Prototypes

    C89:
      <assert.h>
        void assert(_Generic);

      <ctype.h>
        int isalnum(int);
        int isalpha(int);
        int isblank(int);
        int iscntrl(int);
        int isdigit(int);
        int isgraph(int);
        int islower(int);
        int isprint(int);
        int ispunct(int);
        int isspace(int);
        int isupper(int);
        int isxdigit(int);
        int tolower(int);
        int toupper(int);

      <errno.h>
      <float.h>
      <limits.h>
      <locale.h>
        struct lconv *localeconv(void);
        char *setlocale(int, char const *);

      <math.h>
        int fpclassify(_Generic);
        int isfinite(_Generic);
        int isinf(_Generic);
        int isnan(_Generic);
        int isnormal(_Generic);
        int signbit(_Generic);
        int isgreater(_Generic, _Generic);
        int isgreaterequal(_Generic, _Generic);
        int isless(_Generic, _Generic);
        int islessequal(_Generic, _Generic);
        int islessgreater(_Generic, _Generic);
        int isunordered(_Generic, _Generic);
        double acos(double);
        float acosf(float);
        double acosh(double);
        float acoshf(float);
        long double acoshl(long double);
        long double acosl(long double);
        double asin(double);
        float asinf(float);
        double asinh(double);
        float asinhf(float);
        long double asinhl(long double);
        long double asinl(long double);
        double atan(double);
        double atan2(double, double);
        float atan2f(float, float);
        long double atan2l(long double, long double);
        float atanf(float);
        double atanh(double);
        float atanhf(float);
        long double atanhl(long double);
        long double atanl(long double);
        double cbrt(double);
        float cbrtf(float);
        long double cbrtl(long double);
        double ceil(double);
        float ceilf(float);
        long double ceill(long double);
        double copysign(double, double);
        float copysignf(float, float);
        long double copysignl(long double, long double);
        double cos(double);
        float cosf(float);
        double cosh(double);
        float coshf(float);
        long double coshl(long double);
        long double cosl(long double);
        double erf(double);
        double erfc(double);
        float erfcf(float);
        long double erfcl(long double);
        float erff(float);
        long double erfl(long double);
        double exp(double);
        double exp2(double);
        float exp2f(float);
        long double exp2l(long double);
        float expf(float);
        long double expl(long double);
        double expm1(double);
        float expm1f(float);
        long double expm1l(long double);
        double fabs(double);
        float fabsf(float);
        long double fabsl(long double);
        double fdim(double, double);
        float fdimf(float, float);
        long double fdiml(long double, long double);
        double floor(double);
        float floorf(float);
        long double floorl(long double);
        double fma(double, double, double);
        float fmaf(float, float, float);
        long double fmal(long double, long double, long double);
        double fmax(double, double);
        float fmaxf(float, float);
        long double fmaxl(long double, long double);
        double fmin(double, double);
        float fminf(float, float);
        long double fminl(long double, long double);
        double fmod(double, double);
        float fmodf(float, float);
        long double fmodl(long double, long double);
        double frexp(double, int *);
        float frexpf(float value, int *);
        long double frexpl(long double value, int *);
        double hypot(double, double);
        float hypotf(float, float);
        long double hypotl(long double, long double);
        int ilogb(double);
        int ilogbf(float);
        int ilogbl(long double);
        double ldexp(double, int);
        float ldexpf(float, int);
        long double ldexpl(long double, int);
        double lgamma(double);
        float lgammaf(float);
        long double lgammal(long double);
        long long llrint(double);
        long long llrintf(float);
        long long llrintl(long double);
        long long llround(double);
        long long llroundf(float);
        long long llroundl(long double);
        double log(double);
        double log10(double);
        float log10f(float);
        long double log10l(long double);
        double log1p(double);
        float log1pf(float);
        long double log1pl(long double);
        double log2(double);
        float log2f(float);
        long double log2l(long double);
        double logb(double);
        float logbf(float);
        long double logbl(long double);
        float logf(float);
        long double logl(long double);
        long lrint(double);
        long lrintf(float);
        long lrintl(long double);
        long lround(double);
        long lroundf(float);
        long lroundl(long double);
        double modf(double, double *);
        float modff(float, float *);
        long double modfl(long double, long double *);
        double nan(char const *);
        float nanf(char const *);
        long double nanl(char const *);
        double nearbyint(double);
        float nearbyintf(float);
        long double nearbyintl(long double);
        double nextafter(double, double);
        float nextafterf(float, float);
        long double nextafterl(long double, long double);
        double nexttoward(double, long double);
        float nexttowardf(float, long double);
        long double nexttowardl(long double, long double);
        double pow(double, double);
        float powf(float, float);
        long double powl(long double, long double);
        double remainder(double, double);
        float remainderf(float, float);
        long double remainderl(long double, long double);
        double remquo(double, double, int *);
        float remquof(float, float, int *);
        long double remquol(long double, long double, int *);
        double rint(double);
        float rintf(float);
        long double rintl(long double);
        double round(double);
        float roundf(float);
        long double roundl(long double);
        double scalbln(double, long);
        float scalblnf(float, long);
        long double scalblnl(long double, long);
        double scalbn(double, int);
        float scalbnf(float, int);
        long double scalbnl(long double, int);
        double sin(double);
        float sinf(float);
        double sinh(double);
        float sinhf(float);
        long double sinhl(long double);
        long double sinl(long double);
        double sqrt(double);
        float sqrtf(float);
        long double sqrtl(long double);
        double tan(double);
        float tanf(float);
        double tanh(double);
        float tanhf(float);
        long double tanhl(long double);
        long double tanl(long double);
        double tgamma(double);
        float tgammaf(float);
        long double tgammal(long double);
        double trunc(double);
        float truncf(float);
        long double truncl(long double);

      <setjmp.h>
        void longjmp(jmp_buf, int);
        int setjmp(jmp_buf);

      <signal.h>
        void (*signal(int, void (*)(int)))(int);

      <stdarg.h>
        void va_start(va_list, _Generic);
        void va_copy(va_list, va_list);
        _Generic va_arg(va_list, _Generic);
        void va_end(va_list);

      <stddef.h>
      <stdio.h>
        void clearerr(FILE *);
        int fclose(FILE *);
        int feof(FILE *);
        int ferror(FILE *);
        int fflush(FILE *);
        int fgetc(FILE *);
        int fgetpos(FILE *restrict, fpos_t *restrict);
        char *fgets(char *restrict, int, FILE *restrict);
        FILE *fopen(char const *restrict, char const *restrict);
        int fprintf(FILE *restrict, char const *restrict, ...);
        int fputc(int, FILE *);
        int fputs(char const *restrict, FILE *restrict);
        size_t fread(void *restrict, size_t, size_t, FILE *restrict);
        FILE *freopen(char const *restrict, char const *restrict, FILE *restrict);
        int fscanf(FILE *restrict, char const *restrict, ...);
        int fseek(FILE *, long, int);
        int fsetpos(FILE *, fpos_t const *);
        long ftell(FILE *);
        size_t fwrite(void const *restrict, size_t, size_t, FILE *restrict);
        int getc(FILE *);
        int getchar(void);
        char *gets(char *);
        void perror(char const *);
        int printf(char const *restrict, ...);
        int putc(int, FILE *);
        int putchar(int);
        int puts(char const *);
        int remove(char const *);
        int rename(char const *, char const *);
        void rewind(FILE *);
        int scanf(char const *restrict, ...);
        void setbuf(FILE *restrict, char *restrict);
        int setvbuf(FILE *restrict, char *restrict, int, size_t);
        int snprintf(char *restrict, size_t, char const *restrict, ...);
        int sprintf(char *restrict, char const *restrict, ...);
        int sscanf(char const *restrict, char const *restrict, ...);
        FILE *tmpfile(void);
        char *tmpnam(char *);
        int ungetc(int, FILE *);
        int vfprintf(FILE *restrict, char const *restrict, va_list);
        int vfscanf(FILE *restrict, char const *restrict, va_list);
        int vprintf(char const *restrict, va_list);
        int vscanf(char const *restrict, va_list);
        int vsnprintf(char *restrict, size_t, char const *restrict, va_list);
        int vsprintf(char *restrict, char const *restrict, va_list);
        int vsscanf(char const *restrict, char const *restrict, va_list arg);

      <stdlib.h>
        void _Exit(int);
        void abort(void);
        int abs(int);
        int atexit(void (*)(void));
        double atof(char const *);
        int atoi(char const *);
        long atol(char const *);
        long long atoll(char const *);
        void *bsearch(void const *, void const *, size_t, size_t, int (*)(void const *, void const *));
        void *calloc(size_t, size_t);
        div_t div(int, int);
        void exit(int);
        void free(void *);
        char *getenv(char const *);
        long labs(long);
        ldiv_t ldiv(long, long);
        long long llabs(long long);
        lldiv_t lldiv(long long, long long);
        void *malloc(size_t);
        int mblen(char const *, size_t);
        size_t mbstowcs(wchar_t *restrict, char const *restrict, size_t);
        int mbtowc(wchar_t *restrict, char const *restrict, size_t);
        void qsort(void *, size_t, size_t, int (*)(void const *, void const *));
        int rand(void);
        void *realloc(void *, size_t);
        void srand(unsigned);
        double strtod(char const *restrict, char **restrict);
        float strtof(char const *restrict, char **restrict);
        long strtol(char const *restrict, char **restrict, int);
        long double strtold(char const *restrict, char **restrict);
        long long strtoll(char const *restrict, char **restrict, int);
        unsigned long strtoul(char const *restrict, char **restrict, int);
        unsigned long long strtoull(char const *restrict, char **restrict, int);
        int system(char const *);
        size_t wcstombs(char *restrict, wchar_t const *restrict, size_t);
        int wctomb(char *, wchar_t);

      <string.h>
        void *memchr(void const *, int, size_t);
        int memcmp(void const *, void const *, size_t);
        void *memcpy(void *restrict, void const *restrict, size_t);
        void *memmove(void *, void const *, size_t);
        void *memset(void *, int, size_t);
        char *strcat(char *restrict, char const *restrict);
        char *strchr(char const *, int);
        int strcmp(char const *, char const *);
        int strcoll(char const *, char const *);
        char *strcpy(char *restrict, char const *restrict);
        size_t strcspn(char const *, char const *);
        char *strerror(int);
        size_t strlen(char const *);
        char *strncat(char *restrict, char const *restrict, size_t);
        int strncmp(char const *, char const *, size_t);
        char *strncpy(char *restrict, char const *restrict, size_t);
        char *strpbrk(char const *, char const *);
        char *strrchr(char const *, int);
        size_t strspn(char const *, char const *);
        char *strstr(char const *, char const *);
        char *strtok(char *restrict, char const *restrict);
        size_t strxfrm(char *restrict, char const *restrict, size_t);

      <time.h>
        char *asctime(struct tm const *);
        clock_t clock(void);
        char *ctime(time_t const *);
        double difftime(time_t, time_t);
        struct tm *gmtime(time_t const *);
        struct tm *localtime(time_t const *);
        time_t mktime(struct tm *);
        size_t strftime(char *restrict, size_t, char const *restrict, struct tm const *restrict);
        time_t time(time_t *);

    C95:
      <iso646.h>
      <wchar.h>
        wint_t btowc(int);
        wint_t fgetwc(FILE *);
        wchar_t *fgetws(wchar_t *restrict, int, FILE *restrict);
        wint_t fputwc(wchar_t, FILE *);
        int fputws(wchar_t const *restrict, FILE *restrict);
        int fwide(FILE *, int);
        int fwprintf(FILE *restrict, wchar_t const *restrict, ...);
        int fwscanf(FILE *restrict, wchar_t const *restrict, ...);
        wint_t getwc(FILE *);
        wint_t getwchar(void);
        size_t mbrlen(char const *restrict, size_t, mbstate_t *restrict);
        size_t mbrtowc(wchar_t *restrict, char const *restrict, size_t, mbstate_t *restrict);
        int mbsinit(mbstate_t const *);
        size_t mbsrtowcs(wchar_t *restrict, char const **restrict, size_t, mbstate_t *restrict);
        wint_t putwc(wchar_t, FILE *);
        wint_t putwchar(wchar_t);
        int swprintf(wchar_t *restrict, size_t, wchar_t const *restrict, ...);
        int swscanf(wchar_t const *restrict, wchar_t const *restrict, ...);
        wint_t ungetwc(wint_t, FILE *);
        int vfwprintf(FILE *restrict, wchar_t const *restrict, va_list);
        int vfwscanf(FILE *restrict, wchar_t const *restrict, va_list);
        int vwprintf(wchar_t const *restrict, va_list);
        int vswprintf(wchar_t *restrict, size_t, wchar_t const *restrict, va_list);
        int vswscanf(wchar_t const *restrict, wchar_t const *restrict, va_list);
        int vwscanf(wchar_t const *restrict, va_list);
        size_t wcrtomb(char *restrict, wchar_t, mbstate_t *restrict);
        wchar_t *wcscat(wchar_t *restrict, wchar_t const *restrict);
        wchar_t *wcschr(wchar_t const *, wchar_t);
        int wcscmp(wchar_t const *, wchar_t const *);
        int wcscoll(wchar_t const *, wchar_t const *);
        wchar_t *wcscpy(wchar_t *restrict, wchar_t const *restrict);
        size_t wcscspn(wchar_t const *, wchar_t const *);
        size_t wcsftime(wchar_t *restrict, size_t, wchar_t const *restrict, struct tm const *restrict);
        size_t wcslen(wchar_t const *);
        wchar_t *wcsncat(wchar_t *restrict, wchar_t const *restrict, size_t);
        int wcsncmp(wchar_t const *, wchar_t const *, size_t);
        wchar_t *wcsncpy(wchar_t *restrict, wchar_t const *restrict, size_t);
        wchar_t *wcspbrk(wchar_t const *, wchar_t const *);
        wchar_t *wcsrchr(wchar_t const *, wchar_t);
        size_t wcsrtombs(char *restrict, wchar_t const **restrict, size_t, mbstate_t *restrict);
        size_t wcsspn(wchar_t const *, wchar_t const *);
        wchar_t *wcsstr(wchar_t const *restrict, wchar_t const *restrict);
        double wcstod(wchar_t const *restrict, wchar_t **restrict);
        float wcstof(wchar_t const *restrict, wchar_t **restrict);
        wchar_t *wcstok(wchar_t *restrict, wchar_t const *restrict, wchar_t **restrict);
        long wcstol(wchar_t const *restrict, wchar_t **restrict, int);
        long double wcstold(wchar_t const *restrict, wchar_t **restrict);
        long long wcstoll(wchar_t const *restrict, wchar_t **restrict, int);
        unsigned long wcstoul(wchar_t const *restrict, wchar_t **restrict, int);
        unsigned long long wcstoull(wchar_t const *restrict, wchar_t **restrict, int);
        size_t wcsxfrm(wchar_t *restrict, wchar_t const *restrict, size_t);
        int wctob(wint_t);
        wchar_t *wmemchr(wchar_t const *, wchar_t, size_t);
        int wmemcmp(wchar_t const *, wchar_t const *, size_t);
        wchar_t *wmemcpy(wchar_t *restrict, wchar_t const *restrict, size_t);
        wchar_t *wmemmove(wchar_t *, wchar_t const *, size_t);
        wchar_t *wmemset(wchar_t *, wchar_t, size_t);
        int wprintf(wchar_t const *restrict, ...);
        int wscanf(wchar_t const *restrict, ...);

      <wctype.h>
        int iswalnum(wint_t);
        int iswalpha(wint_t);
        int iswblank(wint_t);
        int iswcntrl(wint_t);
        int iswdigit(wint_t);
        int iswgraph(wint_t);
        int iswlower(wint_t);
        int iswprint(wint_t);
        int iswpunct(wint_t);
        int iswspace(wint_t);
        int iswupper(wint_t);
        int iswxdigit(wint_t);
        int iswctype(wint_t, wctype_t);
        wint_t towctrans(wint_t, wctrans_t);
        wint_t towlower(wint_t);
        wint_t towupper(wint_t);
        wctrans_t wctrans(char const *);
        wctype_t wctype(char const *);

    C99:
      <complex.h>
        double cabs(double complex);
        float cabsf(float complex);
        long double cabsl(long double complex);
        double complex cacos(double complex);
        float complex cacosf(float complex);
        double complex cacosh(double complex);
        float complex cacoshf(float complex);
        long double complex cacoshl(long double complex);
        long double complex cacosl(long double complex);
        double carg(double complex);
        float cargf(float complex);
        long double cargl(long double complex);
        double complex casin(double complex);
        float complex casinf(float complex);
        double complex casinh(double complex);
        float complex casinhf(float complex);
        long double complex casinhl(long double complex);
        long double complex casinl(long double complex);
        double complex catan(double complex);
        float complex catanf(float complex);
        double complex catanh(double complex);
        float complex catanhf(float complex);
        long double complex catanhl(long double complex);
        long double complex catanl(long double complex);
        double complex ccos(double complex);
        float complex ccosf(float complex);
        double complex ccosh(double complex);
        float complex ccoshf(float complex);
        long double complex ccoshl(long double complex);
        long double complex ccosl(long double complex);
        double complex cexp(double complex);
        float complex cexpf(float complex);
        long double complex cexpl(long double complex);
        double cimag(double complex);
        float cimagf(float complex);
        long double cimagl(long double complex);
        double complex clog(double complex);
        float complex clogf(float complex);
        long double complex clogl(long double complex);
        double complex conj(double complex);
        float complex conjf(float complex);
        long double complex conjl(long double complex);
        double complex cpow(double complex, double complex);
        float complex cpowf(float complex, float complex);
        long double complex cpowl(long double complex, long double complex);
        double complex cproj(double complex);
        float complex cprojf(float complex);
        long double complex cprojl(long double complex);
        double creal(double complex);
        float crealf(float complex);
        long double creall(long double complex);
        double complex csin(double complex);
        float complex csinf(float complex);
        double complex csinh(double complex);
        float complex csinhf(float complex);
        long double complex csinhl(long double complex);
        long double complex csinl(long double complex);
        double complex csqrt(double complex);
        float complex csqrtf(float complex);
        long double complex csqrtl(long double complex);
        double complex ctan(double complex);
        float complex ctanf(float complex);
        double complex ctanh(double complex);
        float complex ctanhf(float complex);
        long double complex ctanhl(long double complex);
        long double complex ctanl(long double complex);

      <fenv.h>
        int feclearexcept(int);
        int fegetexceptflag(fexcept_t *, int);
        int feraiseexcept(int);
        int fesetexceptflag(fexcept_t const *, int);
        int fetestexcept(int);
        int fegetround(void);
        int fesetround(int);
        int fegetenv(fenv_t *);
        int feholdexcept(fenv_t *);
        int fesetenv(fenv_t const *);
        int feupdateenv(fenv_t const *);

      <inttypes.h>
        intmax_t imaxabs(intmax_t);
        imaxdiv_t imaxdiv(intmax_t, intmax_t);
        intmax_t strtoimax(char const *restrict, char **restrict, int);
        uintmax_t strtoumax(char const *restrict, char **restrict, int);
        intmax_t wcstoimax(wchar_t const *restrict, wchar_t **restrict, int);
        uintmax_t wcstoumax(wchar_t const *restrict, wchar_t **restrict, int);

      <stdint.h>
      <stdbool.h>
      <tgmath.h>
        _Generic acos(_Generic)
        _Generic asin(_Generic)
        _Generic atan(_Generic)
        _Generic atan2(_Generic, _Generic)
        _Generic ceil(_Generic)
        _Generic cos(_Generic)
        _Generic cosh(_Generic)
        _Generic exp(_Generic)
        _Generic fabs(_Generic)
        _Generic floor(_Generic)
        _Generic fmod(_Generic, _Generic)
        _Generic frexp(_Generic, _Generic)
        _Generic ldexp(_Generic, _Generic)
        _Generic log(_Generic)
        _Generic log10(_Generic)
        _Generic modf(_Generic, _Generic)
        _Generic pow(_Generic, _Generic)
        _Generic sin(_Generic)
        _Generic sinh(_Generic)
        _Generic sqrt(_Generic)
        _Generic tan(_Generic)
        _Generic tanh(_Generic)
        _Generic isgreater(_Generic)
        _Generic isnan(_Generic)
        _Generic islessequal(_Generic)
        _Generic isinf(_Generic)
        _Generic signbit(_Generic)
        _Generic cacos(_Generic)
        _Generic casin(_Generic)
        _Generic catan(_Generic)
        _Generic catan2(_Generic, _Generic)
        _Generic cceil(_Generic)
        _Generic ccos(_Generic)
        _Generic ccosh(_Generic)
        _Generic cexp(_Generic)
        _Generic cfabs(_Generic)
        _Generic cfloor(_Generic)
        _Generic cfmod(_Generic, _Generic)
        _Generic cfrexp(_Generic, _Generic)
        _Generic cldexp(_Generic, _Generic)
        _Generic clog(_Generic)
        _Generic clog10(_Generic)
        _Generic cmodf(_Generic, _Generic)
        _Generic cpow(_Generic, _Generic)
        _Generic csin(_Generic)
        _Generic csinh(_Generic)
        _Generic csqrt(_Generic)
        _Generic ctan(_Generic)
        _Generic ctanh(_Generic)

    C11:
      <stdalign.h>
      <stdatomic.h>
      <threads.h>
      <stdnoreturn.h>
      <uchar.h>

# Prelewd for C11

## Types

| C   | Header        | Type Qualifier
|:----|:--------------|:---------------
| C89 |               | `const`
| C89 |               | `volatile`
| C99 |               | `restrict`
| C11 | `stdatomic.h` | `atomic`

| C   | Header        | Signed Type              | Unsigned Type
|:----|:--------------|:-------------------------|:-------------------------
| C99 | `stdbool.h`   |                          | `bool`
| C89 |               | `char`                   | `char`
| C89 |               | `signed char`            | `unsigned char`
| C89 |               | `short int`              | `unsigned short int`
| C89 |               | `int`                    | `unsigned int`
| C89 |               | `long int`               | `unsigned long int`
| C99 |               | `long long int`          | `unsigned long long int`
| C89 | `stddef.h`    |                          | `size_t`
| C89 | `stddef.h`    | `ptrdiff_t`              |
| C99 | `stdint.h`    | `int8_t`                 | `uint8_t`
| C99 | `stdint.h`    | `int_least8_t`           | `uint_least8_t`
| C99 | `stdint.h`    | `int_fast8_t`            | `uint_fast8_t`
| C99 | `stdint.h`    | `int16_t`                | `uint16_t`
| C99 | `stdint.h`    | `int_least16_t`          | `uint_least16_t`
| C99 | `stdint.h`    | `int_fast16_t`           | `uint_fast16_t`
| C99 | `stdint.h`    | `int32_t`                | `uint32_t`
| C99 | `stdint.h`    | `int_least32_t`          | `uint_least32_t`
| C99 | `stdint.h`    | `int_fast32_t`           | `uint_fast32_t`
| C99 | `stdint.h`    | `int64_t`                | `uint64_t`
| C99 | `stdint.h`    | `int_least64_t`          | `uint_least64_t`
| C99 | `stdint.h`    | `int_fast64_t`           | `uint_fast64_t`
| C99 | `stdint.h`    | `intptr_t`               | `uintptr_t`
| C99 | `stdint.h`    | `intmax_t`               | `uintmax_t`
| C89 |               | `float`                  |
| C89 |               | `double`                 |
| C99 |               | `long double`            |
| C99 | `math.h`      | `float_t`                |
| C99 | `math.h`      | `double_t`               |
| C99 | `complex.h`   | `complex float`          |
| C99 | `complex.h`   | `complex double`         |
| C99 | `complex.h`   | `complex long double`    |

| C   | Header        | Type                     | Minimum Value      | Maximum Value
|:----|:--------------|:-------------------------|:-------------------|:-------------------
|     |               |                          |                    |
| C89 | `limits.h`    | `char`                   | `CHAR_MIN`         | `CHAR_MAX`
| C89 | `limits.h`    | `signed char`            | `SCHAR_MIN`        | `SCHAR_MAX`
| C89 | `limits.h`    | `short int`              | `SHRT_MIN`         | `SHRT_MAX`
| C89 | `limits.h`    | `int`                    | `INT_MIN`          | `INT_MAX`
| C89 | `limits.h`    | `long int`               | `LONG_MIN`         | `LONG_MAX`
| C99 | `limits.h`    | `long long int`          | `LLONG_MIN`        | `LLONG_MAX`
|     |               |                          |                    |
| C99 | `stdint.h`    | `ptrdiff_t`              | `PTRDIFF_MIN`      | `PTRDIFF_MAX`
| C99 | `stdint.h`    | `int8_t`                 | `INT8_MIN`         | `INT8_MAX`
| C99 | `stdint.h`    | `int_least8_t`           | `INT_LEAST8_MIN`   | `INT_LEAST8_MAX`
| C99 | `stdint.h`    | `int_fast8_t`            | `INT_FAST8_MIN`    | `INT_FAST8_MAX`
| C99 | `stdint.h`    | `int16_t`                | `INT16_MIN`        | `INT16_MAX`
| C99 | `stdint.h`    | `int_least16_t`          | `INT_LEAST16_MIN`  | `INT_LEAST16_MAX`
| C99 | `stdint.h`    | `int_fast16_t`           | `INT_FAST16_MIN`   | `INT_FAST16_MAX`
| C99 | `stdint.h`    | `int32_t`                | `INT32_MIN`        | `INT32_MAX`
| C99 | `stdint.h`    | `int_least32_t`          | `INT_LEAST32_MIN`  | `INT_LEAST32_MAX`
| C99 | `stdint.h`    | `int_fast32_t`           | `INT_FAST32_MIN`   | `INT_FAST32_MAX`
| C99 | `stdint.h`    | `int64_t`                | `INT64_MIN`        | `INT64_MAX`
| C99 | `stdint.h`    | `int_least64_t`          | `INT_LEAST64_MIN`  | `INT_LEAST64_MAX`
| C99 | `stdint.h`    | `int_fast64_t`           | `INT_FAST64_MIN`   | `INT_FAST64_MAX`
| C99 | `stdint.h`    | `intptr_t`               | `INTPTR_MIN`       | `INTPTR_MAX`
| C99 | `stdint.h`    | `intmax_t`               | `INTMAX_MIN`       | `INTMAX_MAX`
| C99 | `float.h`     | `float`                  | `-FLT_MAX`         | `FLT_MAX`
| C99 | `float.h`     | `double`                 | `-DBL_MAX`         | `DBL_MAX`
| C99 | `float.h`     | `long double`            | `-LDBL_MAX`        | `LDBL_MAX`
|     |               | `float_t`                |                    |
|     |               | `double_t`               |                    |
|     |               | `complex float`          |                    |
|     |               | `complex double`         |                    |
|     |               | `complex long double`    |                    |

| C   | Header        | Type                     | Minimum Value      | Maximum Value
|:----|:--------------|:-------------------------|:-------------------|:-------------------
|     |               | `bool`                   | `false`            | `true`
| C89 | `limits.h`    | `char`                   | `0`                | `CHAR_MAX`
| C89 | `limits.h`    | `unsigned char`          | `0`                | `UCHAR_MAX`
| C89 | `limits.h`    | `unsigned short int`     | `0`                | `USHRT_MAX`
| C89 | `limits.h`    | `unsigned int`           | `0`                | `UINT_MAX`
| C89 | `limits.h`    | `unsigned long int`      | `0`                | `ULONG_MAX`
| C99 | `limits.h`    | `unsigned long long int` | `0`                | `ULLONG_MAX`
| C99 | `stdint.h`    | `size_t`                 | `0`                | `SIZE_MAX`
|     |               |                          |                    |
| C99 | `stdint.h`    | `uint8_t`                | `0`                | `UINT8_MAX`
| C99 | `stdint.h`    | `uint_least8_t`          | `0`                | `UINT_LEAST8_MAX`
| C99 | `stdint.h`    | `uint_fast8_t`           | `0`                | `UINT_FAST8_MAX`
| C99 | `stdint.h`    | `uint16_t`               | `0`                | `UINT16_MAX`
| C99 | `stdint.h`    | `uint_least16_t`         | `0`                | `UINT_LEAST16_MAX`
| C99 | `stdint.h`    | `uint_fast16_t`          | `0`                | `UINT_FAST16_MAX`
| C99 | `stdint.h`    | `uint32_t`               | `0`                | `UINT32_MAX`
| C99 | `stdint.h`    | `uint_least32_t`         | `0`                | `UINT_LEAST32_MAX`
| C99 | `stdint.h`    | `uint_fast32_t`          | `0`                | `UINT_FAST32_MAX`
| C99 | `stdint.h`    | `uint64_t`               | `0`                | `UINT64_MAX`
| C99 | `stdint.h`    | `uint_least64_t`         | `0`                | `UINT_LEAST64_MAX`
| C99 | `stdint.h`    | `uint_fast64_t`          | `0`                | `UINT_FAST64_MAX`
| C99 | `stdint.h`    | `uintptr_t`              | `0`                | `UINTPTR_MAX`
| C99 | `stdint.h`    | `uintmax_t`              | `0`                | `UINTMAX_MAX`
|     |               |                          |                    |
|     |               |                          |                    |
|     |               |                          |                    |
|     |               |                          |                    |
|     |               |                          |                    |
|     |               |                          |                    |
|     |               |                          |                    |
|     |               |                          |                    |

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

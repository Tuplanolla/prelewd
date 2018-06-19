# Unorganized Notes

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

## Number Systems

Here is an ad-hoc numerical interface that mimicks most popular libraries.
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

## Would Like to Do This

This was the original motivating idea.

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
    inline void $(add_ref, A)(A *const oz,
        A const *const x, A const *const y) {
      // ??
    }

    __attribute__ ((__nonnull__))
    inline void $(add_ref_mut, A)(A *const iox,
        A const *const y) {
      add(iox, iox, y);
    }

    __attribute__ ((__nonnull__))
    inline void $(add_ref_rest, A)(A *const oz,
        A const *restrict const x, A const *restrict const y) {
      // ??
    }

    __attribute__ ((__nonnull__))
    inline void $(add_ref_rest_mut, A)(A *const iox,
        A const *restrict const y) {
      add(iox, iox, y);
    }

    __attribute__ ((__nonnull__))
    inline void $(add_ref_unrest, A)(A *restrict const oz,
        A const *restrict const x, A const *restrict const y) {
      *oz = *x + *y;
    }

    __attribute__ ((__nonnull__))
    inline void $(add_ref_unrest_mut, A)(A *restrict const iox,
        A const *restrict const y) {
      // ??
    }

## Operators

If C had type classes or traits, they might look like this.

    =                                    any
    == !=                                eq
    < <= > >=                            ord
    ++ + +=                              smon
    -- - -=                              sgrp
    * *=                                 pmon
    / /=                                 pgrp
    % %=                                 edom
    ~ << >> & ^ | <<= >>= &= ^= |=       bits
    ! && ||                              bool
    ?:                                   bool * any
    .                                    one

## Picks from Literature Review

Note that the remainder is tricky here.

> Furthermore, for any Euclidean domain $R$, division with remainder can be
> defined as follows: $a=tb+r$, and either $r=0$ or $f(r)<f(b)$, where $f$ is
> the euclidean function of $R$. [The set of integers] $Z$ fits into this
> classification by letting $f(n)=|n|$.
> --- Benjamin Braun

> In [M. A. Jodeit, Jr., Uniqueness in the division algorithm, The American
> Mathematical Monthly 74 (1967), 835--836] it is shown that a Euclidean Domain
> in which quotient and remainder are strictly unique (for the integers there
> is a choice of sign) is either a field or a polynomial ring over a field.
> --- Francis Clarke

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

## How about Geometric Algebra

The geometric algebra thing could work
if the data types carried occupancy masks by grade instead of by basis element.
For dimension $d$, the number of basis elements is $2^d$ and
the number of grades is $d$.
The respective occupancy masks have as many bits,
so they have either $2^{2^d}$ or $2^d$ inhabitants.
Dispatching by the masks takes either $(2^{2^d})^2$ or $(2^d)^2$ branches.
With symmetry reduction taken into account,
the result becomes either $(2^{2^d})^2 / 2$ or $(2^d)^2 / 2$ branches.
These grow to $128$ branches by $2$ and $4$ dimensions respectively and
to $32768$ by $3$ and $8$ and become intractable beyond that.
Still, eight dimensions ought to be enough for anybody!

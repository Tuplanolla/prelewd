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

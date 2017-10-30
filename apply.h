/// Apply of Lisp fame.

#ifndef PRELEWD_APPLY_H
#define PRELEWD_APPLY_H

/// Apply a function to some arguments.
///
/// The preprocessor directive `PRELEWD_APPLY(f, x0, x1, x2)` expands
/// to `f(x0, x1, x2)` in the case of three arguments.
/// This is useful when the arguments need to be expanded
/// before being passed to the function.
/// Given
///
///     #define F(x) F_##x
///     #define X 42
///
/// for example, `F(X)` expands to `F_X`
/// while `PRELEWD_APPLY(F, X)` expands to `F_42`.
#define PRELEWD_APPLY(f, ...) f(__VA_ARGS__)

#endif

/// Preprocessor macro invocation.

#ifndef PRELEWD_APPLY_H
#define PRELEWD_APPLY_H

/// Apply a macro to a list of arguments.
///
/// The macro invocation `PRELEWD_APPLY(f, x0, x1, x2, x3)` expands
/// to `f(x0, x1, x2, x3)` in this case of four arguments.
/// This is useful when the arguments need to be expanded
/// before being passed on to the macro: given
///
///     #define F(x) F_##x
///     #define X 42
///
/// for example, `F(X)` expands to `F_X`
/// while `PRELEWD_APPLY(F, X)` expands to `F_42`.
#define PRELEWD_APPLY(f, ...) f(__VA_ARGS__)

#endif

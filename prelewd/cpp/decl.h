/// Preprocessor declaration generation (special header).
///
/// This header requires defining
/// either `PRELEWD_DECL_H` or `PRELEWD_DECL_C` before its inclusion.
/// The former enables header file generation
/// while the latter enables source file generation.

#ifdef PRELEWD_DECL_H

#ifdef PRELEWD_DECL_C
#error "Contradictory declaration macro definitions"
#endif

#ifdef PRELEWD_INLINE
#undef PRELEWD_INLINE
#endif

/// Declare an inline function.
#define PRELEWD_INLINE(x, ...) inline x __VA_ARGS__

#ifdef PRELEWD_FUNC
#undef PRELEWD_FUNC
#endif

/// Declare a function.
#define PRELEWD_FUNC(x, ...) x;

#else
#ifdef PRELEWD_DECL_C

#ifdef PRELEWD_INLINE
#undef PRELEWD_INLINE
#endif

/// Define an inline function.
#define PRELEWD_INLINE(x, ...) extern inline x;

#ifdef PRELEWD_FUNC
#undef PRELEWD_FUNC
#endif

/// Define a function.
#define PRELEWD_FUNC(x, ...) x __VA_ARGS__

#else

#error "Missing declaration macro definitions"

#endif
#endif

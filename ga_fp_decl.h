#include <prelewd.h>

// TODO Reify.

PRELEWD_INTYPE(
struct, $(ga, FP, 0), {
  // The coefficients of the basis components
  // `{{}}`.
  FP cs[1];
})

PRELEWD_INTYPE(
struct, $(ga, FP, 1), {
  // The coefficients of the basis components
  // `{{}, {0}}`.
  FP cs[2];
})

PRELEWD_INTYPE(
struct, $(ga, FP, 2), {
  // The coefficients of the basis components
  // `{{}, {0}, {1}, {0, 1}}`.
  FP cs[4];
})

PRELEWD_INTYPE(
struct, $(ga, FP, 3), {
  // The coefficients of the basis components
  // `{{}, {0}, {1}, {2}, {0, 1}, {1, 2}, {2, 0}, {0, 1, 2}}`.
  FP cs[8];
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_init, FP, 0)($(ga, FP, 0) *const x), {
  x->cs[0] = $(0, FP)();
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_init, FP, 1)($(ga, FP, 1) *const x), {
  x->cs[0] = $(0, FP)();
  x->cs[1] = $(0, FP)();
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_init, FP, 2)($(ga, FP, 2) *const x), {
  x->cs[0] = $(0, FP)();
  x->cs[1] = $(0, FP)();
  x->cs[2] = $(0, FP)();
  x->cs[3] = $(0, FP)();
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_init, FP, 3)($(ga, FP, 3) *const x), {
  x->cs[0] = $(0, FP)();
  x->cs[1] = $(0, FP)();
  x->cs[2] = $(0, FP)();
  x->cs[3] = $(0, FP)();
  x->cs[4] = $(0, FP)();
  x->cs[5] = $(0, FP)();
  x->cs[6] = $(0, FP)();
  x->cs[7] = $(0, FP)();
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj, FP, 0)($(ga, FP, 0) *restrict const y,
    $(ga, FP, 0) const *restrict const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    y->cs[0] = x->cs[0];

    break;
  default:
    y->cs[0] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj, FP, 1)($(ga, FP, 1) *restrict const y,
    $(ga, FP, 1) const *restrict const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    y->cs[0] = x->cs[0];
    y->cs[1] = $(0, FP)();

    break;
  case 1:
    y->cs[0] = $(0, FP)();
    y->cs[1] = x->cs[1];

    break;
  default:
    y->cs[0] = $(0, FP)();
    y->cs[1] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj, FP, 2)($(ga, FP, 2) *restrict const y,
    $(ga, FP, 2) const *restrict const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    y->cs[0] = x->cs[0];
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = $(0, FP)();

    break;
  case 1:
    y->cs[0] = $(0, FP)();
    y->cs[1] = x->cs[1];
    y->cs[2] = x->cs[2];
    y->cs[3] = $(0, FP)();

    break;
  case 2:
    y->cs[0] = $(0, FP)();
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = x->cs[3];

    break;
  default:
    y->cs[0] = $(0, FP)();
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj, FP, 3)($(ga, FP, 3) *restrict const y,
    $(ga, FP, 3) const *restrict const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    y->cs[0] = x->cs[0];
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = $(0, FP)();
    y->cs[4] = $(0, FP)();
    y->cs[5] = $(0, FP)();
    y->cs[6] = $(0, FP)();
    y->cs[7] = $(0, FP)();

    break;
  case 1:
    y->cs[0] = $(0, FP)();
    y->cs[1] = x->cs[1];
    y->cs[2] = x->cs[2];
    y->cs[3] = x->cs[3];
    y->cs[4] = $(0, FP)();
    y->cs[5] = $(0, FP)();
    y->cs[6] = $(0, FP)();
    y->cs[7] = $(0, FP)();

    break;
  case 2:
    y->cs[0] = $(0, FP)();
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = $(0, FP)();
    y->cs[4] = x->cs[4];
    y->cs[5] = x->cs[5];
    y->cs[6] = x->cs[6];
    y->cs[7] = $(0, FP)();

    break;
  case 3:
    y->cs[0] = $(0, FP)();
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = $(0, FP)();
    y->cs[4] = $(0, FP)();
    y->cs[5] = $(0, FP)();
    y->cs[6] = $(0, FP)();
    y->cs[7] = x->cs[7];

    break;
  default:
    y->cs[0] = $(0, FP)();
    y->cs[1] = $(0, FP)();
    y->cs[2] = $(0, FP)();
    y->cs[3] = $(0, FP)();
    y->cs[4] = $(0, FP)();
    y->cs[5] = $(0, FP)();
    y->cs[6] = $(0, FP)();
    y->cs[7] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj_mut, FP, 0)($(ga, FP, 0) *const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    break;
  default:
    x->cs[0] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj_mut, FP, 1)($(ga, FP, 1) *const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    x->cs[1] = $(0, FP)();

    break;
  case 1:
    x->cs[0] = $(0, FP)();

    break;
  default:
    x->cs[0] = $(0, FP)();
    x->cs[1] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj_mut, FP, 2)($(ga, FP, 2) *const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();
    x->cs[3] = $(0, FP)();

    break;
  case 1:
    x->cs[0] = $(0, FP)();
    x->cs[3] = $(0, FP)();

    break;
  case 2:
    x->cs[0] = $(0, FP)();
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();

    break;
  default:
    x->cs[0] = $(0, FP)();
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();
    x->cs[3] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_gproj_mut, FP, 3)($(ga, FP, 3) *const x, size_t const igrade), {
  switch (igrade) {
  case 0:
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();
    x->cs[3] = $(0, FP)();
    x->cs[4] = $(0, FP)();
    x->cs[5] = $(0, FP)();
    x->cs[6] = $(0, FP)();
    x->cs[7] = $(0, FP)();

    break;
  case 1:
    x->cs[0] = $(0, FP)();
    x->cs[4] = $(0, FP)();
    x->cs[5] = $(0, FP)();
    x->cs[6] = $(0, FP)();
    x->cs[7] = $(0, FP)();

    break;
  case 2:
    x->cs[0] = $(0, FP)();
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();
    x->cs[3] = $(0, FP)();
    x->cs[7] = $(0, FP)();

    break;
  case 3:
    x->cs[0] = $(0, FP)();
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();
    x->cs[3] = $(0, FP)();
    x->cs[4] = $(0, FP)();
    x->cs[5] = $(0, FP)();
    x->cs[6] = $(0, FP)();

    break;
  default:
    x->cs[0] = $(0, FP)();
    x->cs[1] = $(0, FP)();
    x->cs[2] = $(0, FP)();
    x->cs[3] = $(0, FP)();
    x->cs[4] = $(0, FP)();
    x->cs[5] = $(0, FP)();
    x->cs[6] = $(0, FP)();
    x->cs[7] = $(0, FP)();

    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_eprod, FP, 0)($(ga, FP, 0) *restrict const z,
    $(ga, FP, 0) const *restrict const x,
    $(ga, FP, 0) const *restrict const y), {
  z->cs[0] = x->cs[0] * y->cs[0];
})

// This is derived as follows.
//
//     (x + x0 e0) ^ (y + y0 e0)
//     x ^ (y + y0 e0) + x0 e0 ^ (y + y0 e0)
//     x ^ y + x ^ y0 e0 + x0 e0 ^ y + x0 e0 ^ y0 e0
//     x y + x y0 e0 + x0 y e0 + x0 y0 e0 ^ e0
//     x y + (x y0 + x0 y) e0
PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_eprod, FP, 1)($(ga, FP, 1) *restrict const z,
    $(ga, FP, 1) const *restrict const x,
    $(ga, FP, 1) const *restrict const y), {
  z->cs[0] = x->cs[0] * y->cs[0];
  z->cs[1] = x->cs[0] * y->cs[1] + x->cs[1] * y->cs[0];
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_eprod, FP, 2)($(ga, FP, 2) *restrict const z,
    $(ga, FP, 2) const *restrict const x,
    $(ga, FP, 2) const *restrict const y), {
  z->cs[0] = x->cs[0] * y->cs[0];
  z->cs[1] = x->cs[0] * y->cs[1] + x->cs[1] * y->cs[0];
  z->cs[2] = x->cs[0] * y->cs[2] + x->cs[2] * y->cs[0];
  z->cs[3] = x->cs[0] * y->cs[3] + x->cs[1] * y->cs[2] -
    x->cs[2] * y->cs[1] + x->cs[3] * y->cs[0];
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(ga_eprod, FP, 3)($(ga, FP, 3) *restrict const z,
    $(ga, FP, 3) const *restrict const x,
    $(ga, FP, 3) const *restrict const y), {
  z->cs[0] = x->cs[0] * y->cs[0];
  z->cs[1] = x->cs[0] * y->cs[1] + x->cs[1] * y->cs[0];
  z->cs[2] = x->cs[0] * y->cs[2] + x->cs[2] * y->cs[0];
  z->cs[3] = x->cs[0] * y->cs[3] + x->cs[3] * y->cs[0];
  z->cs[4] = x->cs[0] * y->cs[4] + x->cs[1] * y->cs[2] -
    x->cs[2] * y->cs[1] + x->cs[4] * y->cs[0];
  z->cs[5] = x->cs[0] * y->cs[5] + x->cs[2] * y->cs[3] -
    x->cs[3] * y->cs[2] + x->cs[5] * y->cs[0];
  z->cs[6] = x->cs[0] * y->cs[6] - x->cs[1] * y->cs[3] +
    x->cs[3] * y->cs[1] + x->cs[6] * y->cs[0];
  z->cs[7] = x->cs[0] * y->cs[7] + x->cs[1] * y->cs[5] +
    x->cs[2] * y->cs[6] + x->cs[3] * y->cs[4] +
    x->cs[4] * y->cs[3] + x->cs[5] * y->cs[1] +
    x->cs[6] * y->cs[2] + x->cs[7] * y->cs[0];
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
FP $(ga_iprod, FP, 0)($(ga, FP, 0) const *restrict const x,
    $(ga, FP, 0) const *restrict const y), {
  return x->cs[0] * y->cs[0];
})

// This is derived as follows.
//
//     (x + x0 e0) . (y + y0 e0)
//     x . (y + y0 e0) + x0 e0 . (y + y0 e0)
//     x . y + x . y0 e0 + x0 e0 . y + x0 e0 . y0 e0
//     x y + x y0 + x0 y + x0 y0
PRELEWD_INPROC(__attribute__ ((__nonnull__))
FP $(ga_iprod, FP, 1)($(ga, FP, 1) const *restrict const x,
    $(ga, FP, 1) const *restrict const y), {
  return x->cs[0] * y->cs[0] + x->cs[0] * y->cs[1] +
    x->cs[1] * y->cs[0] + x->cs[1] * y->cs[1];
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
FP $(ga_iprod, FP, 2)($(ga, FP, 2) const *restrict const x,
    $(ga, FP, 2) const *restrict const y), {
  return (FP) NAN;
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
FP $(ga_iprod, FP, 3)($(ga, FP, 3) const *restrict const x,
    $(ga, FP, 3) const *restrict const y), {
  return (FP) NAN;
})

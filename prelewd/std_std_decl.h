// TODO This is bad.

#include <stdbool.h>

#include "cpp.h"

__attribute__ ((__const__, __pure__))
inline A $(0, A)(void) {
  return 0;
}

__attribute__ ((__const__, __pure__))
inline A $(1, A)(void) {
  return 1;
}

// Danger zone.

__attribute__ ((__const__, __pure__))
inline A $(add_uns, A)(A const x, A const y) {
  return x + y;
}

__attribute__ ((__const__, __pure__))
inline A $(neg_uns, A)(A const x) {
  return -x;
}

__attribute__ ((__const__, __pure__))
inline A $(sub_uns, A)(A const x, A const y) {
  return x - y;
}

__attribute__ ((__const__, __pure__))
inline A $(mul_uns, A)(A const x, A const y) {
  return x * y;
}

__attribute__ ((__const__, __pure__))
inline A $(recip_uns, A)(A const x) {
  return 1 / x;
}

__attribute__ ((__const__, __pure__))
inline A $(div_uns, A)(A const x, A const y) {
  return x / y;
}

__attribute__ ((__const__, __pure__))
inline A $(quot_uns, A)(A const x, A const y) {
  return x / y;
}

__attribute__ ((__const__, __pure__))
inline A $(rem_uns, A)(A const x, A const y) {
  return x % y;
}

/*
__attribute__ ((__const__, __pure__))
inline B $(cast_uns, A, B)(A const x) {
  return (B) x;
}
*/

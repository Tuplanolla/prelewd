#include <stdbool.h>

#include "cpp.h"
#include "gnu.h"

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
inline A $(add_unsafe, A)(A const x, A const y) {
  return x + y;
}

__attribute__ ((__const__, __pure__))
inline A $(neg_unsafe, A)(A const x) {
  return -x;
}

__attribute__ ((__const__, __pure__))
inline A $(sub_unsafe, A)(A const x, A const y) {
  return x - y;
}

__attribute__ ((__const__, __pure__))
inline A $(mul_unsafe, A)(A const x, A const y) {
  return x * y;
}

__attribute__ ((__const__, __pure__))
inline A $(recip_unsafe, A)(A const x) {
  return 1 / x;
}

__attribute__ ((__const__, __pure__))
inline A $(div_unsafe, A)(A const x, A const y) {
  return x / y;
}

__attribute__ ((__const__, __pure__))
inline A $(quot_unsafe, A)(A const x, A const y) {
  return x / y;
}

__attribute__ ((__const__, __pure__))
inline A $(rem_unsafe, A)(A const x, A const y) {
  return x % y;
}

/*
__attribute__ ((__const__, __pure__))
inline B $(cast_unsafe, A, B)(A const x) {
  return (B) x;
}
*/

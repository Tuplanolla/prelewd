/// Ordered types.

#ifndef PRELEWD_ORD_H
#define PRELEWD_ORD_H

#include "alias.h"

// ??
#define A bool
#include "ord_mono.h"
#undef A

#define A bool
#include "ord_poly.h"
#undef A
#define A char
#include "ord_poly.h"
#undef A
#define A signed_char
#include "ord_poly.h"
#undef A

#endif

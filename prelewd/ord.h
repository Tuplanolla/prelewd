/// Ordered types.

#ifndef PRELEWD_ORD_H
#define PRELEWD_ORD_H

#include "alias.h"

// TODO This.
#define A bool
#include "ord_any.h"
#undef A
#define A char
#include "ord_any.h"
#undef A
#define A signed_char
#include "ord_any.h"
#undef A

#endif

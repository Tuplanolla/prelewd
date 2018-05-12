#include <prelewd/alias.h>

#define FP float
#include "ga_fp_decl.h"
#undef FP
#define FP double
#include "ga_fp_decl.h"
#undef FP
#define FP long_double
#include "ga_fp_decl.h"
#undef FP

#include <math.h>

#define FP float_t
#include "ga_fp_decl.h"
#undef FP
#define FP double_t
#include "ga_fp_decl.h"
#undef FP

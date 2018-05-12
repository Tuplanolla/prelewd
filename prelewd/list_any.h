#include <prelewd/alias.h>

#define Any unsigned_char
#include "list_any_decl.h"
#undef Any
#define Any int
#include "list_any_decl.h"
#undef Any

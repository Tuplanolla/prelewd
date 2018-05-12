#include <prelewd/cpp.h>
#include <stdbool.h>
#include <stdlib.h>

PRELEWD_INTYPE(
enum, list_type, {
  LIST_TYPE_NIL,
  LIST_TYPE_CONS,
  LIST_NTYPE
})

PRELEWD_INTYPE(
struct, $(list, Any), {
  enum list_type type;
  union {
    // struct {} nil;
    struct {
      Any head;
      $(list, Any) *tail;
    } cons;
  } rep;
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(list_init, Any)($(list, Any) *const list), {
  list->type = LIST_TYPE_NIL;
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
void $(list_fini, Any)($(list, Any) *const list), {
  switch (list->type) {
  case LIST_TYPE_NIL:
    break;
  case LIST_TYPE_CONS:
    {
      $(list, Any) *tail = list->rep.cons.tail;

work:
      switch (tail->type) {
      case LIST_TYPE_NIL:
        break;
      case LIST_TYPE_CONS:
        {
          $(list, Any) *tmp = tail->rep.cons.tail;
          free(tail);
          tail = tmp;
        }
        goto work;
      }

      free(tail);
    }
    break;
  }
})

PRELEWD_INPROC(__attribute__ ((__nonnull__))
bool $(list_cons, Any)($(list, Any) *const list, Any const head), {
  $(list, Any) *const tmp = malloc(sizeof *tmp);
  if (tmp == NULL)
    return false;

  switch (list->type) {
  case LIST_TYPE_NIL:
    tmp->type = LIST_TYPE_NIL;
    list->type = LIST_TYPE_CONS;
    list->rep.cons.head = head;
    list->rep.cons.tail = tmp;
    break;
  case LIST_TYPE_CONS:
    tmp->type = LIST_TYPE_CONS;
    tmp->rep.cons.head = list->rep.cons.head;
    tmp->rep.cons.tail = list->rep.cons.tail;
    list->rep.cons.head = head;
    list->rep.cons.tail = tmp;
    break;
  }

  return true;
})

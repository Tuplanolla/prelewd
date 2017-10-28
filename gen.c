#include <limits.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rules {
  char const *id;
  bool multi;
  bool empty;
  char const *begin;
  char const *init;
  char const *sep;
  char const *open;
  char const *close;
  char const *end;
};

static bool params(struct rules const *const rules, size_t const n) {
  for (size_t i = 0; i < n; ++i) {
    if (i > 0)
      if (printf(", ") < 0)
        return false;

    if (printf("x") < 0)
      return false;

    if (rules->multi)
      if (printf("%zu", i) < 0)
        return false;
  }

  return true;
}

static bool defn(struct rules const *const rules, size_t const n) {
  if (printf("%s", rules->begin) < 0)
    return false;

  if (rules->empty)
    if (printf("%s", rules->init) < 0)
      return false;

  for (size_t i = 0; i < n; ++i) {
    if (rules->empty || i > 0)
      if (printf("%s", rules->sep) < 0)
        return false;

    if (printf("%s", rules->open) < 0 ||
        printf("x") < 0)
      return false;

    if (rules->multi)
      if (printf("%zu", i) < 0)
        return false;

    if (printf("%s", rules->close) < 0)
      return false;
  }

  if (printf("%s", rules->end) < 0)
    return false;

  return true;
}

static bool ppds(struct rules const *const rules, size_t const n) {
  for (size_t i = rules->empty ? 0 : 1; i <= n; ++i)
    if (printf("#define %s_%zu(", rules->id, i) < 0 ||
        !params(rules, i) || printf(") ") < 0 ||
        !defn(rules, i) || printf("\n") < 0)
      return false;

  return true;
}

static bool file(struct rules const *const rules, size_t const n) {
  if (printf("#ifndef %s_H\n"
        "#define %s_H\n"
        "\n", rules->id, rules->id) < 0)
    return false;

  for (size_t i = rules->empty ? 0 : 1; i <= n; ++i)
    if (printf("#define %s_%zu(", rules->id, i) < 0 ||
        !params(rules, i) || printf(") ") < 0 ||
        !defn(rules, i) || printf("\n") < 0)
      return false;

  if (printf("\n"
        "#endif\n") < 0)
    return false;

  return true;
}

int main(int const argc, char **const argv) {
  if (argc != 11)
    return EXIT_FAILURE;

  struct rules rules;
  rules.id = argv[1];
  {
    char const *const s = argv[2];
    if (strcmp(s, "single") == 0)
      rules.multi = false;
    else if (strcmp(s, "multi") == 0)
      rules.multi = true;
    else
      return EXIT_FAILURE;
  }
  {
    char const *const s = argv[3];
    if (strcmp(s, "empty") == 0)
      rules.empty = true;
    else if (strcmp(s, "nonempty") == 0)
      rules.empty = false;
    else
      return EXIT_FAILURE;
  }
  rules.begin = argv[4];
  rules.init = argv[5];
  rules.sep = argv[6];
  rules.open = argv[7];
  rules.close = argv[8];
  rules.end = argv[9];

  unsigned long int n = strtoul(argv[10], NULL, 10);
  if (n == ULONG_MAX)
    return EXIT_FAILURE;

  if (!file(&rules, (size_t) n))
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}

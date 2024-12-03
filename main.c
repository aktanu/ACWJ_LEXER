#include "defs.h"
#define extern_
#include "data.h"
#undef extern_
#include "decl.h"
#include <errno.h>
static void init() {
  Line = 1;
  Putback = '\n';
}
static void usage(char *prog) {
  fprintf(stderr, "Usage: %s infile\n", prog);
  exit(1);
}
char *tokstr[] = { "+", "-", "*", "/", "intlit", "^" };
static void scanfile() {
  struct token T;

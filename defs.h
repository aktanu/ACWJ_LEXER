#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
enum {
  T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT, T_POW
};
struct token {
  int token;
  int intvalue;
};

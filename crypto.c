#include "include/crypto.h"
#include <stdio.h>

word _add(word a, word b) { return (a + b); }

word _sub(word a, word b) { return (a - b); }

word _mul(word a, word b) { return (a * b); }

word _div(word a, word b) {
  if (b == 0) {
    fprintf(stderr, "Error: Division by zero\n");
    return 0;
  }
  return (a / b);
}

word _sqr(word a) { return (a * a); }

word _exp(word a, word b) {
  word result = 1;
  while (b > 0) {
    if (b % 2 == 1) {
      result *= a;
    }
    a *= a;
    b /= 2;
  }
  return result;
}

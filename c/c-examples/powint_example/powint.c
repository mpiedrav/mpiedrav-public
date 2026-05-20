#include <stdio.h>
#include <stdlib.h>

long powint(long b, long n) {
  long p = 1;
  for (size_t i = 0; i < n; ++i) {
    p = p * b;
  }
  return p;
}

int main(int argc, char **argv) {
  long b = 0;
  long n = 0;
  long r = 0;
  if (argc == 3) {
    b = strtol(argv[1], 0, 10);
    n = strtol(argv[2], 0, 10);
    r = powint(b, n);
    printf("%ld ^ %ld = %ld\n", b, n, r);
  }
}

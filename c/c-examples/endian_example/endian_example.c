#include <stdio.h>

int main() {
  union {
    int a;
    char b[sizeof(int)];
  } r;
  r.a = 0x1234abcd;
  for (int i = 0; i < sizeof(int); ++i)
    printf("%0x\n", r.b[i]);
}

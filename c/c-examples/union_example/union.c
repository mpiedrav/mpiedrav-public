// 2025 Marco Piedra Venegas <mpiedrav@proton.me>
// Print bits in a (little-endian) double.

#include <stdio.h>

#define SIGN_SIZE 1
#define EXPONENT_SIZE 11
#define SIGNIFICAND_SIZE 52

// IEEE 754 double (binary64)
struct ieee {
  unsigned long significand : SIGNIFICAND_SIZE;
  unsigned long exponent : EXPONENT_SIZE;
  unsigned long sign : SIGN_SIZE;
};

union rep {
  double d;
  struct ieee bits;
};

int main(int argc, char *argv[]) {
  if (argc > 1) {
    union rep r;
    if (sscanf(argv[1], "%le", &(r.d)) == 1) {
      printf("sign bit: %d", r.bits.sign);
      printf("\nexponent: ");
      for (int i = EXPONENT_SIZE - 1; i >= 0; --i) {
        printf("%d ", (r.bits.exponent >> i) & 0x1);
      }
      printf("\nsignificand: ");
      for (int i = SIGNIFICAND_SIZE - 1; i >= 0; --i) {
        printf("%d ", (r.bits.significand >> i) & 0x1);
      }
      printf("\n");
    }
  }
}

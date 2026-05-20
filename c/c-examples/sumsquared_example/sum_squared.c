#include <stdint.h>
#include <stdio.h>

int main() {
  int32_t sum = 0;
  int32_t square = 0;
  printf("old_sum | index | index^2 | new_sum\n");
  printf("--------|-------|---------|--------\n");
  for (size_t i = 1; i <= 10; ++i) {
    square = i * i;
    printf("%7d | %5d | %7d | ", sum, i, square);
    sum += square;
    printf("%7d\n", sum);
  }
}

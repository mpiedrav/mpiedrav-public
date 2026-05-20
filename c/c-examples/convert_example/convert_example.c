#include <math.h>
#include <stdio.h>

int main() {
  int n = 2;
  float a = sqrt(n);
  double b = sqrt(n);
  printf("Float:  %.100g\n", a);
  printf("Double: %.100g\n", b);
}

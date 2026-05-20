#include <iostream>

constexpr double dsqrt_helper(double sq, double d, double a) {
  return sq <= a ? dsqrt_helper(sq + d, d + 2.0, a) : d;
}

constexpr double dsqrt(double x) {
  return dsqrt_helper(1.0, 3.0, x) / 2.0 - 1.0;
}

int main() {
  constexpr double d1 = dsqrt(123456);
  constexpr double d2 = dsqrt(1234);

  std::cout << "d1 = " << d1 << std::endl << "d2 = " << d2 << std::endl;
}

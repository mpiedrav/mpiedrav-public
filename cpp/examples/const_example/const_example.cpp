#include <iostream>

const double sum1(const double a, const double b) { return a + b; }

constexpr double sum2(const double a, const double b) { return a + b; }

int main() {
  auto s1{sum1(2, 3)};
  auto s2{sum2(2, 3)};
  std::cout << "type of sum1: " << typeid(&s1).name() << std::endl
            << "type of sum2: " << typeid(&s2).name() << std::endl;
}

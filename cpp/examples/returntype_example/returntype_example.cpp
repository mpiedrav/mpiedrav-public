#include <complex>
#include <iostream>

template <typename L, typename R>
auto add_lhs_rhs(const L &lhs, const R &rhs) -> decltype(lhs + rhs) {
  return lhs + rhs;
}

int main() {
  std::complex<double> a = {3, 4};
  double b{5.2};
  std::cout << add_lhs_rhs(a, b) << std::endl;
}

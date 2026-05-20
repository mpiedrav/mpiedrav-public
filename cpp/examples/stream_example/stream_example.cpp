#include <iostream>
#include <vector>

std::vector<double> use_vector(std::istream &is) {
  std::vector<double> v;
  for (double d; is >> d;)
    v.push_back(d);
  return v;
}

int main() {
  auto v = use_vector(std::cin);
  for (auto &i : v)
    std::cout << i << std::endl;
}

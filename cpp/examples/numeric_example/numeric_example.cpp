#include <iostream>
#include <limits>
#include <vector>

int main() {
  std::cout << "min of int: " << std::numeric_limits<int>::min() << std::endl;
  std::cout << "max of int: " << std::numeric_limits<int>::max() << std::endl;

  std::vector<int> a;

  std::cout << "max size of std::vector<int>: " << a.max_size() << std::endl;
}

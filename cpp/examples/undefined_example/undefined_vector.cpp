#include <iostream>
#include <vector>

int main() {
  std::vector<int> a{100, 101, 102, 103, 104, 105};

  for (int i = 0; i < a.size(); ++i)
    std::cout << "a[" << i << "] = " << a[i] << std::endl;

  const int index = 10;

  a[index] = 110;

  std::cout << "Element at a[" << index << "] = " << a[index] << std::endl;

  std::cout << "Size of vector: " << a.size() << std::endl;

  std::cout << "Capacity of vector: " << a.capacity() << std::endl;
}

#include <iostream>

int main() {
  const int size = 4096;
  char page[size];

  page[size + size] = 10;

  std::cout << page[size + size] << std::endl;
}

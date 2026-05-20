#include <iostream>

void check_pointer(int *p) {
  if (!p) {
    throw 123;
  }
  std::cout << "address: " << p << "\tvalue: " << *p << std::endl;
}

int main() {
  int p[] = {10, 20, 30, 40};
  int *q = p;
  try {
    while (true) {
      check_pointer(q++);
    }
  } catch (std::exception e) {
    std::cout << e.what() << std::endl;
  }
}

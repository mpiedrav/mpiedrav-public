#include <exception>
#include <iostream>

class not_always_less : public std::exception {
public:
  const char *what() const noexcept override { return "not always less"; }
};

int must_be_always_less(int n, int m) {
  if (n > m)
    throw not_always_less();
  return m - n;
}

int main() {
  int n = 12;
  int m = 10;
  int diff = 0;
  try {
    diff = must_be_always_less(n, m);
  } catch (const not_always_less &e) {
    std::cout << e.what() << "\n";
  }
}

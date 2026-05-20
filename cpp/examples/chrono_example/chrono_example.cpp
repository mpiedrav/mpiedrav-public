#include <chrono>
#include <format>
#include <iostream>

int main() {
  std::chrono::weekday d{3};

  std::cout << std::format("Current day: {0:%A}\n", d);

  for (int i = 0; i < 7; ++i) {
    std::cout << std::format("Next day: {0:%A}\n", ++d);
  }
}

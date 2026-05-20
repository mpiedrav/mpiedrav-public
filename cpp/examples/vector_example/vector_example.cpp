#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  for (auto arg : arguments) {
    std::cout << arg << std::endl;
  }
}

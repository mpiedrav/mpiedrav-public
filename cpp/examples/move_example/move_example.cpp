#include <iostream>
#include <utility>
#include <vector>

void move_strings(std::vector<std::string> &vs) {
  std::vector<std::string> temp_vs(vs.size());
  temp_vs[0] = std::move(vs[0]);
  temp_vs[2] = std::move(vs[2]);
}

int main() {
  std::vector<std::string> vs{"first string", "second string", "third string",
                              "fourth string"};

  std::cout << "Before moving:\n";
  for (auto &s : vs)
    std::cout << "\t" << s << "\n";

  move_strings(vs);

  std::cout << "After moving:\n";
  for (auto &s : vs)
    std::cout << "\t" << s << "\n";
}

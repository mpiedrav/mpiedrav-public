#include <iostream>
#include <vector>

void f(std::string &s1, std::string &s2, std::string &s3) {
  std::string cs{s1 + s2};
  std::cout << cs << std::endl;
  cs = {s2 + s3};
  if (cs.length() < 8 && cs[0] == 'a')
    std::cout << cs << std::endl;
}

int main() {
  std::vector<std::string> vs{{"def", "abc", "ghi"}};
  f(vs[0], vs[1], vs[2]);
}

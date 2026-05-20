#include <iostream>
#include <vector>

void f(std::string &s1, std::string &s2, std::string &s3) {
  std::cout << s1 + s2 << std::endl;
  std::string s{s2 + s3};
  if (s.length() < 8 && s[0] == 'a')
    std::cout << s << std::endl;
}

int main() {
  std::vector<std::string> vs{"def", "abc", "ghi"};
  f(vs[0], vs[1], vs[2]);
}

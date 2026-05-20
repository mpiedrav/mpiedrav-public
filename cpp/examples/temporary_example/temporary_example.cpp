#include <cstring>
#include <iostream>

void f(std::string &s1, std::string &s2, std::string s3) {
  const char *cs = (s1 + s2).c_str();
  std::cout << cs << std::endl;
  if (std::strlen(cs = (s2 + s3).c_str()) < 8 && cs[0] == 'a')
    std::cout << cs << std::endl;
}

int main() {
  std::string s[]{{"def"}, {"abc"}, {"ghi"}};
  f(s[0], s[1], s[2]);
}

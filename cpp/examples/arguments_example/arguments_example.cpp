/* TC++PL4, p. 324
 */

#include <iostream>
#include <vector>

void check_error(int severity, const std::vector<std::string> &err) {
  for (auto &s : err)
    std::cerr << s << ' ';
  std::cerr << std::endl;
  if (severity)
    exit(severity);
}

std::vector<std::string> get_arguments(int argc, char *argv[]) {
  std::vector<std::string> args;
  for (int i = 0; i != argc; ++i)
    args.push_back(argv[i]);
  return args;
}

int main(int argc, char *argv[]) {
  auto args = get_arguments(argc, argv);
  check_error(args.size() < 2 ? 0 : 1, args);
}

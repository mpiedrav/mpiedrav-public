#include <iostream>
#include <vector>

void print_order(const std::vector<std::string> &args,
                 std::vector<std::string> &&order) {
  for (int i = 0; i < args.size() && i < order.size(); ++i)
    std::cout << order[i] << ": " << args[i] << std::endl;
}

void print_vec(const std::vector<std::string> &vec) {
  for (auto &s : vec)
    std::cout << s << ' ';
  std::cout << std::endl;
}

std::vector<std::string> get_args(int argc, char *argv[]) {
  std::vector<std::string> args;
  for (int i = 0; i < argc; ++i)
    args.push_back(argv[i]);
  return args;
}

int main(int argc, char *argv[]) {
  auto args{get_args(argc, argv)};
  print_vec(args);
  print_order(args, {"first", "second", "third", "fourth", "fifth"});
}

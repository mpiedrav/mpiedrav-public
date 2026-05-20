#include <chrono>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>

int main(int argc, char *argv[]) {
  std::stringstream ss;
  int size = 1e6;
  int argument;
  if (argc == 2) {
    ss << argv[1];
    ss >> argument;
    if (argument > 0)
      size = argument;
  }
  std::vector<int> v(size);
  std::map<int, int> m;

  std::cout << "inserting " << size << " integers\n";

  auto t_start_vec = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < size; ++i)
    v[i] = i;
  auto t_stop_vec = std::chrono::high_resolution_clock::now();
  auto t_diff_vec =
      std::chrono::duration<double, std::milli>(t_stop_vec - t_start_vec);
  std::cout << "vector took: " << t_diff_vec.count() << "ms\n";

  auto t_start_map = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < size; ++i)
    m[i] = i;
  auto t_stop_map = std::chrono::high_resolution_clock::now();
  auto t_diff_map =
      std::chrono::duration<double, std::milli>(t_stop_map - t_start_map);
  std::cout << "map took: " << t_diff_map.count() << "ms\n";
}

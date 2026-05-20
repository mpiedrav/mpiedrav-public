#include <map>
#include <string>
#include <vector>

int main() {
  std::map<std::string, std::vector<int>> map_str_vec;
  map_str_vec["abc"] = {1, 2, 3};
  map_str_vec["def"] = {4, 5, 6};
  map_str_vec["ghi"] = {7, 8, 9};
  map_str_vec["jkl"] = {10, 11, 12};
  map_str_vec["mno"] = {13, 14, 15};
  map_str_vec["pqr"] = {16, 17, 18};
  map_str_vec["stu"] = {19, 20, 21};
  map_str_vec["vwx"] = {22, 23, 24};
  map_str_vec["yz"] = {25, 26};
}

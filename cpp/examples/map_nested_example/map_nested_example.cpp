#include <map>
#include <vector>

int main() {
  std::vector<std::vector<int>> key1{{0xa0, 0xb0, 0xc0}, {0xd0, 0xe0, 0xf0}};
  std::vector<std::vector<int>> val1{{0xa1, 0xb1, 0xc1}, {0xd1, 0xe1, 0xf1}};
  std::vector<std::vector<int>> key2{{0xaa0, 0xbb0, 0xcc0},
                                     {0xdd0, 0xee0, 0xff0}};
  std::vector<std::vector<int>> val2{{0xaa1, 0xbb1, 0xcc1},
                                     {0xdd1, 0xee1, 0xff1}};
  std::map<std::vector<std::vector<int>>, std::vector<std::vector<int>>>
      map_vec_vec;
  map_vec_vec[key1] = val1;
  map_vec_vec[key2] = val2;
}

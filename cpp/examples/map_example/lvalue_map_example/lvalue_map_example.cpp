// Stroustrup (2013). The C++ Programming Language. pp. 192--193.

#include <iostream>
#include <utility>
#include <vector>

template <typename K, typename V> class Map {
private:
  std::vector<std::pair<K, V>> elem;

public:
  V &operator[](const K &v);

  std::pair<K, V> *begin() { return &elem[0]; }

  std::pair<K, V> *end() { return &elem[0] + elem.size(); }
};

template <typename K, typename V> V &Map<K, V>::operator[](const K &k) {
  for (auto &x : elem)
    if (k == x.first)
      return x.second;
  elem.push_back({k, V{}});
  return elem.back().second;
}

int main() {
  Map<std::string, int> buf;

  for (std::string s; std::cin >> s;)
    ++buf[s];

  for (const auto &x : buf)
    std::cout << x.first << ":" << x.second << '\n';
}

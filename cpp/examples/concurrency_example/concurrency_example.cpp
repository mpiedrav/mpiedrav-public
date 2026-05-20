#include <iostream>
#include <thread>
#include <vector>

void sq(std::vector<double> &v) {
  for (auto &i : v)
    i = i * i;
}

class Squared {
public:
  Squared(std::vector<double> &vv) : v{vv} {}
  void operator()() {
    for (auto &i : v)
      i = i * i;
  }

private:
  std::vector<double> &v;
};

void printv(std::vector<double> &v) {
  for (auto &i : v)
    std::cout << i << " ";
  std::cout << std::endl;
}

int main() {
  std::vector<double> v1{1, 2, 4, 8, 16};
  std::vector<double> v2{1, 3, 9, 27, 81};

  std::cout << "Before threads\n";
  printv(v1);
  printv(v2);

  std::thread t1{sq, std::ref(v1)};
  std::thread t2{Squared{v2}};
  t1.join();
  t2.join();

  std::cout << "After threads\n";
  printv(v1);
  printv(v2);
}

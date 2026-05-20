// Copyright 2026 Marco Piedra Venegas <mpiedrav@proton.me>
// Based on The C++ Programming Language (Stroustrup, 2013), p. 358

#include <cstdlib>
#include <iostream>

template <typename F, typename G> class FinalAction {
private:
  F clean;
  G obj;

public:
  FinalAction(F f, G g) : clean{f}, obj{g} {}
  ~FinalAction() { clean(obj); }
};

template <typename F, typename G> FinalAction<F, G> finally(F f, G g) {
  return FinalAction<F, G>(f, g);
}

template <typename T> void removeBuffer(T buffer) {
  std::cout << "Removing buffer of type " << typeid(buffer).name() << std::endl;
  free(buffer);
  std::cout << "Removed buffer" << std::endl;
}

void testFinalAction(const int n) {
  int16_t *bufferA = reinterpret_cast<int16_t *>(malloc(n * sizeof(int16_t)));
  int64_t *bufferB =
      reinterpret_cast<int64_t *>(malloc(n * n * sizeof(int64_t)));
  {
    auto actionA = finally(removeBuffer<int16_t *>, bufferA);
  }
  {
    auto actionB = finally(removeBuffer<int64_t *>, bufferB);
  }
}

int main(void) { testFinalAction(100); }

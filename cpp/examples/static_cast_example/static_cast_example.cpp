#include <stdexcept>

// Stroustrup (2013), p. 299
template <typename Target, typename Source> Target narrow_cast(Source v) {
  auto r = static_cast<Target>(v);
  if (static_cast<Source>(r) != v)
    throw std::runtime_error("narrow_cast<>() failed");
  return r;
}

int main() { narrow_cast<char>(300); }

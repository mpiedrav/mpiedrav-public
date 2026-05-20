class Number {};

class AlgebraicStructure {
public:
  virtual Number add() = 0;
};

class SemiRing : public AlgebraicStructure {
public:
  SemiRing() {}
  ~SemiRing() {}
};

int main() {
  SemiRing sr;
  sr.add();
}

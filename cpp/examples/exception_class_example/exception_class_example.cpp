#include <iostream>

enum ExceptionType { EA, EB, EC };

class ExceptionA {};

class ExceptionB {};

class ExceptionC {};

void runExceptions(ExceptionType et) {
  try {
    switch (et) {
    case EA:
      throw ExceptionA{};
      break;
    case EB:
      throw ExceptionB{};
      break;
    case EC:
      throw ExceptionC{};
      break;
    default:
      throw;
      break;
    }
  } catch (ExceptionA a) {
    std::cout << "Caught ExceptionA\n";
  } catch (ExceptionB b) {
    std::cout << "Caught ExceptionB\n";
  } catch (ExceptionC c) {
    std::cout << "Caught ExceptionC\n";
  }
}

int main() {
  runExceptions(ExceptionType::EA);
  runExceptions(ExceptionType::EB);
  runExceptions(ExceptionType::EC);
  std::cout << "No exceptions left to throw\n";
}

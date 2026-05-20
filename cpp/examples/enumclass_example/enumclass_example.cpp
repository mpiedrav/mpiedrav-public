#include <iostream>

enum class Day_of_week {
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  Sunday
};

std::ostream &operator<<(std::ostream &os, Day_of_week &day) {
  switch (day) {
  case Day_of_week::Monday:
    return os << "Monday";
  case Day_of_week::Tuesday:
    return os << "Tuesday";
  case Day_of_week::Wednesday:
    return os << "Wednesday";
  case Day_of_week::Thursday:
    return os << "Thursday";
  case Day_of_week::Friday:
    return os << "Friday";
  case Day_of_week::Saturday:
    return os << "Saturday";
  case Day_of_week::Sunday:
    return os << "Sunday";
  }
}

Day_of_week &operator++(Day_of_week &day) {
  switch (day) {
  case Day_of_week::Monday:
    return day = Day_of_week::Tuesday;
  case Day_of_week::Tuesday:
    return day = Day_of_week::Wednesday;
  case Day_of_week::Wednesday:
    return day = Day_of_week::Thursday;
  case Day_of_week::Thursday:
    return day = Day_of_week::Friday;
  case Day_of_week::Friday:
    return day = Day_of_week::Saturday;
  case Day_of_week::Saturday:
    return day = Day_of_week::Sunday;
  case Day_of_week::Sunday:
    return day = Day_of_week::Monday;
  }
}

Day_of_week &operator--(Day_of_week &day) {
  switch (day) {
  case Day_of_week::Monday:
    return day = Day_of_week::Sunday;
  case Day_of_week::Tuesday:
    return day = Day_of_week::Monday;
  case Day_of_week::Wednesday:
    return day = Day_of_week::Tuesday;
  case Day_of_week::Thursday:
    return day = Day_of_week::Wednesday;
  case Day_of_week::Friday:
    return day = Day_of_week::Thursday;
  case Day_of_week::Saturday:
    return day = Day_of_week::Friday;
  case Day_of_week::Sunday:
    return day = Day_of_week::Saturday;
  }
}

int main() {
  Day_of_week day{Day_of_week::Wednesday};

  std::cout << "Current day: " << day << std::endl;

  std::cout << "Adding days:" << std::endl;

  for (size_t index = 0; index < 7; ++index) {
    std::cout << "plus 1 day: " << ++day << std::endl;
  }

  std::cout << "Subtracting days:" << std::endl;

  for (size_t index = 0; index < 7; ++index) {
    std::cout << "minus 1 day: " << --day << std::endl;
  }
}

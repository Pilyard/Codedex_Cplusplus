#include <iostream>

int main() {
  int level = 5;
  if (level >= 1) {
    std::cout << "Bronze: level 1-5";
  } else if (level >= 6) {
    std::cout << "Silver: level 6-10";
  } else if (level >= 11) {
    std::cout << "Gold: level 11-15";
  } else if (level >= 16) {
    std::cout << "Platinum: level 16-20";
  } else if (level) {
    std::cout << "Diamond: level 21-25";
  }
}

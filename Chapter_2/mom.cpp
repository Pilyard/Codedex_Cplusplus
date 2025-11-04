#include <iostream>

int main() {
  double month1;
  double month2;
  double mom;

  std::cout << "First month: ";
  std::cin >> month1;
  std::cout << "Second month: ";
  std::cin >> month2;

  mom = (month2 - month1) / month1 * 100;
  std::cout << mom;
}
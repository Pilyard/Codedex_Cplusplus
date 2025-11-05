#include <iostream>

int main() {
  double temp;
  std::cout << "What is your temperature in fahrenheit: ";
  std::cin >> temp;
  if (temp > 100) {
    std::cout << "You have a fever.";
  } else {
    std::cout << "You do not have a fever.";
  }
}

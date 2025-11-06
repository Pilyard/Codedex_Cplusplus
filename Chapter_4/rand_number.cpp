#include <iostream>

int main() {
  int number;

  while (number != 24) {
    std::cout << "Guess the number: ";
    std::cin >> number;
  }
  std::cout << "You guessed it correct!";
}
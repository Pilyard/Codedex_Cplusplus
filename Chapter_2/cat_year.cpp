#include <iostream>

int main() {
  int cat_year;
  int human_year;
  std::cout << "Welcome to the Cat Years program! This only works for cats older than 2 years old.\n";
  std::cout << "Enter your cat's age: \n";
  std::cin >> cat_year;
  human_year = ((cat_year - 2) * 4) + 24;
  std::cout << "Your cat is " << human_year << " years old in human years."; 
}

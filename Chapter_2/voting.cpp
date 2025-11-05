#include <iostream>

int main() {
  int age = 15;
  bool citizen = true;
  bool registered = true;

  if (age >= 18 && citizen == true && registered == true) {
    std::cout << "You can vote!";
  }
  else if (age < 18) {
    std::cout << "You are not old enough to vote.";
  }
  else if (citizen == false) {
    std::cout << "You are not eligible to vote.";
  }
  else if (registered == false) {
    std::cout << "You need to register first.";
  }
  else {
    std::cout << "You have not met the requirements.";
  }
}

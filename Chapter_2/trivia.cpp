#include <iostream>

int main() {
  int score = 0;
  int q1_answer;
  std::string q2_answer;
  
  std::cout << "Q1) How many dots are on a pair of dice?\n";
  std::cout << "\n1) 25\n2) 23\n3) 21\n4) 20\nType your answer: ";
  std::cin >> q1_answer;

  if (q1_answer == 3) {
    std::cout << "Correctly!";
    score = 1;
  }
  else {
    std::cout << "Wrong answer.";
  }

  std::cout << "\nQ2) What food never spoils?\n";
  std::cout << "Type your answer: ";
  std::cin >> q2_answer;

  if (q2_answer == "Honey") {
    std::cout << "Correctly! Honey never spoils.";
    score = 2;
  }
  else {
    std::cout << "Wrong answer.";
  }
  std::cout << "\nYour score is " << score << ".";
}

#include <iostream>
#include <cstdlib>

int main(){
    srand(time(NULL));
    int phrases;
    phrases = std::rand() % 5;

    if (phrases == 1) {
        std::cout << "Don't pursue happiness – create it.";
    } 
    else if (phrases == 2) {
        std::cout << "All things are difficult before they are easy.";
    }
    else if (phrases == 3) {
        std::cout << "The early bird gets the worm, but the second mouse gets the cheese.";
    }
    else if (phrases == 4) {
        std::cout << "Someone in your life needs a letter from you.";
    }
    else if (phrases == 5) {
        std::cout << "The fortune you search for is in another cookie.";
    }
    else if (phrases == 0) {
        std::cout << "Help! I'm being held prisoner in a Chinese bakery!";
    }
}

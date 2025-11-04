#include <iostream>
#include <locale.h>

/*Key Ouija board rules include never playing alone, always saying "goodbye" 
to close the session, treating it with respect, and never asking questions 
about death or other dangerous topics. Other guidelines suggest avoiding use 
when ill or emotional, not using it in a graveyard, and being prepared to end the 
session properly by moving the planchette to "goodbye". 
*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    std::cout << "--------------------\n";
    std::cout << "|   X YES   X NO   |\n";
    std::cout << "|                  |\n";
    std::cout << "|   ABCDEFGHIJKLM  |\n";
    std::cout << "|   NOPQRSTUVWXYZ  |\n";
    std::cout << "|                  |\n";
    std::cout << "|     1234567890   |\n";
    std::cout << "--------------------";
 }

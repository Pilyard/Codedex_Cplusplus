#include <iostream>
#include <locale.h> //Library for dates, accentuation of languages;

int main(){
    setlocale(LC_ALL, "Portuguese");
    std::cout << "Olá!\n";
    std::cout << "Hola!\n";
    std::cout << "Hello!";
}

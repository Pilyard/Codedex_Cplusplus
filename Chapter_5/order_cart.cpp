#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> cart = {"Pepperoni Pizza", "Chocolate Cake", "Milk"};
    cart.push_back("Grapes");
    cart.pop_back();
}
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};
    int total_sum = 0;
    int total_odd_pairs = 1;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            total_sum += numbers[i];
        }
        else if (numbers[i] % 2 == 1) {
            total_odd_pairs = total_odd_pairs * numbers[i];
        }
    }
    std::cout << "The sum of even numbers: " << total_sum << "\n";
    std::cout << "The product of odd numbers: " << total_odd_pairs;
}

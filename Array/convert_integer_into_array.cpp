#include <iostream>
#include <vector>

int main() {
    int num = 12345; // Replace with the integer you want to convert
    std::vector<int> digits;

    while (num > 0) {
        int digit = num % 10;
        digits.insert(digits.begin(), digit); // Insert at the beginning to maintain correct order
        num /= 10;
    }

    // Print the array of digits
    for (int digit : digits) {
        std::cout << digit << " ";
    }

    return 0;
}

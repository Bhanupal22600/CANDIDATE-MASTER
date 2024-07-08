#include <iostream>
#include <cmath>

int countWays(int n) {
    if (n <= 0) return 0; // No valid numbers with non-positive number of digits

    int count = 0;
    int lower_bound = pow(10, n - 1); // Smallest n-digit number
    int upper_bound = pow(10, n) - 1; // Largest n-digit number

    for (int i = lower_bound; i <= upper_bound; ++i) {
        int num = i;
        while (num > 0) {
            int lastdigit = num % 10;
            if (lastdigit == 7) {
                ++count;
            }
            num /= 10;
        }
    }
    return count;
}

int main() {
    int n = 3; // Example: Count occurrences of '7' in numbers with 2 digits
    std::cout << "Number of occurrences of '7' in numbers with " << n << " digits: " << countWays(n) << std::endl;
    return 0;
}
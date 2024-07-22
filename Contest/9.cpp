#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Remove the element at position 2 (third element, which is 3)
    vec.erase(vec.begin() + 2);

    // Print the updated vector
    for (int i : vec) {
        std::cout << i << " ";
    }
    return 0;
}
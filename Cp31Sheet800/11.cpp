#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<int> findDistinctDuplicates(int N, const std::vector<int>& arr) {
    if (N == 0 || arr.empty()) {
        return {-1};
    }
    
    // Step 1: Count frequencies of each element using unordered_map
    std::unordered_map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }
    
    // Step 2: Collect all elements with frequency > 1
    std::vector<int> duplicates;
    for (const auto& entry : frequencyMap) {
        if (entry.second > 1) {
            duplicates.push_back(entry.first);
        }
    }
    
    // Step 3: Sort the list of duplicates
    std::sort(duplicates.begin(), duplicates.end());
    
    // Step 4: Prepare the result
    if (duplicates.empty()) {
        return {-1};
    } else {
        return duplicates;
    }
}

int main() {
    int N;
    
    // Input number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> N;
    
    // Input the array elements
    std::vector<int> arr(N);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    
    // Find and print the distinct duplicates
    std::vector<int> result = findDistinctDuplicates(N, arr);
    if (result.size() == 1 && result[0] == -1) {
        std::cout << "-1" << std::endl;
    } else {
        std::cout << "Result: ";
        for (int num : result) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

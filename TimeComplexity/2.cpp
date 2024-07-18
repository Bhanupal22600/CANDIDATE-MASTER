//Given an array of size n+1 consisting of integers from 1 to n.One of the elements is duplicate element.
//Method-2
#include <iostream>
#include <vector>

int findDuplicate(const std::vector<int>& nums) {
    int n = nums.size() - 1; // Given that array size is n+1
    std::vector<int> count(n + 1, 0); // Initialize a count array of size n+1
    
    for (int num : nums) {
        if (count[num] == 1) {
            return num; // Found the duplicate element
        } else {
            count[num] = 1; // Mark the element as visited
        }
    }
    
    return -1; // In case no duplicate is found (not expected per problem statement)
}

int main() {
    // Example usage
    std::vector<int> nums = {6,3,2,4,1,7,1,5}; // Example array with one duplicate
    int duplicate = findDuplicate(nums);
    
    if (duplicate != -1) {
        std::cout << "Duplicate element: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicate found!" << std::endl;
    }
    
    return 0;
}
//good method saves time 
//but not space -memory limit exceeded
//in space jo given space hota hai usko count nhi krte hm
//jo extra nbanate hai hm vo count hota hai

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the largest element and the elements defeated by it
pair<int, vector<int>> findLargest(const vector<int>& arr) {
    int n = arr.size();
    vector<int> indices(n);
    for (int i = 0; i < n; i++) indices[i] = i;

    vector<int> defeatedElements;
    while (indices.size() > 1) {
        vector<int> nextRound;
        for (int i = 0; i < indices.size(); i += 2) {
            if (arr[indices[i]] > arr[indices[i + 1]]) {
                nextRound.push_back(indices[i]);
                defeatedElements.push_back(indices[i + 1]);
            } else {
                nextRound.push_back(indices[i + 1]);
                defeatedElements.push_back(indices[i]);
            }
        }
        indices = nextRound;
    }
    return {indices[0], defeatedElements};
}

// Function to find the second largest element
int findSecondLargest(const vector<int>& arr) {
    // Get the largest element index and the defeated elements
    pair<int, vector<int>> result = findLargest(arr);
    int largestIdx = result.first;
    vector<int> defeatedElements = result.second;

    // Find the maximum among the defeated elements
    int secondLargest = arr[defeatedElements[0]];
    for (int i = 1; i < defeatedElements.size(); i++) {
        secondLargest = max(secondLargest, arr[defeatedElements[i]]);
    }
    return secondLargest;
}

// Driver Code
int main() {
    vector<int> arr = {5, 3, 8, 2, 4, 7, 9, 6};

    int secondLargest = findSecondLargest(arr);
    cout << "The second largest element is: " << secondLargest << endl;

    return 0;
}

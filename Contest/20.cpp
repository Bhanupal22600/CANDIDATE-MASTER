#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calc() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (arr.size() > 1) {
        // Find the index of the smallest pair of adjacent elements
        int min_index = 0;
        for (int i = 1; i < arr.size() - 1; ++i) {
            if (arr[i] + arr[i + 1] < arr[min_index] + arr[min_index + 1]) {
                min_index = i;
            }
        }

        // Remove the pair
        arr.erase(arr.begin() + min_index, arr.begin() + min_index + 2);
    }

    return arr[0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << calc() << endl;
    }
    return 0;
}
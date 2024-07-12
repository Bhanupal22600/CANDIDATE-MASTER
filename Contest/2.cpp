#include <iostream>
#include <vector>
using namespace std;

int calc(int n, int k, vector<int>& v) {
    int operations = 0;
    
    // Step 1: Transform all pieces larger than 1 into pieces of 1
    for (int i = 0; i < k; ++i) {
        while (v[i] > 1) {
            v[i]--;
            v.push_back(1);
            operations++;
        }
    }
    
    // Step 2: Calculate the total number of pieces of length 1
    int countOfOnes = v.size();
    
    // Step 3: Merge pieces of length 1 until only one piece remains
    while (countOfOnes > 1) {
        countOfOnes--; // Each merge reduces the number of pieces by 1
        operations++;
    }
    
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        for (int j = 0; j < k; ++j) {
            cin >> v[j];
        }
        cout << calc(n, k, v) << endl;
    }
    return 0;
}

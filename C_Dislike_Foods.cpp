#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long min_gloves_to_pick(int n, int k, vector<int>& lefts, vector<int>& rights) {
    vector<long long> total_pairs, total_wasted;
    
    // Calculate the possible matching pairs and wasted gloves for each color
    for (int i = 0; i < n; ++i) {
        int left = lefts[i];
        int right = rights[i];
        total_pairs.push_back(min(left, right));  // Matching pairs from this color
        total_wasted.push_back(abs(left - right));  // Wasted gloves (either too many lefts or rights)
    }

    // Sort the matching pairs in descending order
    sort(total_pairs.rbegin(), total_pairs.rend());
    sort(total_wasted.rbegin(), total_wasted.rend());

    long long total_picked = 0;

    // First, pick the maximum number of pairs (one from each of `k` different colors)
    for (int i = 0; i < k; ++i) {
        total_picked += total_pairs[i];
    }

    // Now we handle the wasted gloves
    for (int i = k; i < n; ++i) {
        total_picked += total_wasted[i];
    }

    return total_picked;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> lefts(n), rights(n);
        
        // Input the number of left gloves for each color
        for (int i = 0; i < n; ++i) {
            cin >> lefts[i];
        }

        // Input the number of right gloves for each color
        for (int i = 0; i < n; ++i) {
            cin >> rights[i];
        }

        // Calculate and output the result for the current test case
        cout << min_gloves_to_pick(n, k, lefts, rights) << endl;
    }

    return 0;
}

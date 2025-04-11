#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Memoization table
vector<vector<int>> memo;

// Recursive function to check if sum can be formed
bool isSubsetSum(int i, int sum, const vector<int>& a) {
    if (sum == 0) return true;
    if (i == 0) return a[0] == sum;

    if (memo[i][sum] != -1) return memo[i][sum];

    bool notTake = isSubsetSum(i - 1, sum, a);
    bool take = false;
    if (sum >= a[i])
        take = isSubsetSum(i - 1, sum - a[i], a);

    return memo[i][sum] = take || notTake;
}

// To reconstruct the subset
void getSubset(int i, int sum, const vector<int>& a, vector<int>& subset) {
    if (sum == 0) return;
    if (i == 0) {
        if (a[0] == sum) subset.push_back(a[0]);
        return;
    }

    if (sum >= a[i] && isSubsetSum(i - 1, sum - a[i], a)) {
        subset.push_back(a[i]);
        getSubset(i - 1, sum - a[i], a, subset);
    } else {
        getSubset(i - 1, sum, a, subset);
    }
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // Initialize memo table with -1 (uncomputed)
    memo.assign(n, vector<int>(target + 1, -1));

    if (isSubsetSum(n - 1, target, a)) {
        cout << "YES\n";
        vector<int> subset;
        getSubset(n - 1, target, a, subset);
        for (int x : subset) cout << x << " ";
        cout << endl;
    } else {
        cout << "NO\n";
    }

    return 0;
}

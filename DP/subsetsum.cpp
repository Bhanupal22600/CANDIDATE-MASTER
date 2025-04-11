#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // dp[i][j] = true if we can get sum 'j' using first 'i' elements
    vector<vector<bool>> dp(n+1, vector<bool>(target+1, false));

    // Base case: sum 0 is always possible (by taking no elements)
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // Fill the DP table
    for (int i = 1; i <= n; ++i) {
        for (int sum = 1; sum <= target; ++sum) {
            if (sum < a[i-1]) {
                dp[i][sum] = dp[i-1][sum];
            } else {
                dp[i][sum] = dp[i-1][sum] || dp[i-1][sum - a[i-1]];
            }
        }
    }

    // Result: is it possible to get sum 'target' using all 'n' elements
    if (dp[n][target]) {
        cout << "YES\n";

        // Reconstruct subset from dp[n][target]
        vector<int> subset;
        int i = n, sum = target;
        while (i > 0 && sum > 0) {
            if (dp[i][sum] && !dp[i-1][sum]) {
                subset.push_back(a[i-1]);
                sum -= a[i-1];
            }
            i--;
        }

        // Output subset
        for (int x : subset) cout << x << " ";
        cout << endl;
    } else {
        cout << "NO\n";
    }
}

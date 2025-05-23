#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

vector<vector<int>> dp;
int k;

int f(int n,int t) {
    if (n == 0 && t==0) return 1;
    if (n == 0 || t<0) return 0;
    if (dp[n][t] != -1) return dp[n][t];
    int ways = 0;
    for (int i = 1; i <= k; i++) {
        ways = (ways + f((n - 1),t-i)) % MOD;
    }
    return dp[n][t] = ways;
}
int main() {
    int n,t;
    cin >> n>>k>>t;
    dp.resize(n + 1, vector<int>(t + 1, -1));
    cout << f(n,t) << endl;
    return 0;
}





class Solution {
    public:
        int numRollsToTarget(int n, int k, int target) {
            const int MOD = 1e9 + 7;
            vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
            dp[0][0] = 1;  // Base case: 0 dice to make sum 0
            
            for (int dice = 1; dice <= n; ++dice) {
                for (int t = 1; t <= target; ++t) {
                    for (int face = 1; face <= k; ++face) {
                        if (t - face >= 0) {
                            dp[dice][t] = (dp[dice][t] + dp[dice - 1][t - face]) % MOD;
                        }
                    }
                }
            }
            
            return dp[n][target];
        }
    };
    

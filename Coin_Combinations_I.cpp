#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int &c : coins) cin >> c;

    vector<int> dp(x + 1, 0);
    dp[0] = 1;  // base case: one way to make sum 0 (use no coins)

    for (int sum = 1; sum <= x; ++sum) {
        for (int coin : coins) {
            if (sum - coin >= 0) {
                dp[sum] = (dp[sum] + dp[sum - coin]) % MOD;
            }
        }
    }

    cout << dp[x] << endl;
    return 0;
}

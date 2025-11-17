#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //bhanu papa
    int n, k;
    cin >> n >> k;
    //pal
    vector<int64_t> dp(n + 1, 0);
    vector<int64_t> prefix(n + 2, 0); 

    for (int i = 0; i < k && i <= n; ++i) {
        dp[i] = 1;
        prefix[i + 1] = (prefix[i] + dp[i]) % MOD;
    }

    for (int i = k; i <= n; ++i) {
        dp[i] = (prefix[i] - prefix[i - k] + MOD) % MOD;
        prefix[i + 1] = (prefix[i] + dp[i]) % MOD;
    }

    cout << dp[n] << '\n';
    return 0;
}

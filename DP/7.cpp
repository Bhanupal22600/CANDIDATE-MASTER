#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

vector<int> dp;

int f(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (dp[n] != -1) return dp[n];
    int ways = 0;
    for (int i = 1; i <= 6; i++) {
        ways = (ways + f(n - i)) % MOD;
    }
    return dp[n] = ways;
}
int main() {
    int n;
    cin >> n;
    dp.resize(n + 1, -1);
    cout << f(n) << endl;
    return 0;
}

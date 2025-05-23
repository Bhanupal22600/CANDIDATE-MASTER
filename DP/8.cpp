//minimize coins
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector<int> dp;
int n;
vector<int> v;

int f(int k) {
    if (k == 0) return 0;
    if (k < 0) return INF;
    if (dp[k] != -1) return dp[k];

    int res = INF;
    for (int i = 0; i < n; i++) {
        res = min(res, f(k - v[i]) + 1);
    }
    return dp[k] = res;
}

int main() {
    int k;
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    dp.resize(k + 1, -1);
    int ans = f(k);
    cout << (ans >= INF ? -1 : ans) << endl;
    return 0;
}

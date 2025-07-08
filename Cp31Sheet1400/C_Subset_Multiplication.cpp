#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    long long x = 1;

    for (int i = n - 2; i >= 0; --i) {
        if (b[i + 1] % b[i] != 0) {
            long long ratio = b[i] / __gcd(b[i], b[i + 1]);
            x = lcm(x, ratio);
        }
    }

    cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

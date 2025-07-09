#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000009;

void calc() {
    int n, k;
    cin >> n >> k;

    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    long long x = (1LL << k) / 2;
    long long ans = n;
    x--;
    for (long long i = 1; i <= x; i++) {
        ans = (ans + ((n % MOD) * ((n - 1) % MOD)) % MOD) % MOD;
    }

    cout << ans << endl;
}
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

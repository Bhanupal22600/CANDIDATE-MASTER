#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int power(int base, int exp) {
    int result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (1LL * result * base) % MOD;
        base = (1LL * base * base) % MOD;
        exp /= 2;
    }
    return result;
}

void calc() {
    int n;
    cin >> n;
    vector<int> p(n), q(n), r(n);
    
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    for (int i = 0; i < n; i++) {
        int maxm = 0;
        for (int j = 0; j <= i; j++) {
            int val = (power(2, p[j]) + power(2, q[i - j])) % MOD;
            maxm = max(maxm, val);
        }
        r[i] = maxm;
    }

    for (int i = 0; i < n; i++) {
        cout << r[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

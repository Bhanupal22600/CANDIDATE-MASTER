#include <bits/stdc++.h>
using namespace std;

bool isValid(long long a, long long b) {
    return (a & b) == (a ^ b);
}

void solve() {
    long long n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n == 1) {
        cout << l << endl;
        return;
    }

    long long best = -1;

    for (long long a = l; a <= min(r, l + 1000); ++a) {
        for (long long b = a; b <= min(r, a + 1000); ++b) {
            if (isValid(a, b)) {
                vector<long long> res;
                res.push_back(a);
                res.push_back(b);
                while (res.size() < n) res.push_back(a);
                cout << res[k - 1] << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

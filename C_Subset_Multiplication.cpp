#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    long long x = 1;

    for (int i = n - 2; i >= 0; --i) {
        if (b[i + 1] % b[i] != 0) {
            for (long long d = x; d * d <= b[i]; d += x) {
                if (b[i] % d != 0) continue;

                long long val1 = b[i] / d;
                if (b[i + 1] % val1 == 0) {
                    x = d;
                    b[i] = val1;
                    break;
                }

                long long d2 = b[i] / d;
                if (d2 != d) {
                    long long val2 = b[i] / d2;
                    if (b[i + 1] % val2 == 0) {
                        x = d2;
                        b[i] = val2;
                        break;
                    }
                }
            }

            // Fallback (if no divisor worked): set b[i] = 1
            if (b[i + 1] % 1 == 0 && b[i] > 1 && b[i + 1] % b[i] != 0) {
                x = b[i];
                b[i] = 1;
            }
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

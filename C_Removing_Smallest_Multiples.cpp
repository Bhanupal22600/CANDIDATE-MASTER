#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    string st;
    cin >> st;

    vector<set<int>> v;
    for (int i = 1; i <= n; i++) {
        set<int> s;
        for (int j = i; j <= n; j += i) {
            s.insert(j);
        }
        v.push_back(s); // v[i - 1] corresponds to i
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (st[i] == '0') {
            int val = i + 1;
            int min_cost = INT_MAX;

            // Try all divisors of val
            for (int d = 1; d * d <= val; d++) {
                if (val % d == 0) {
                    for (int j : {d, val / d}) {
                        if (j <= n && v[j - 1].count(val) && *v[j - 1].begin() == val) {
                            min_cost = min(min_cost, j);
                        }
                    }
                }
            }

            if (min_cost != INT_MAX) {
                v[min_cost - 1].erase(val);
                ans += min_cost;
            }
        }
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

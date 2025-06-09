#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    unordered_set<int> seen;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        if (seen.count(v[i] + k) || seen.count(v[i] - k)) {
            cout << "YES\n";
            return;
        }
        seen.insert(v[i]);
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        calc();
    }

    return 0;
}

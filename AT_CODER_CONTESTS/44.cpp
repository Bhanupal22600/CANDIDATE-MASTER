#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> mp(m);
    for (int i = 0; i < m; i++) {
        cin >> mp[i].first >> mp[i].second;
    }

    vector<int> u(n + 2, 0); // up to n+1 for boundary safety

    // Use prefix sum trick
    for (auto el : mp) {
        int l = el.first;
        int r = el.second;
        if (l <= n)
            u[l]++;
        if (r + 1 <= n)
            u[r + 1]--;
    }
    // Accumulate
    for (int i = 1; i <= n; i++) {
        u[i] += u[i - 1];
    }
    // Find minimum in the range [1, n]
    int minm = INT_MAX;
    for (int i = 1; i <= n; i++) {
        minm = min(minm, u[i]);
    }

    cout << minm << endl;
}

int main() {
    calc();
    return 0;
}

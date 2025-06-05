#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int, int>> e;
    vector<pair<int, int>> o;
    int maxm = -1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {  
            e.push_back({v[i], i + 1});
        } else {
            o.push_back({v[i], i + 1});
        }
        if (v[i] == 1) {
            maxm = i + 1;
        }
    }
    if (v[n - 1] == 1) {
        cout << 2 * n << endl;
        return;  
    }

    for (int i = o.size() - 1; i >= 0; i--) {
        for (int j = o.size() - 1; j >= 0; j--) {
            if (__gcd(o[i].first, o[j].first) == 1) {
                maxm = max(maxm, o[i].second + o[j].second);
            }
        }
    }

    for (int i = o.size() - 1; i >= 0; i--) {
        for (int j = e.size() - 1; j >= 0; j--) {
            if (__gcd(o[i].first, e[j].first) == 1) {
                maxm = max(maxm, o[i].second + e[j].second);
            }
        }
    }

    cout << maxm << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

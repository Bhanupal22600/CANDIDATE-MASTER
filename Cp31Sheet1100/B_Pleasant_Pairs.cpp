#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n); 
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[i] = {a, i + 1}; 
    }
    sort(v.begin(), v.end()); 
    int cn = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long prod = 1LL * v[i].first * v[j].first;
            if (prod > 2LL * n) break;
            if (prod == v[i].second + v[j].second) cn++;
        }
    }
    cout << cn << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

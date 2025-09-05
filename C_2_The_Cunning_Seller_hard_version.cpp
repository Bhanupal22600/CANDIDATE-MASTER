#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

i64 pw[30];

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a;
    while (n) {
        a.push_back(n % 3);
        k -= n % 3;
        n /= 3;
    }
    
    if (k < 0) {
        cout << -1 << "\n";
        return;
    }
    
    i64 ans = 0;
    
    for (int i = (int)a.size() - 1; i > 0; i--) {
        int t = min(a[i], k / 2);
        a[i] -= t;
        a[i - 1] += t * 3;
        k -= 2 * t;
    }
    
    for (int x = 0; x < (int)a.size(); x++) {
        ans += 1LL * a[x] * (pw[x + 1] + 1LL * x * pw[x] / 3);
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pw[0] = 1;
    for (int i = 1; i < 30; i++) {
        pw[i] = pw[i - 1] * 3;
    }
    
    int T;
    cin >> T;
    
    while (T--) {
        solve();
    }
    
    return 0;
}

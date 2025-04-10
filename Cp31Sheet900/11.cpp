#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        while (a[i] < 2 || (i > 0 && a[i] % a[i - 1] == 0)) {
            a[i]++;
        }
        std::cout << a[i] << " \n"[i == n - 1];
    }
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
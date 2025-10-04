#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::string s;
    std::cin >> s;
    
    int x = 1;
    
    std::set<int> S;
    for (int i = 0; i < m; i++) {
        int a;
        std::cin >> a;
        S.insert(a);
    }
    
    for (int i = 0, j = 0; i < n; i++) {
        if (s[i] == 'A') {
            x++;
        } else {
            x++;
            while (S.count(x)) {
                x++;
            }
        }
        S.insert(x);
        if (s[i] == 'B') {
            while (S.count(x)) {
                x++;
            }
        }
    }
    
    std::vector ans(S.begin(), S.end());
    std::cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " \n"[i == ans.size() - 1];
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
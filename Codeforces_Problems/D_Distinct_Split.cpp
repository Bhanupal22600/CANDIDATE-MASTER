#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    std::array<int, 26> cntl{}, cntr{};
    int res = 0;
    for (auto c : s) {
        res += !cntr[c - 'a']++;
    }
    int ans = res;
    for (auto c : s) {
        res += !cntl[c - 'a']++;
        res -= !--cntr[c - 'a'];
        ans = std::max(ans, res);
    }
    std::cout << ans << "\n";
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
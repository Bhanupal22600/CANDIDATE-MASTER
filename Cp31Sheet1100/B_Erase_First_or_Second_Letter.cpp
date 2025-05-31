#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> c;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      c.insert(s[i]);
      ans += (int) c.size();
    }
    cout << ans << '\n';
  }
  return 0;
}


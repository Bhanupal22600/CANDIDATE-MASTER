#include <bits/stdc++.h>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    --k;
    auto b = a;
    sort(b.begin(), b.end());
    vector<int> c;
    for (int i = 0; i < n; i++) {
      if (a[i] <= b[k]) {
        c.push_back(a[i]);
      }
    }
    int l = 0, r = int(c.size());
    int rm = 0;
    while (l < r) {
      if (c[l] != c[r - 1]) {
        if (c[l] == b[k]) {
          l += 1;
          rm += 1;
        } else {
          if (c[r - 1] == b[k]) {
            r -= 1;
            rm += 1;
          } else {
            rm = n + 1;
            break;
          }
        }
      } else {
        l += 1;
        r -= 1;
      }
    }
    if (int(c.size()) - rm >= k) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
      cin >> l[i];
    }
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
      cin >> r[i];
    }
    vector<int> a(n);
    int64_t ans = 0;
    for (int i = 0; i < n; i++) {
      ans += max(l[i], r[i]);
      a[i] = min(l[i], r[i]);
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < k - 1; i++) {
      ans += a[i];
    }
    cout << ans + 1 << '\n';
  }
  return 0;
}
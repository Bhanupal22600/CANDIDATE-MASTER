#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    long long k = 2;
    while (true) {
      vector<long long> b(n);
      for (int i = 0; i < n; i++) {
        b[i] = a[i] % k;
      }
      sort(b.begin(), b.end());
      if (b[0] != b[n - 1]) {
        cout << k << '\n';
        break;
      }
      k *= 2;
    }
  }
  return 0;
}
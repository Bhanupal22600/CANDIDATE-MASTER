#include <iostream>
#include<vector>
using namespace std;
void calc() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = n + 1;
    int cur = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && cur + a[j] <= s) {
            cur += a[j];
            j++;
        }
        if (cur == s) {
            ans = min(ans, n - (j - i));
        }
        cur -= a[i];
    }
    
    if (ans > n) {
        ans = -1;
    }
    cout << ans << "\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
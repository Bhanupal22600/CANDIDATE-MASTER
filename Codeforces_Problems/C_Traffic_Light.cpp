#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    
    if (c == 'g') {
        cout << 0 << endl;
        return;
    }

    string t = s + s;
    vector<int> next_g(2 * n, -1);
    int last_g = -1;
    for (int i = 2 * n - 1; i >= 0; i--) {
        if (t[i] == 'g') last_g = i;
        next_g[i] = last_g;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            if (next_g[i] != -1) {
                ans = max(ans, next_g[i] - i);
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long c = 1;
    while (k--) {
        c *= 10;
    }

    __int128 ans = 1;
    long long i = 0;
    while (i < n) {
        ans *= v[i];
        if (ans >= c) ans = 1;
        i++;
    }

    // Print __int128 manually
    string res = "";
    if (ans == 0) res = "0";
    else {
        while (ans) {
            res += (char)('0' + ans % 10);
            ans /= 10;
        }
        reverse(res.begin(), res.end());
    }

    cout << res << endl;
}

int main() {
    int t = 1;
    while (t--) {
        calc();
    }
    return 0;
}

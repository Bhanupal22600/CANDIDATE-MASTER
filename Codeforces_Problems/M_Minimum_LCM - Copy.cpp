#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << " " << n / 2 << '\n';
        return;
    }

    for (long long i = 3; i * i <= n; ++i) {
        if (n % i == 0) {
            long long a = n / i;
            cout << a << " " << n - a << '\n';
            return;
        }
    }

    cout << 1 << " " << n - 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

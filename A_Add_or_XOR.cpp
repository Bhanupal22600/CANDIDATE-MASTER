#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b) {
        cout << 0 << '\n';
        return;
    }

    if (a < b) {
        int diff = b - a;

        if (x <= y) {
            cout << 1LL * diff * x << '\n';
            return;
        }
        long long cost = 0;

        if (a % 2 == 0) {
            a ^= 1;
            cost += y;
            diff--;
        }
        int usePairs = diff / 2;
        int useAdd = diff % 2;

        cost += 1LL * usePairs * (x + y) + 1LL * useAdd * x;
        cout << cost << '\n';
        return;
    }

    if (a == b + 1 && a % 2 == 1) {
        cout << y << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        calc();
    }

    return 0;
}

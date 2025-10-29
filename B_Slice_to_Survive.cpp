#include <bits/stdc++.h>
using namespace std;

long long getPowerLevel(int n) {
    return (int)ceil(log2(n));
}

void calc() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    long long maxm = 0;
    long long k = 0, l = 0;

    // Left cut
    if (((b - 1) * n) > maxm) {
        k = m - b + 1;
        l = n;
        maxm = (b - 1) * n;
    }
    // Right cut
    if (((m - b) * n) > maxm) {
        k = b;
        l = n;
        maxm = (m - b) * n;
    }
    long long h=getPowerLevel(k) + getPowerLevel(l) + 1;
    
    // Top cut
    long long maxm2 = 0;
    long long k2 = 0, l2 = 0;
    if (((a - 1) * m) > maxm2) {
        k2 = m;
        l2 = n - a + 1;
        maxm2 = (a - 1) * m;
    }
    // Bottom cut
    if (((n - a) * m) > maxm2) {
        k2 = m;
        l2 = a;
        maxm2 = (n - a) * m;
    }
    long long z=getPowerLevel(k2) + getPowerLevel(l2) + 1;
    cout << min(z,h )<< endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

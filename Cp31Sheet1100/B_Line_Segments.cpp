#include <bits/stdc++.h>
using namespace std;

long long euclideanDistanceSquared(long long x1, long long y1, long long x2, long long y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

void calc() {
    long long n;
    cin >> n;
    
    long long px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    
    vector<long long> v(n);
    long long s = 0;
    long long maxm = 0;
    
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
        maxm = max(maxm, v[i]);
    }
    long long distSquared = euclideanDistanceSquared(px, py, qx, qy);
    long long upperBound = s * s;
    long long lowerBound = max(0LL,  2 * maxm-s);
    lowerBound = lowerBound * lowerBound;
    
    if (distSquared >= lowerBound && distSquared <= upperBound) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

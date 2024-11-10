#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<long long> g(long long n, long long b, long long c) {
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        a[i] = b * i + c;
    }
    return a;
}

long long m(const vector<long long>& a, long long n) {
    unordered_set<long long> s(a.begin(), a.end());
    for (long long i = 0; i < n; i++) {
        if (s.find(i) == s.end()) {
            return i;
        }
    }
    return n;
}

bool p(const vector<long long>& a, long long n) {
    vector<bool> s(n, false);
    for (long long x : a) {
        if (x < 0 || x >= n || s[x]) return false;
        s[x] = true;
    }
    return true;
}

long long f(long long n, long long b, long long c) {
    if (n > 1e5) return -1;

    vector<long long> a = g(n, b, c);
    
    if (p(a, n)) {
        return 0;
    }
    
    long long o = 0;
    while (!p(a, n)) {
        long long x = m(a, n);
        long long i = max_element(a.begin(), a.end()) - a.begin();
        a[i] = x;
        o++;
        
        if (o > n) return -1;
    }
    return o;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, b, c;
        cin >> n >> b >> c;
        cout << f(n, b, c) << endl;
    }
    return 0;
}

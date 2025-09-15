#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for(size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long total = 0;
    long long minOdd = LLONG_MAX;
    bool hasOdd = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];  
        if (a[i] % 2 == 1) {
            hasOdd = true;
            minOdd = min(minOdd, a[i]);
        }
    }

    if (!hasOdd) {
        cout << 0 << "\n";
    } else {
        cout << total - minOdd << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

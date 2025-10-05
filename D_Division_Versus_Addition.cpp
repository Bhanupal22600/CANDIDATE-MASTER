#include <bits/stdc++.h>
using namespace std;

// ---------- Debug Template ----------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if (i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}
// ------------------------------------

int calc2(int x) {
    int i = 2;
    while (i <= x) {
        if (i == x) return 1;
        i *= 2;
    }
    return 0;
}

int calc1(int x) {
    if (x % 2) x--; 
    int i = 1;
    int k = 2;
    while (x > k) {
        i++;
        k *= 2;
    }
    return i;
}

void calc() {
    long long n, q;
    cin >> n >> q;

    vector<long long> v(n);
    vector<long long> u(n);
    vector<long long> w(n, 0);

    for (long long i = 0; i < n; ++i) {
        cin >> v[i];
        u[i] = calc1(v[i]);
        if (v[i] % 2) { 
            
            w[i] = calc2(v[i] - 1);
        }
    }

    vector<long long> p(n + 1, 0), s(n + 1, 0);
    for (long long i = 0; i < n; ++i) {
        p[i + 1] = p[i] + u[i];
        s[i + 1] = s[i] + w[i];
    }
    for (long long i = 0; i < q; ++i) {
        long long a, b;
        cin >> a >> b;
        a--;
        long long base = p[b] - p[a];
        long long bonus = (s[b] - s[a]) / 2;

        cout << base + bonus << "\n";
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

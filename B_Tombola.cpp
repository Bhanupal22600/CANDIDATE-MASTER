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

static const long long MOD = 998244353;

void calc() {

        long long N, M;
        cin >> N >> M;
        if (N == 1) {
            cout << (M + 1) % MOD << '\n';
            return;
        }
        long long p = 1LL << (63 - __builtin_clzll(M));
        long long ans = 2 * (M - p + 1);
        if (ans < 0) ans = 0;
        cout << ans % MOD << '\n';

    return ;
}

int main(){
    
    int t;
    cin >> t;

    while (t--) {
        calc();
    }
}

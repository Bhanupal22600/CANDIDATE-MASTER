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

static inline vector<int> buildRunLen(const string& u){
    int n = (int)u.size();
    string s = u + u;
    int m = 2 * n;
    vector<int> nextB(m, m);
    int last = m;
    for(int i = m - 1; i >= 0; --i){
        if(s[i] == 'B') last = i;
        nextB[i] = last;
    }
    vector<int> run(n, 0);
    for(int i = 0; i < n; ++i){
        if(u[i] == 'B') run[i] = 0;
        else {
            int nb = nextB[i];
            run[i] = (nb < i + n) ? (nb - i) : n;
        }
    }
    return run;
}

static inline long long solve_one(long long a, const string& u, const vector<int>& run, bool hasB){
    if(a <= 0) return 0;
    if(!hasB) return a;
    const int n = (int)u.size();
    long long t = 0;
    int j = 0;
    while(a > 0){
        if(u[j] == 'B'){
            a >>= 1;
            ++t;
            if(a == 0) break;
            ++j; if(j == n) j = 0;
        }else{
            int d = run[j];
            if(d > a) d = (int)a;
            a -= d;
            t += d;
            j += d;
            if(j >= n) j -= n;
        }
    }
    return t;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;
    while(T--){
        int n, q;
        cin >> n >> q;
        string s; 
        cin >> s;
        vector<int> a(q);
        for(int i = 0; i < q; ++i) cin >> a[i];

        bool hasB = (s.find('B') != string::npos);
        vector<int> run = buildRunLen(s);

        for(int i = 0; i < q; ++i){
            long long ans = solve_one((long long)a[i], s, run, hasB);
            cout << ans << '\n';
        }
    }
    return 0;
}

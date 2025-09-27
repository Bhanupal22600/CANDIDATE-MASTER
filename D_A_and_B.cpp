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
using int64 = long long;

static int64 cg(const vector<int>& v) {
    int k = (int)v.size();
    if (k <= 1) return 0;
    vector<int64> q(k);
    for (int i = 0; i < k; ++i) q[i] = (int64)v[i] - i;
    nth_element(q.begin(), q.begin() + k/2, q.end());
    int64 med = q[k/2];
    int64 ans = 0;
    for (int i = 0; i < k; ++i) ans += llabs(q[i] - med);
    return ans;
}
void calc() {
     int n; string s;
        cin >> n >> s;
        vector<int> v, u;
        v.reserve(n);
        u.reserve(n); 
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'a') v.push_back(i);
            else u.push_back(i);
        }
        int64 cn = min(cg(v), cg(u));
        cout << cn <<endl;
        return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    int tt;
    if (!(cin >> t)) return 0;
    while (t--) {
       calc();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// =================== DEBUG TEMPLATE ===================
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// Base cases
void _print(int x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(string x) { cerr << '"' << x << '"'; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

// STL containers
template <class T, class V> void _print(const pair<T, V>& p);
template <class T> void _print(const vector<T>& v);
template <class T> void _print(const set<T>& s);
template <class T> void _print(const multiset<T>& s);
template <class K, class V> void _print(const map<K, V>& m);

template <class T, class V>
void _print(const pair<T, V>& p) {
    cerr << '{';
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << '}';
}
template <class T>
void _print(const vector<T>& v) {
    cerr << '[';
    for (size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if (i + 1 != v.size()) cerr << ", ";
    }
    cerr << ']';
}
template <class T>
void _print(const set<T>& s) {
    cerr << '{';
    for (auto it = s.begin(); it != s.end(); ) {
        _print(*it);
        if (++it != s.end()) cerr << ", ";
    }
    cerr << '}';
}
template <class T>
void _print(const multiset<T>& s) {
    cerr << '{';
    for (auto it = s.begin(); it != s.end(); ) {
        _print(*it);
        if (++it != s.end()) cerr << ", ";
    }
    cerr << '}';
}

template <class K, class V>
void _print(const map<K, V>& m) {
    cerr << '{';
    for (auto it = m.begin(); it != m.end(); ) {
        _print(*it);
        if (++it != m.end()) cerr << ", ";
    }
    cerr << '}';
}
void calc() {
    long long  n,x,y;
    cin >> n >> x >> y;
    vector<long long> v(n);
    map<pair<long long,long long>,long long> mp;
    long long cn=0;
    for(long long i = 0; i < n; ++i) {
        cin >> v[i];
        // debug(mp);
        cn+=mp[{(x-v[i]%x)%x,v[i]%y}];
        mp[{v[i]%x,v[i]%y}]++;
        
    }
    cout<<cn<<endl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
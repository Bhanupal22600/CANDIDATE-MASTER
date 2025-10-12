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
// Map
template<typename T, typename U>
void _print(map<T, U> m) {
    cerr << "{";
    bool first = true;
    for (auto &kv : m) {
        if (!first) cerr << ", ";
        first = false;
        _print(kv.first);
        cerr << ": ";
        _print(kv.second);
    }
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
void calc() {
      int n; cin >> n;
    string s; cin >> s;
    
    vector <int> p(n + 1);
    for (int i = 1; i <= n; i++){
        p[i] = p[i - 1] + (s[i - 1] == 'a') - (s[i - 1] == 'b');
    }
    debug(p);
    map <int, int> pos;
    int want = p[n];
    debug(want);
    int ans = INT_MAX;
    
    for (int r = 1; r <= n; r++){
        pos[p[r - 1]] = r - 1;// 
        if (pos.find(p[r] - want) != pos.end()){
            ans = min(ans, r - pos[p[r] - want]);
        }
    }
    debug(pos);
    if (ans == n) ans = -1;
    if (want == 0) ans = 0;
    
    // cout << ans << "\n";
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
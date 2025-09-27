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
void calc() {
   int n;
    cin >> n;
    vector<pair<int,int>> prereq(n+1);
    unordered_set<int> s;

    // read and store
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        prereq[i] = {a, b};
        if (a == 0 && b == 0) {
            s.insert(i); 
        }
    }
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 1; i <= n; i++) {
            if (s.count(i)) continue; 
            int a = prereq[i].first;
            int b = prereq[i].second;
            if ((a == 0 || s.count(a)) || (b == 0 || s.count(b))) {
                s.insert(i);
                changed = true;
            }
        }
    }

    cout << s.size() << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}
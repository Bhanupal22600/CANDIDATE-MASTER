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
    int n, k;
    cin >> n >> k;
    vector<vector<char>> v(n, vector<char>(n,'D'));
    if(k == (n*n) - 1) {
        cout << "NO" << endl;
        return;
    } else {
        cout << "YES" << endl;
    }

    int a = (n*n) - k;
    int cn = 0;
    for(int j = 0; j < n; ++j){
        
        for(int i = 0; i < n; ++i) {
            if(cn == a) break;
            if(i == 0) v[i][j] = 'D';
            else v[i][j] = 'U';
            cn++;
        }
        
    }

    if(a % n == 1) {
        int j = a / n;
        if(j < n) v[0][j] = 'L'; 
    }

    for(auto &el : v){
        for(auto &i : el){
            cout << i;
        }
        cout << "\n";
    }
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

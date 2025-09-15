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
    long long m;
    cin >> n >> m;

    vector<pair<long long,int>> req(n+1);
    req[0] = {0,0};
    for(int i=1;i<=n;i++) cin >> req[i].first >> req[i].second;

    long long ans = 0;
    for(int i=0;i<n;i++){
        long long gap = req[i+1].first - req[i].first;
        int side1 = req[i].second, side2 = req[i+1].second;

        if(side1 == side2) ans += gap - (gap % 2);
        else ans += gap - ((gap+1) % 2);
    }

    long long lastGap = m - req[n].first;
    ans += lastGap;

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) calc();
}

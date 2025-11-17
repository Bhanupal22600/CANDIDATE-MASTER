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
    int m;
    cin >> m;
    int ta,tb,k;
    cin>>ta>>tb>>k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        v[i]+=ta;
    }
    vector<int> u(m);
    for(int i = 0; i < m; ++i) {
        cin >> u[i];
    }
    int cn=0;
    int ans=0;
    if(k>=n || k>=m){
        cout<<-1<<endl;
        return;
    }
    for(int i = k-1; i < n; ++i) {
        for(int j=0;j<m;j++){
            if(u[j]<v[i]) continue;
            if(cn<1 ){
                cn++;
            }
            else{
                ans=v[i]+u[j]-v[i]+tb;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return;
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
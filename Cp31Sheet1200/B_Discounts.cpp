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
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> u(m);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for(int i = 0; i < m; ++i) {
        cin >> u[i];
    }
    int i=n-1;
    sort(v.begin(),v.end());
    int j=0;
    sort(u.begin(),u.end());
    long long ans = 0;
    while(i>=0 && j<m){
        
        u[j]--;
        for(int g=1; g<=u[j] ; g++){
            if(i<0){
                cout<<ans<<endl;
                return;
            }
            ans+=v[i];
            i--;
        }
        i--;
        j++;
    }
    while(i>=0){
        ans+=v[i];
        i--;
    }
    cout<<ans<<endl;
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
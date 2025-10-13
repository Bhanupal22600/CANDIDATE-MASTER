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
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(long long i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<long long> u;
    u.push_back(1);
    long long cn=1;
    for(long long i=1;i<n;i++){
        long long gap=v[i]-v[i-1];
        if(gap==i+1){
            cn++;
            u.push_back(cn);
        }
        else{
            u.push_back(u[i-gap]);
        }
    }
    for(auto el : u){
        cout<<el<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
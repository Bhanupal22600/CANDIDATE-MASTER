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
    vector<long long> u;
    for(long long i = 0; i < n; ++i) {
        cin >> v[i];
        if(v[i]%2) u.push_back(v[i]);
    }
    long long s=accumulate(v.begin(),v.end(),0LL);
    if(!u.size()){
        cout<<0<<endl;
        return;
    }
    sort(u.begin(),u.end());
    
    int x=u.size()/2;
    int i=0;
    for(auto el : u){
        if(i==x) break;
        s-=el;
        i++;
    }
    cout<<s<<endl;
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
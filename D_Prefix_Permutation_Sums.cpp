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
void _print(set<T> s) {
    cerr << "{";
    bool first = true;
    for (auto &x : s) {
        if (!first) cerr << ", ";
        _print(x);
        first = false;
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
    long long n;
    cin >> n;
    vector<long long> v(n-1);
    for(long long i = 0; i < n-1; ++i) {
        cin >> v[i];
    }
    
    set<long long> s;
    s.insert(1);
    s.insert(n);
    for(long long i=1;i<n-1;i++){
        s.insert(v[i]-v[i-1]);
    }
    set<long long> t;
    for(long long i=1;i<=n;i++){
        t.insert(i);
    }
    if(v[0]!=1){
        s.insert(v[0]-1);
    }
    debug(s);
    debug(t);
    set<long long> h=t;
    for(auto el : h){
        if(s.find(el)!=s.end()){
            s.erase(el);
            t.erase(el);
        }
    }
    debug(s);
    debug(t);
    if(s.empty() && t.empty()){
        cout<<"YES"<<endl;
        return;
    }
    else if(s.empty() || t.empty()){
        cout<<"NO"<<endl;
        return;
    }

    int su=0;
    for(auto el : t){
        su+=el;
    }
    for(auto el : s){
        if(el==su){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
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
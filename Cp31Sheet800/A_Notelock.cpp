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
    int n,k;
    cin >> n>>k;
    string v;
    cin>>v;
    vector<int> u;
    int flag=0;
    for(int i = 0; i < n; ++i) {
        
        if(v[i]=='1'){
            u.push_back(i);
            flag=1;
        }
    }
    int cn=0;
    if(u.size()==0){
        cout<<0<<endl;
        return;
    } 
    for(int i=0;i<u.size()-1;i++){
        if(u[i+1]-u[i]>=k) cn++;
    }
    
    if(flag){
        cout<<cn+1<<endl;
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
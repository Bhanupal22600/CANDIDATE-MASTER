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
string d(int n){
    string t="";
    while(n){
        int r=n%2;
        n=n/2;
        if(r){
            t+="1";
        }
        else{
            t+="0";
        }
    }
    reverse(t.begin(),t.end());
    return t;
}
void calc() {
    int n,m;
    cin >> n >> m;
    int x=1;
    while(x<=n){
        x*=2;
    }
    debug(x);
    if(m>=x){
        cout<<-1<<endl;
        return;
    }
    else{
        string g=d(n);
        string h=d(m);
        
        reverse(g.begin(),g.end());
        
        int l=g.size()-h.size();
        
        for(int i=0;i<l;i++){
            h="0"+h;
        }
        
        reverse(h.begin(),h.end());
        
        vector<int> v;
        for(int i=0;i<g.size();i++){
            if(g[i]!=h[i]){
                v.push_back(pow(2,i));
            }
        }
        cout<<v.size()<<endl;
        for(auto el : v){
            cout<<el<<" ";
            
        }
        if(v.size())
        cout<<endl;
        return ;
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
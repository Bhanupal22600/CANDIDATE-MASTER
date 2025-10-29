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
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void printfactor(int n){
    for(int i=1;i<sqrt(100000);i++){//T.C=O((n)^1/2);
        if(n%i==0) {
            cout<<i<<" "; 
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
}
void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> u(n);
    int cn=0;
    int cn0=0;
    int cn1=0;
    int cn2=0;
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        if(v[i]%2==0) cn++;//
        if(v[i]%3==0) cn0++;
        if(v[i]%3==1) cn1++;
        else cn2++;
    }
    map<int,int> mp;
    for(int i=1;i<sqrt(100000);i++){//T.C=O((n)^1/2);
        if(n%i==0) {
            cout<<i<<" "; 
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
    for(int i = 0; i < n; ++i) {
        cin >> u[i];
    }
    if(cn0 > 1) {
        cout<<0<<endl;
    }
    if(cn>1){
         cout<<0<<endl;
    } 
    if(cn==1){
        cout<<1<<endl;
    }
    else{
        cout<<
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
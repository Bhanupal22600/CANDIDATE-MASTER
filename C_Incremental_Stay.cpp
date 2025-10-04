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
    vector<long long> v(2*n);
    for(int i = 0; i < 2*n; ++i) {
        cin >> v[i];
    }
    long long j=1;
    for(long long j=1;j<=n;j++){
        long long s=0;
        long long t=0;
        long long flag=0;
        int a=n/j;
        int b=n%j;
        if(b){
            int cn=0;
            for(long long i=0;i<2*n;i++){
            if(!flag){
                s-=v[i];
            }
            else{
                s+=v[i];
            }
            t++;
            if(t==j) {
                t=0;
                flag=!flag;
            }
            cn++;
            if(cn==2*a) break;
        }
        t=0;
        flag=0;
        for(long long i=2*a;i<2*n;i++){
            if(!flag){
                s-=v[i];
            }
            else{
                s+=v[i];
            }
            t++;
            if(t==b) {
                t=0;
                flag=!flag;
            }
        }
        }
        else{
            for(long long i=0;i<2*n;i++){
            if(!flag){
                s-=v[i];
            }
            else{
                s+=v[i];
            }
            t++;
            if(t==j) {
                t=0;
                flag=!flag;
            }
        }
        for(long long i=0;i<2*n;i++){
            if(!flag){
                s-=v[i];
            }
            else{
                s+=v[i];
            }
            t++;
            if(t==j) {
                t=0;
                flag=!flag;
            }
        }
        }
        // cout<<s/2<<" ";
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
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
    long long n,x;
    cin >> n>>x;
    vector<long long> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    long long cn=0;
    long long i=0;
    long long j=n-1;
    long long s=0;
    long long b=0;
    vector<long long> u;
    while(v[j]==x){
        cn+=x;
        u.push_back(v[j]);
        j--;
    }
    while(i<=j){
        s+=v[j];
        j--;
        while(s<x && i<=j){
            s+=v[i];
            u.push_back(v[i]);
            i++;
        }
        if(s>=x){
            cn+=v[j+1];
            s=s%x;
            u.push_back(v[j+1]);
        }
        else{
            u.push_back(v[j+1]);
            break;
        }
        
        
    }
    cout<<cn<<endl;
    for(long long i=0;i<u.size();i++){
        cout<<u[i]<<" ";
    }
    cout<<endl;
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
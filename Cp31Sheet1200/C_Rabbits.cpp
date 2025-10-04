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
void calc1() {
    int n;
    cin >> n;
    vector<char> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for(int i = 0; i < n; ++i) {
        cout << v[i];
    }
    return;
}
void calc() {
    int n;
    cin >> n;
    vector<char> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int f,g,c;
    f=0;
    g=0;
    c=0;
    if(v[0]=='0') c=1;
    else f++;
    for(int i=1;i<n-1;i++){
        if(v[i]=='1'){
            f++;
        }
        else{
            if(f>1 && c==0 && g==1){
                cout<<"NO"<<endl;
                return;
            }
            if(f==1 && c==1){
                g=0;
                f=0;
            }
            else if(f==1 && c==0 && g==0){
                g=1;
                f=0;
            }
            else if(f==1 && c==0 && g==1){
                g=0;
                f=0;
            }
            else if(f>1){
                c=0;
                g=1;
                f=0;
            }
            else{
                g=0;
                c=1;
                f=0;
            }
           
        }
    }
    
    if(((g==1) && (v[n-1]=='0' && f<2)) || (g==0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++) {
        
         calc();
    }
    return 0;
}
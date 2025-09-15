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
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // if(m==0){
    //     int h=n-1;
    //     for(int i=n-1;i>=0;i--){
    //         if(v[i]==1) h--;
    //         else break;
    //     }
    //     int cn=0;
    //     for(int i=0;i<=h;i++){
    //         if(v[i]==1) cn+=2;
    //         else cn++;
    //     }
    //     cout<<cn<<endl;
    //     return;
    // }
    // else if(m==n){
    //     int l=0;
    //     for(int i=0;i<n;i++){
    //         if(v[i]==1) l++;
    //         else break;
    //     }
    //     int cn=0;
    //     for(int i=l;i<n;i++){
    //         if(v[i]==1) cn+=2;
    //         else cn++;
    //     }
    //     cout<<cn<<endl;
    //     return;
    // }
    // else{
        int l=0;
        for(int i=0;i<m;i++){
            if(v[i]==1) l++;
            else{
                break;
            }
        }
        int h=n-1;
        for(int i=n-1;i>m;i--){
            if(v[i]==1){
                h--;
            }
            else{
                break;
            }
        }
        int cn=0;
        for(int i=l;i<m;i++){
            if(v[i]==0) cn++;
            else cn+=2;
        }
        for(int i=m;i<=h;i++){
            if(v[i]==1) cn+=2;
            else cn++;
        }
        cout<<cn<<endl;
        return;
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}
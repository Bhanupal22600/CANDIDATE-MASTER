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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int cn=1;
    int i=0;
    int maxm=0;
    for(int k=1;k<n;k++){
        if(v[i]>maxm) {
            maxm=v[i];
            i=k;
        }
    }
    int j=i;
    int f=0;
    int f1=0;
    
    while(i>=0 && i<=n-1){
        if(i-1>=0 && v[i-1]+1==v[i] ){
            i--;
            
        }
        else if(i+1<=n-1 && v[i+1]+1==v[i]){
            i++;
            if(!f) {
                j++;
                f=1;
            }

        }
        
        else{
            cout<<"NO"<<endl;
            return;
        }
        debug(i);
    }
    if(v[i+1]+1==v[i]){
        f1=1;
    }
    else if(v[i-1]+1==v[i]){
        f1=0;
    }
    while(j>=0 || j<=n-1){
        if(v[j-1]+1==v[i]){
            j--;
        }
        else if(v[j+1]+1==v[i]){
            j++;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
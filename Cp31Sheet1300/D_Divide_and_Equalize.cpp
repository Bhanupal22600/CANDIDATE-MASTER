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
void calc(int t,int i) {

    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        
    }
    // if(t==2000 && i==446 && n!=1 ){
    //     cout<<v[1]<<endl;
    //     return;
    // }
    if( n==1){
        cout<<"YES"<<endl;
        return;
    }
    map<int,int> mp;
    for(auto el : v){
        int t=el;
    for(int i=2;i*i<=el;i++){
        while(t%i==0){
            mp[i]++;
            t/=i;
        }
    }
    if(t!=1) mp[t]++;
}


    if(mp.size()==0){
        cout<<"YES"<<endl;
        return;
    }
    int k=0;
    for(auto el : mp){
       if(el.second%n!=0){
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
    for(int i=1;i<=t;i++) {

        calc(t,i);
    }
    return 0;
}
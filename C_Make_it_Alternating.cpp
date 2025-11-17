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
int p(int a,int b){
    int ans=1;
    if(a==1) return 1;
    while(a>1){
        ans*=a;
        a--;
    }
    return ans;
}

void calc() {
    string s;
    cin>>s;
    long long ans=1;
    long long  l=0;
    long long  cn=1;
    for(long long  i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) cn++;
        else{
            ans=ans*(cn);
            ans=ans%998244353;
            l+=cn-1;
            cn=1;
        }
    }
    l+=cn-1;
    ans=ans*(cn);
    for(long long  i=1;i<=l;i++){
        ans=ans*i;
        ans=ans%998244353;
    }
    cout<<l<<" "<<ans<<endl;
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
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
    cin >> n >> k;
    vector<char> v(k,0);
    int z=0;
    int o=0;
    int t=0;
    for(int i = 0; i < k; ++i) {
        cin >> v[i];
        if(v[i]=='0'){
            z++;
        }
        else if(v[i]=='1') o++;
        else t++;
    }
    vector<char> ans(n,'+');
    int i=0;
    while(z--){
        ans[i]='-';
        i++;
    }
    int j=n-1;
    while(o--){
        ans[j]='-';
        j--;
    }
    int l=j+1-i;
    if(l==t){
        while(i<=j){
            ans[i]='-';
            i++;
        }
    }
    else{
        while(t--){
            ans[i]='?';
            ans[j]='?';
            i++;
            j--;
        }
    }
    for(auto el : ans){
        cout<<el;
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
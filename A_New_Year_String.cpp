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
    string s;
    cin>>s;
    int cn=0;
    for(int i=0;i<s.size()-3;i++){
        if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='6'){
            cout<<0<<endl;
            return;
        }
        if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='5'){
            cn++;
        }
    }
    if(cn){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<0<<endl;
        return;
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
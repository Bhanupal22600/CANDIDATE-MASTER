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
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> p0(n,0);
    vector<int> p1(n,0);
    vector<int> s0(n,0);
    vector<int> s1(n,0);
    int q,w;
    for(int i=0;i<n;i++){
        if(v[i]==1) w++;
        else q++;
        p0[i+1]=q;
        p1[i+1]=w;
    }

    int a,b;
    for(int j=0;j<k;j++){
        cin>>a>>b;
        int cn1=0;
        int cn0=0;
        for(int i=a-1;i<b;i++){
            if(v[i]==0) cn0++;
            else cn1++;
        }
        if(cn1 % 3 != 0 || cn0 % 3 != 0){
            cout<<-1<<endl;
            continue;
        }
        int z=0;
        int o=0;
        for(int i=a-1;i<b-1;i++){
            if(v[i]==v[i+1] && v[i]==1) o++;
            else if(v[i]==v[i+1] && v[i]==0) z++;
        }
        if(o || z){
            cout<<(cn1+cn0)/3;
        }
        else{
            cout<<(cn1+cn0+3)/3;
        }
        cout<<endl;
    }
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
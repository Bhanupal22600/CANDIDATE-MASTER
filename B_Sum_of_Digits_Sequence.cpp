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
    // vector<int> v(n);
    // for(int i = 0; i < n; ++i) {
    //     cin >> v[i];
    // }
    int m=1;
    for(int i=2;i<=n;i++){
        if(i<=4)m*=2;
        else{
            int temp=m;
            while(temp>0){
                m+=temp%10;
                temp/=10;
            }
        }
        if(i==n) {

            cout<<m<<endl;
            return;
        }
    }
    cout<<1<<endl;

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
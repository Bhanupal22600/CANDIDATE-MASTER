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
    string x;
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cin>>x;
    if(x[0]=='1' || x[n-1]=='1'){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(v[i]==1 || v[i]==n){
            if(x[i]=='1'){
                cout<<-1<<endl;
                return;
            }
        }
    }
    int idx1=0;
    int idx2=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            idx1=i;
        }
        if(v[i]==n){
            idx2=i;
        }
    }
    cout<<5<<endl;
    cout<<1<<" "<<idx1+1<<endl;
    cout<<1<<" "<<idx2+1<<endl;
    cout<<min(idx2+1,idx1+1)<<" "<<max(idx1+1,idx2+1)<<endl;
    cout<<idx1+1<<" "<<n<<endl;
    cout<<idx2+1<<" "<<n<<endl;
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
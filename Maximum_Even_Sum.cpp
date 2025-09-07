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
    long long a,b;
    cin >> a >> b;
    if(a%2==1 && b%2==1){
        cout<<((a*b) +1);
    }
    else if(a%2==1 && b%2==0 && b>2){
        cout<<((a*2) + b/2 );
    }
    else if(a%2==0 && b%2==0 && b>2 && b%2==0){
         cout<<((a*2) + b/2 ) ;
    }
    else if(a%2==0 && b%2==1 ){
        int flag=0;
        for(int i=2;i<b/2;i++){
            if(b%i==0 && (b/i)%2==0){
                flag=1;
                cout<<(a*i+(b/i)); 
            }
        }
        if(flag){
            cout<<-1;
        }
    }
    else{
        cout<<-1;
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
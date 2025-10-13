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
// void calc1(int n, vector<long long> v) {
//     cout<<v[4]<<endl;
//     return ;
// }
void calc() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(long long i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // if( i==287 && v[0]<7057372 ) {
    //     calc1(n,v);
    //     return;
    // }
    map<long long,long long> mp;
    for(auto el : v){
        mp[el]++;
    }
    long long s=0;
    long long maxm=0;
    vector<long long> u;
    int cn=0;
    for(auto el : mp){
        if(el.second%2==0){
            s+=el.first*el.second;
            cn+=el.second;
        }
        else{
            s+=el.first*((el.second/2)*2);
            cn+=el.second/2;
            u.push_back(el.first);
        }
    }
    sort(u.begin(),u.end());
    long long m=u.size();

    if(!m){
        cout<<s<<endl;
        return;
    }

    if(m==1){
        if(u[m-1]<s){
        cout<<u[m-1]+s<<endl;
        }
        else if(cn>2){
            cout<<s<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return;
    }
    else{
        if(s!=0){
             for(int i=m-1;i>0;i--){
                if(u[i]<s+u[i-1]){
                 cout<<u[i]+u[i-1]+s<<endl;
                 return;
                }
            }//678208239
            for(int i=m-1;i>=0;i--){
                 if(u[i]<s){
                    cout<<u[i]+s<<endl;
                    return;
                }
            }
            if(cn>2){
                cout<<s<<endl;
                return;
            }
            else{
                cout<<0<<endl;
                return;
            }
        }
        else{
            cout<<0<<endl;
            return;
        }
        
}
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i=1;i<=t;i++) {
        
        calc();
        
    }
    return 0;
}
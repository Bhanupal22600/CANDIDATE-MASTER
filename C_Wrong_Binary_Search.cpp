#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a){cerr<<a;}
void _print(long long a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(string a){cerr<<a;}
void _print(bool a){cerr<<(a?"true":"false");}
template<typename T,typename U> void _print(pair<T,U> p){cerr<<"{";_print(p.first);cerr<<", ";_print(p.second);cerr<<"}";}
template<typename T> void _print(vector<T> v){cerr<<"[";for(size_t i=0;i<v.size();++i){_print(v[i]);if(i+1<v.size())cerr<<", ";}cerr<<"]";}

void calc() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> p(n+1, -1);
    if(count(s.begin(), s.end(), '1')==n){
        cout<<"YES\n";
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<"\n";
        return;
    }
    if(count(s.begin(), s.end(), '0')==n){
        cout<<"YES\n";
        for(int i=2;i<=n;i++) cout<<i<<" ";
        cout<<1<<"\n";
        return;
    }
    for(int i=0;i<n;){
        if(s[i]=='1'){
            p[i+1]=i+1;
            i++;
        } else {
            int j=i;
            while(j<n && s[j]=='0') j++;
            if(j-i==1){
                cout<<"NO\n";
                return;
            }
            for(int k=i;k<j;k++){
                p[k+1]=(k+1==j?i+1:k+2);
            }
            i=j;
        }
    }
    for(int i=1;i<=n;i++){
        if(s[i-1]=='1' && p[i]!=i){
            cout<<"NO\n";
            return;
        }
        if(s[i-1]=='0' && p[i]==i){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++) cout<<p[i]<<" ";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) calc();
}

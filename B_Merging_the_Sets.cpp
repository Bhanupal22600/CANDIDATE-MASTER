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

void calc(){
    int n,m;cin>>n>>m;
    vector<vector<int>> s(n);
    vector<int> freq(m+1,0);
    for(int i=0;i<n;i++){
        int l;cin>>l;
        s[i].resize(l);
        for(int j=0;j<l;j++){
            cin>>s[i][j];
            freq[s[i][j]]++;
        }
        sort(s[i].begin(),s[i].end());
    }
    for(int i=1;i<=m;i++){
        if(freq[i]==0){cout<<"NO\n";return;}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(includes(s[j].begin(),s[j].end(),s[i].begin(),s[i].end())){
                cout<<"NO\n";return;
            }
        }
    }
    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) calc();
    return 0;
}

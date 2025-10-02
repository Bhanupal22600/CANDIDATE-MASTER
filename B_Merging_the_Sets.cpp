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
   int n,m;
   cin>>n>>m;
   vector<vector<int>> v;
   map<int,int> mp;
   for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vector<int> u(a);
        for(int i=0;i<a;i++){
            cin>>u[i];
            mp[u[i]]++;
        }
        v.push_back(u);
   }

   for(int i=1;i<=m;i++){
    if(mp[i]==0){
        cout<<"NO"<<endl;
        return;
    }
   }

   int c=0;
   int nc=0;
   for(auto i : v){
    int f=0;
    for(auto el : i){
        if(mp[el]==1){
            c++;
            f=1;
            break;
        }
    }
    if(!f)
        nc++;
   }
   if(nc>1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   return;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) calc();
    return 0;
}

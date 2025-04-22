#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,m; 
    cin>>n>>m;
    vector<long long> f(n+1);
    for(long long i=0;i<m;i++){
        long long a,b; 
        cin>>a>>b;
        long long s=(a+b)%n;
        if(s==0) s=n;
        f[s]++;
    }
    long long  tot=m*(m-1)/2, par=0;
    for(long long i=1;i<=n;i++) par+=f[i]*(f[i]-1)/2;
    cout<<tot-par<<"\n";
    return 0;
}
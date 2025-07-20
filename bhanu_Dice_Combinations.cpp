#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
 
int n;
vector<int> dp;
int fun(int c){
    if(c==n) return 1;
    if(dp[c]!=-1) return dp[c];
    long long ans=0;
    for(int i=1;i<7;i++){
        if(c+i<=n) 
        ans=(ans+fun(c+i)%mod)%mod;
    }
    return dp[c]=ans;
}
void fbu(int n){
    dp[0]=1;
    for(int k=1;k<=n;k++){
        long long sum =0;
        for(int i=1;i<=6;i++){
            if(k-i<0) break;
            sum =(sum%mod + dp[k-i]% mod) % mod;
        }
        dp[k] = sum%mod;
    }
    return dp[n];
}
void calc() {
    cin >> n;
    dp.resize(n+1,-1);
    cout<<fbu(n)<<endl;
}
int main() {
    int t=1;

    while (t--) {
        calc();
    }
    return 0;
}
//                     0
// cn=3               1                   2           3
// cn=2        1       2  3   cn=3   1  
// cn=1 dp[]  1      2               
    
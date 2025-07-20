#include <bits/stdc++.h>
using namespace std;

vector<long long> dp(10000001,-1);
void calc() {
    long long n,x;
    cin >> n>>x;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
        dp[v[i]]=1;
    }
    dp[0]=0;
    for(long long i=1;i<=x;i++){
        long long minm=INT_MAX;
        int flag=0;
        for(int j=0;j<n;j++){
            if(v[j]<=i){
                if(dp[i-v[j]]==-1) continue;
                minm=min(1+dp[i-v[j]],minm);
                flag=1;
            }
        }
        if(flag)
        dp[i]=minm;
    }
    cout<<dp[x]<<endl;
    return;
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
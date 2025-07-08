#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> dp;
int f(int i){
    if(i>=v.size()){
        return INT_MAX;
    }
    if(i==v.size()-1){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int ans=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j>=v.size()) break;
        ans=min(ans,abs(v[i]-v[i+j])+f(i+j));
    }
    return dp[i]=ans;
}
int bu(int n){
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--){
        int minm=INT_MAX;
        for(int j=1;j<=2 && j+i<n;j++){
            minm=min(minm,abs(v[i+j]-v[i])+dp[i+j]);
        }
        dp[i]=minm;
    }
    return dp[0];
}
int main() {
    int n;
    cin >> n;
    v.resize(n);
    dp.resize(n,-1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout<<bu(n)<<endl;
    return 0;
}

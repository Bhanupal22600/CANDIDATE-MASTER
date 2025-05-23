#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000,-1);
int calc(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    for(int i=0;i<=n;i++){
        if(i==0 or i==1){
            dp[i]=i;
        }
    
        else{
            dp[i]=dp[i-1]+dp[i-2];
        }
    
    }

    return dp[n];
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        cout<<calc(n)<<endl;
    }
    return 0;
}
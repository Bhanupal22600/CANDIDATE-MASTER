#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> dp(n+1,-1);
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        if(i%2==0 && i%3==0){
            dp[i]=min(1+dp[i-1],min(1+dp[i/2],1+dp[i/3]));
        }
        else if(i%2!=0 && i%3==0){
            dp[i]=min(1+dp[i-1],1+dp[i/3]);
        }
        else if(i%2==0 && i%3!=0){
            dp[i]=min(1+dp[i-1],1+dp[i/2]);
        }
        else{
            dp[i]=1+dp[i-1];
        }
    }
    cout<<dp[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
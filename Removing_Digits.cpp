#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> dp(1000000,1);
    dp[0]=0;
    for(int i=10;i<=n;i++){
        int minm=INT_MAX;
        int c=i;
        int el=0;
        while(c>0){
            el=max(el,c%10);
            c=c/10;
        }
            if(el!=0)
            minm=min(minm,1+dp[i-el]);
        
        dp[i]=minm;
    }
    cout<<dp[n]<<endl;
    return ;
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
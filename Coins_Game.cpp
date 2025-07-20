#include <bits/stdc++.h>
using namespace std;

void calc() {
    int l,k,n;
    cin >> l >> k >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int> dp(1000001,-1);
    dp[0]=0;
    dp[l]=1;
    dp[1]=1;
    dp[k]=1;
    for(int i=2;i<=1000001;i++){
        int flag=0;
        if(i-1>=0 && dp[i-1]==0){
            flag=1;
        }
        if(i-l>=0 && dp[i-l]==0 ){
            flag=1;
        }
        if(i-k>=0 && dp[i-k]==0){
            flag=1;
        }
        dp[i]=flag;
    }
    for(auto el : v){
        if(dp[el]==0){
            cout<<"B";
        }
        else{
            cout<<"A";
        }
    }
    return;
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
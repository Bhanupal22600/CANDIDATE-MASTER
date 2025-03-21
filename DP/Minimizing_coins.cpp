/*SEE CSS problem set dp*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> get_digits(int n){
    vector<int> result;
    while(n>0){
        if(n%10 !=0){
            // n%10 is the last digits
            result.push_back(n%10);
        }
        n=n/10;
    }
    return result;
}

vector<int> dp;
int f(int n,vector<int>& coins){// you can make this vector of coins as global vector so that we dont need to pass this vector again and again
    if(n==0) return 0;
    if(dp[n]!=-2) return dp[n];// dp optimisation step
    int result = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(n-coins[i]<0) continue;
        result = min(result,f(n-coins[i],coins));
    }
    if(result == INT_MAX) return dp[n]=INT_MAX;
    return dp[n]=1+result;
}
// try yourself fbu for this problem below is the code of rmeoving digit ques change this 
// int fbu(int num,vector<int> &coins){
//     dp[0] = 0;
//     for(int i=1 ; i<=9 ;i++) dp[i]=1;
//     for(int n=10;n<=num;n++){
//         // i -> state
//         // calc dp[n]
//         int result = INT_MAX;
//         for(int i =0;i<coins.size();i++){
//             result = min(result,dp[n-v[i]]);
//         }
//         dp[n] = 1+result;
//     }
//     return dp[num];
// }
int main(){
    int s, x;
    cin>>s>>x;
    vector<int> coins(s);
    for(int i=0;i<s;i++){
        cin>>coins[i];
    }
    dp.resize(1000005,-2);
    int ans=f(x,coins);
    if(ans==INT_MAX) cout<<"-1\n";
    else cout<<ans<<"\n";
    
    return 0;
}
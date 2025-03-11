#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int f(int n){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){// iterative
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n]; 
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1,-1);// dp[i]==-1 that ith subproblem is not yet computed
    cout<<f(n)<<endl;
    return 0;
}
//recursion T.C = O(2^n)
//S.C =O(2^n)

//optimised recursion through dp
//dp
//bottom up -> iterative and hme order of preparation of subproblem figure out krni hoti hai
//T.C=O(n),S.C=O(n)
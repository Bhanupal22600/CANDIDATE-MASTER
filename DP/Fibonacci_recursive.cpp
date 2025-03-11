#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int f(int n){
    if(n==0 or n==1) return n;
    // dp check, to identify if problem was already solved earlier
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1) + f(n-2); // storing ans and return that ans
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
//T.C=O(2*n)~=O(n)
//S.C=O(2*n) for each stage+O(n) for vector~=O(n)
//top down dp -> recursive .. memoization
//bottom up -> iterative and hme order of preparation of subproblem figure out krni hoti hai
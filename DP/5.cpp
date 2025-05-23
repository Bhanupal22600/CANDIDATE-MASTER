#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
int cn=0;
int f(int n) {
    if(n==1) return 0;
    int flag1=0;
    int a;
    if(n%3==0){
        flag1=1;
         a= n/3;
    }
    int b;
    int flag2=0;
    if(n%2==0){
        flag2=1;
        b= n/2;
    }
    if(dp[n]!=-1) return dp[n];
    if(flag1==1 && flag2==1){
        return dp[n]=1 + min(f(a),min(f(b),f(n-1)));
    }
    else if(flag1==0 && flag2==1){
        return dp[n]=1+ min(f(b),f(n-1));
    }
    else if(flag2==0 && flag1==1){
        return dp[n]=1 + min(f(a),f(n-1));
    }
    else{
        return dp[n]= 1 + f(n-1);
    }
}
int main() {
    
        int n;
        cin>>n;
        dp.resize(n+1,-1);
        cout<<f(n);
    
   
}
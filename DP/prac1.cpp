#include<bits/stdc++.h>
using namespace std;

vector<long long> dp(10,-1);
long long fib(int n){
    if(n==1 or n==0) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}
vector<long long> cp(60,-1);
long long f(long long n){
    cp[0]=0;
    cp[1]=1;
    for(int i=2;i<=n;i++){
        cp[i]=cp[i-1]+cp[i-2];
    }
    return cp[n];
}
void calc(){
    long long n;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<f(n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
    return 0;
}


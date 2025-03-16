// given a no n task is to reduce it to 1 after some no of operations as n->n-1,n->n/2,n->n/3
//find minm steps to do this so
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define inf INT_MAX
using namespace std;

int f(int n){
    if(n==1) return 0;
    if(n==2 or n==3) return 1;

    return 1+min({f(n-1),(n%2==0) ? f(n/2): inf , (n%3==0) ? f(n/3) : inf});

}

vector<int> dp;
int ftd(int i){
    if(i==1) return 0;
    if(i==2 or i==3) return 1;
    if(dp[i] != -1) return dp[i];//nth state is precomputed
    // if dp[n] is -1 ,we need to compute first time this state
    return dp[i]=1+min({ftd(i-1),(i%2==0) ? ftd(i/2): inf , (i%3==0) ? ftd(i/3) : inf});
}

int fbu(int n){
    dp.clear();
    dp.resize(n+1,-1);
    dp[1]=0;
    dp[2]=dp[3] = 1;
    for(int i = 4 ; i<=n ; i++){
        dp[i]=1+min({dp[i-1],(i%2==0)? dp[i/2]: inf, (i%3==0) ? dp[i/3]: inf});
    }
    return dp[n];
}

int main(){ // n -> 1000
    int n;
    cin>>n;
    //cout<<f(n)<<endl;
    
    // dp.clear();
    // dp.resize(1005,-1);
    // cout<<ftd(n)<<endl;

    cout<<fbu(n)<<endl;
    return 0;
}
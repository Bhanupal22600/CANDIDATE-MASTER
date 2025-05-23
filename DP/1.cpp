#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000,-1);
int calc(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]==-1) {
        return dp[n]=calc(n-1)+calc(n-2);
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
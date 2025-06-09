#include <bits/stdc++.h>
using namespace std;
vector<int> dp(11,0);
void calc() {
    int n,m;
    cin>>n>>m;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=10;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    int x=dp[n];
    int y=dp[n];
    int z=dp[n]+dp[n-1];
    while(m--){
        vector<int> v(3,0);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        if(v[0]>=x && v[1]>=y && v[2]>=z){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    cout<<endl;
    return;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
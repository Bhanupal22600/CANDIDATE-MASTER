#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

void calc() {
    int n,s;
    cin >> n>>s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> dp(10000001,0);
    dp[0]=1;
    for(int i=1;i<=s;i++){
        int temp=0;
        set<int> st;
        for(int j=0;j<n;j++){
            if(i-v[j]>=0 && st.find(v[j])==st.end()){
                temp=(temp%MOD+dp[i-v[j]]%MOD)%MOD;
                st.insert(i-v[j]);
                if(i==8){
                    cout<<i-v[j]<<endl;
                }
            }
        }
        dp[i]=temp%MOD;
    }
    cout<<dp[s]<<endl;
    return;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        calc();
    }
    return 0;
}
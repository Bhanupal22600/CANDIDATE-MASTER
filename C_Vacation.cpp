#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    vector<int> dp1(n+1,-1);
    vector<int> dp2(n+1,-1);
    vector<int> dp3(n+1,-1);

    vector<int> dp(n+1,-1);

    dp1[0]=a[0];
    dp2[0]=b[0];
    dp3[0]=c[0];

    dp[0]=max(dp1[0],max(dp2[0],dp3[0]));
    for(int i=1;i<n;i++){
        dp1[i]=a[i]+max(dp2[i-1],dp3[i-1]);
        dp2[i]=b[i]+max(dp1[i-1],dp3[i-1]);
        dp3[i]=c[i]+max(dp1[i-1],dp2[i-1]);
        dp[i]=max(dp1[i],max(dp2[i],dp3[i]));
    }
    cout<<dp[n-1]<<endl;
    return;
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
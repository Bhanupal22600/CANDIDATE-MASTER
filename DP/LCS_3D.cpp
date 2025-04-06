/* this is same ques as lcs btw two string but here we have power to change k char to some other char*/


// top down 4d dp
#include "bits/stdc++.h"
using namespace std;

int n,m,k;
vector<int> a,b;
int dp[2005][2005][7];
int solve(int i,int j,int k){
    if(i==n or j==m){
        return 0;
    }
    if(dp[i][j][k]!=-1)
        return dp[i][j][k];
    int c1(0),c2(0),c3(0);
    if(a[i]==b[j])
        c1=1+solve(i+1,j+1,k);
    if(k>0)
        c2=1+solve(i+1,j+1,k-1);
    c3=max(solve(i+1,j,k),solve(i,j+1,k));
    return dp[i][j][k]=max({c1,c2,c3});
}
int main(){
    memset(dp,-1,sizeof(dp));// set all el to -1
    cin>>n>>m>>k;
    a=vector<int>(n);
    b=vector<int>(m);
    for(auto &i:a)
        cin>>i;
    for(auto &i: b)
        cin>>i;
    cout<<solve(0,0,k);
}



// bottom up 3d 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    // dp[i][j][kk]: LCS from index i in a and j in b with kk changes left
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(k+1, 0)));

    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            for (int kk = 0; kk <= k; ++kk) {
                int c1 = 0, c2 = 0, c3 = 0;

                if (a[i] == b[j]) {
                    c1 = 1 + dp[i+1][j+1][kk];
                }
                if (kk > 0) {
                    c2 = 1 + dp[i+1][j+1][kk-1];
                }
                c3 = max(dp[i+1][j][kk], dp[i][j+1][kk]);

                dp[i][j][kk] = max({c1, c2, c3});
            }
        }
    }

    cout << dp[0][0][k] << '\n';
}

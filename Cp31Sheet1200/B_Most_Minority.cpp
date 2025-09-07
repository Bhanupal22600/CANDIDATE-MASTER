#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m;
    cin >> n>>m;
    vector<vector<char>> mat(n,vector<char> (m,0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    vector<int> ans(n,0);
    for(int j=0;j<m;j++){
        int cn0=0;
        int cn1=0;
        for(int i=0;i<n;i++){
            if(mat[i][j]=='0') cn0++;
            else cn1++;
        }
        if(cn0==0 || cn1==0){
            for(int i=0;i<n;i++){
                ans[i]++;
            }
        }
        else if(cn1>cn0) {
            for(int i=0;i<n;i++){
                if(mat[i][j]=='0') ans[i]++;

            }
        }
        else{
            for(int i=0;i<n;i++){
                if(mat[i][j]=='1') ans[i]++;
            }
        }
    }
    int mx = *max_element(ans.begin(), ans.end());
    for(int i=0;i<n;i++){
        if(mx==ans[i]) cout<<i+1<<" ";
    }
    return;


}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n+2,vector<int> (m+2,0));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin>>v[i][j];
        }
    }
    int maxm=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(v[i][j]>v[i+1][j] && v[i][j]>v[i][j-1] && v[i][j]>v[i-1][j] && v[i][j]>v[i][j+1] ){
                v[i][j]=max(max(v[i+1][j],v[i][j-1]),max(v[i][j+1],v[i-1][j]));
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
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
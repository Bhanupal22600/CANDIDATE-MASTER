#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin>>n>>k;
    vector<vector<int> > v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;
    int cn=0;
    while(top<=bottom){
        for(int i=top;i<=bottom;i++){
            if(v[i][left]!=v[n-1-i][right]){
                cn++;
            }
        }
        left++;
        right--;
        if(left>right) break;
        for(int j=left;j<=right;j++){
            if(v[top][j]!=v[bottom][n-1-j]){
                cn++;
            }
        }
        top++;
        bottom--;
    }
    if(k<cn){
        cout<<"NO"<<endl;
        return;
    }
    else{
        if((k-cn)%2==0){
            cout<<"YES"<<endl;
            return;
        }
        else if(n%2==1){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
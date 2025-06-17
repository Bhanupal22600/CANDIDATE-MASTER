#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int> (m));
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            mx=max(mat[i][j],mx);
        }
    }


    unordered_set<int> s;
    unordered_set<int> t;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==mx) {
                s.insert(i);
                t.insert(j);
            }
        }
    }


    int r=0;
    int idx1=0;
    for(int i=0;i<n;i++){
        int temp=0;
        unordered_set<int> x;
        for(int j=0;j<m;j++){
            if(mat[i][j]==mx && x.find(i)!=x.end()){
                temp=1;
                idx1=i;
            }
            if(mat[i][j]==mx) {
                x.insert(i);
            }
        }
        r+=temp;
    }
    int c=0;
    int idx2=0;
    for(int j=0;j<m;j++){
        int temp=0;
        unordered_set<int> y;
        for(int i=0;i<n;i++){
            if(mat[i][j]==mx && y.find(j)!=y.end()){
                temp=1;
                idx2=j;
            }
            if(mat[i][j]==mx) {
                y.insert(j);
            }
        }
        c+=temp;
    }
    if(r>1 || c>1){
        cout<<mx<<endl;
        return;
    }
    else if(r==1){
        unordered_set<int> tt;
        for(int i=0;i<n;i++){
        if(i==idx1) continue;
        for(int j=0;j<m;j++){
            if(mat[i][j]==mx) {
                tt.insert(j);
            }
        }  
    }
     if(tt.size()>1){
            cout<<mx<<endl;
            return;
        }
        else{
            cout<<mx-1<<endl;
            return;
        }
    }
    else if(r==0){
        unordered_set<int> tt;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==mx) {
                tt.insert(j);
            }
        }
    }
    if(tt.size()>2){
            cout<<mx<<endl;
            return;
        }
        else{
            cout<<mx-1<<endl;
            return;
        }
}
else{
    cout<<mx<<endl;
    return;
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
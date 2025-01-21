#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
void calc(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > v(n,vector<int>(m));
    int minm=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(minm>v[i][j]) minm=v[i][j];
        }
        
    }

     for (auto& row : v) {
        std::sort(row.begin(), row.end());
    }

    int d=n;
     for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(v[i][j+1]-v[i][j]!=n){
                cout<<-1<<endl;
                return;
            }
        }
     }
     vector<int> ans(n);
     for(int i=0;i<n;i++){
        if(v[i][0]>n-1){
             cout<<-1<<endl;
                return;
        } 
        ans[v[i][0]] = i + 1;
     }
    
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
     cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
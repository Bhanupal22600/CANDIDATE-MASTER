#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
void calc(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];

        }
    }
    
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]<0) count++;
            
            sum+=abs(v[i][j]);

        }
    }
    int minm1=INT_MAX;
    int minm2=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]<minm1 && v[i][j]>=0) minm1=v[i][j];
            else if(abs(v[i][j])<minm2 && v[i][j]<0) minm2=abs(v[i][j]);
        }
    }

    int k=count%2;
    
    if(k){
        if(minm1>abs(minm2)) cout<<sum-2*abs(minm2);
        else{
            cout<< sum-2*minm1;
        }
    }
    else{
      cout<< sum;
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
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    vector<vector<int>> arr(n,vector<int>(2));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int count=2*(arr[0][0]+arr[0][1]);
    int w=arr[0][0];
    int h=arr[0][1];
    for(int i=1;i<n;i++){
        if(arr[i][0]>w){
            count+=2*(arr[i][0]-w);
            w=arr[i][0];
        }
        if(arr[i][1]>h){
            count+=2*(arr[i][1]-h);
            h=arr[i][1];
        }
        
    }
    cout<<count<<endl;
    }
    return 0;
}
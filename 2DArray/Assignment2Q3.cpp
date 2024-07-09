#include<iostream>
using namespace std;
int main(){
     int m;
    cout<<"Enter the no of rows:";
    cin>>m;
    int n;
    cout<<"Enter the no of columns:";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<n;j++){
    
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }}

        else {
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        }
}}
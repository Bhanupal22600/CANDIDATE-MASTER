//Write a program to print the matrix in wave form.
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
    //Wave print
    for(int i=0;i<m;i++){
       if(i%2==0){ 
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
       }
       else{
        for(int j=n-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
       }
        cout<<endl;
    }
}
//Write a program to print the transpose of the matrix entered by thr user and store it in a new matrix.
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
    int brr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             brr[i][j]=arr[j][i];
        }
    }
   
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
}   



}
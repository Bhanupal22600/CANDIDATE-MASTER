//Write a program to print the transpose of the matrix entered by thr user and store it in a new matrix.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows:";
    cin>>m;
    int n;
    cout<<"Enter the no of columns:";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n));
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
}   
//this is valid for any given order of m*n but
//if we dont want to utilize extra space brr then its not possible to transpose matrix 
//with m!=n,but we can do this through another code which is valid for square matrix only using swapping concept in upper triangle
    vector<vector<int>> brr(n,vector<int>(m));
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
cout<<brr.size()<<endl;
cout<<brr[0].size();



}
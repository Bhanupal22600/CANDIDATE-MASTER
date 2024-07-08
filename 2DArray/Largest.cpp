#include<iostream>
#include<climits>
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
    int larg=INT_MIN;// or arr[0][0]
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[i][j]>larg) larg=arr[i][j];
        }
    } 
    cout<<larg;
}
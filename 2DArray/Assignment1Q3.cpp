#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

cout<<"mat";
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"yup";
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int sum=0;
    
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=matrix[i][j];
        }
    }

cout<<sum;

}
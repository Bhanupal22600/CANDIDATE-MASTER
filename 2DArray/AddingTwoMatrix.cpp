//Write a program to add two matrices.
#include<iostream>
using namespace std;
int main(){
    int m1;
    cout<<"Enter the no of rows:";
    cin>>m1;
    int n1;
    cout<<"Enter the no of columns:";
    cin>>n1;
    int Arr[m1][n1];
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n1-1;j++){
            cin>>Arr[i][j];
        }
    }
    int m2;
    cout<<"Enter the no of rows:";
    cin>>m2;
    int n2;
    cout<<"Enter the no of columns:";
    cin>>n2;
    int Brr[m2][n2];
    for(int i=0;i<=m2-1;i++){
        for(int j=0;j<=n2-1;j++){
            cin>>Brr[i][j];
        }
    }

    int Crr[m1][n1];
    for(int i=0;i<=m2-1;i++){
        for(int j=0;j<=n2-1;j++){
            Crr[i][j]=Arr[i][j]+Brr[i][j];
        }
        

}
 for(int i=0;i<=m2-1;i++){
        for(int j=0;j<=n2-1;j++){
            cout<<Crr[i][j]<<" ";
        }
        cout<<endl;

}

}
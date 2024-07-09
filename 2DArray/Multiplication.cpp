//Write a program to print the multiplication of two matrices given by the user.
#include<iostream>
using namespace std;
int main(){
        int m1;
    cout<<"Enter the no of rows:";
    cin>>m1;
    int n1;
    cout<<"Enter the no of columns:";
    cin>>n1;
    int arr[m1][n1];
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n1-1;j++){
            cin>>arr[i][j];
        }
    }
    int m2;
    cout<<"Enter the no of rows:";
    cin>>m2;
    int n2;
    cout<<"Enter the no of columns:";
    cin>>n2;
    int brr[m2][n2];
    for(int i=0;i<=m2-1;i++){
        for(int j=0;j<=n2-1;j++){
            cin>>brr[i][j];
        }
    }

     if (n1 != m2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }
    

    int crr[m1][n2];
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n2-1;j++){
            crr[i][j]=0;
            for(int k=0;k<m2;k++)
            crr[i][j]+=arr[i][k]*brr[k][j];
        }
        

}
 for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n2-1;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;

}

}
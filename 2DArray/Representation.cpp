#include<iostream>
using namespace std;
int main(){
    int crr[3][3]={{1,2,3},{4,5,8},{34,21,9}};
    cout<<crr[0][0]<<endl;
    int brr[3][3]={1,2,3,4,5,6,7,8,9};//this is not a 1D array it is like a 1D array but store in 2D array yeh khud hi let kr lega suru k 3 element 1st row k hai and uske baad k 2nd row k and so on
    cout<<brr[0][0]<<endl;
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
    //print 
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
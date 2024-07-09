#include<iostream>
using namespace std;
int main(){
     int m;
    cout<<"Enter the no of rows:";
    cin>>m;
    int n;
    cout<<"Enter the no of columns:";
    cin>>n;
    
    if (m != n) {
        cout << "This operation is valid only for square matrices." << endl;
        return -1;
    }


    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    int i=0;
    int j=n-1;
    while(i<j){
        for(int k=0;k<n;k++){
            int temp=arr[i][k];
            arr[i][k]=arr[j][k];
            arr[j][k]=temp;

        }
        i++;
        j--;
    }

for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
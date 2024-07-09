//Write a program to print the matrix in spiral form.
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
  int minr=0;
  int maxr=m-1;
  int minc=0;
  int maxc=n-1;
  int tot_ele=m*n;
  int count=0;

for(int i=0;i<m;i++){

  //right
  for(int j=minc;j<=maxc && count<tot_ele;j++){//as we can put multiple condition in loop
    cout<<arr[minr][j]<<" ";
    count++;
  }
  minr++;

  //down
  for(int i=minr;i<=maxr && count<tot_ele;i++){
    cout<<arr[i][maxc]<<" ";
    count++;
  }
  maxc--;

  //left
  for(int j=maxc;j>=minc && count<tot_ele;j--){
    cout<<arr[maxr][j]<<" ";
    count++;
  }
  maxr--;

  //up
  for(int i=maxr;i>=minr && count<tot_ele;i--){
    cout<<arr[i][minc]<<" ";
    count++;
  }
minc++;

  }
}
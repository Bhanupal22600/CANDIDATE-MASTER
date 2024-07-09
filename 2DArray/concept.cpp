#include<iostream>
#include<vector>
using namespace std;


void change(int a[]){
    a[0]=9;
}

void change2D(int arr[3][3]){//this is limititation of 2d array we have to mandatory pass the row and column size in function
    arr[0][0]=100;
}


void change2DVector(vector< vector<int> > &v){
    v[0][1]=100;
}
int main(){
    int a[3]={1,2,3};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;

    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2D(arr);
    cout<<arr[0][0]<<endl;

//in 2d vector we dont need to pass the vector size in func 

}
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,8,5,3,1,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);//as size of arr[0] is 4 byte
    cout<<size;
}
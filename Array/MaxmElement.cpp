//Find the maxm value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int minm=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<arr[0]){
            minm=arr[i];

        }

    }
    cout<<minm;
}
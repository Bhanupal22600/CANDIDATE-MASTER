#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(n+i-k>=n-1) cout<<arr[(n+i-k)%n]<<endl;
        else{cout<<arr[n+i-k]<<endl;}
    }
}
#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int prev=arr[0];
    for(int i=0;i<n;i++){
        
        if(i==0) count++;
        else if(arr[i]-prev>=c) {
            count++;
            prev=arr[i];
        }
        
        
    }
    cout<<count;
    
}
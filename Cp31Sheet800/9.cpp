#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag=true;
    int mini=abs(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<0;
            flag=false;
            break;
        }
        if(abs(arr[i])<mini) mini=abs(arr[i]);
        
    }
    if(flag){
    cout<<abs(mini);
    }
}
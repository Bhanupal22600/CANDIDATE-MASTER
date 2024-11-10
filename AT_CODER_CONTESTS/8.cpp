#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<char> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='O'){
            temp++;
        }
        else{
            temp=0;
        }
        if(temp==k) {
            count++;
            temp=0;
            }
    }
    cout<<count;
    return 0;

}
#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]) count++;
    }
    cout<<count<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
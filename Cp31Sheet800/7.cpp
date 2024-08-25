#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int arr[n-1];
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>0){
 
    cout<<"-"<<sum<<endl;
    }
    else{
    cout<<abs(sum)<<endl;
    
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
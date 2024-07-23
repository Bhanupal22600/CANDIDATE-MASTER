#include<iostream>
using namespace std;
int cacl(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int maxi=arr[n-1];
    int sum=arr[n-1];
    int i=n-1;
    while(arr[n-1]-arr[n-2]<=1){
        if(sum+arr[n-2]<=m){
            sum+=arr[n-2];
        }
        else{
            break;
        }
        i--;
    }
    int l=-1;
    int sum2=arr[0];
    for(int j=1;j<i;j++){
        sum2=arr[j];
        for(int k=j+1;k<i;k++){
            if(arr[k]-arr[j]<=1){
                sum2+=arr[k];
            }
            else{
                l=max(sum2,l);
            }
        }
        
    }
    if(sum>l){
        return sum;
    }
    else {
        l;
    }



}




int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<cacl();
    }
}
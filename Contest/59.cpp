#include<iostream>
#include<algorithm>
using namespace std;

int calc(){
    int n,k;
    cin>>n>>k;
      
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int brr[k];
    int crr[n-k];
    brr[k-1]=arr[n-2];
    crr[n-k-1]=arr[n-1];
    for(int i=0;i<n-k-1;i++){
        crr[i]=arr[i];
    }
    for(int i=0,j=n-k-1;j<n-2;i++,j++){
        brr[i]=arr[j];
    }
    if(k==1 ) return 2*arr[n-1]+arr[n-2]+arr[0];
    return crr[0]+crr[n-k-1]+brr[k-1]+brr[0];  
}
int main(){
    int t;
    cin>>t;
    while(t--){
    calc();
    cout<<endl;
    }
}
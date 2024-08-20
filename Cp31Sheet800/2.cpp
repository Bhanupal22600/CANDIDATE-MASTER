#include<iostream>
#include<algorithm>
using namespace std;
int calc(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxm=arr[0]-0;
    for(int i=1;i<n;i++){
        maxm=max(maxm,arr[i]-arr[i-1]);

    }
    if((x-arr[n-1]+x-arr[n-1])>maxm){
        maxm=(x-arr[n-1]+x-arr[n-1]);
    }
    cout<<maxm<<endl;


}

int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
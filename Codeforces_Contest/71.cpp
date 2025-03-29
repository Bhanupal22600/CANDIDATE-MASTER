#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void calc(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]-arr[0]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
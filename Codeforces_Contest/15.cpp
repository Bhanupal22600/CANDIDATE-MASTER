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
    for(int i=0;i<n;i++){
        if(arr[i]-arr[i+1]==1){
            swap(arr[i+1],arr[i]);
        }
        
    }

    cout<<(is_sorted(arr.begin(),arr.end()))?"YES\n": "NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=n-2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]*arr[j]==k){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return;
            }
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
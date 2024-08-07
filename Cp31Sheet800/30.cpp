#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void calc(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
  if(k==1 && !is_sorted(arr.begin(),arr.end()) ){
    cout<<"N0"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int r= v[1]/v[0];
  for(int i=1;i<n-1;i++){
    if(r!=v[i+1]/v[i]){
        cout<<"No";
        return 1;
    }
  }
  cout<<"Yes";
  return 1;
}
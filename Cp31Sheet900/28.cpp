#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n,k;
    cin>>n>>k;
    int m=n*k;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    int sum=0;
    int count=0;
    int s=n/2;
    for(int j=m-1-s;j>=0 && k!=count  ;j=j-s-1){
        sum+=v[j];
        count++;
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n,x);
    for(int i=0;i<n;i++){
        if(i<=x && (x | i) == x) v[i]=i;
    }
    int orr=0;
    for(int i=0;i<n;i++){
        orr=v[i]|orr;
    }
    if(orr!=x) v[n-1]=x;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
using namespace std;
string calc(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n%2!=0){
        return "yes";
    }
    vector<int> v;
    int max=a[0];
    int k=0
    for(int i=1;i<n;i++){
        if(a[i]>max) {
        max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==max  ){
           v.push_back(a[i])
        }
    }
    int len=v.size();
    if(len%2!=0){
        return "yes";
    }
    else{
        return "no";
    }
}
int main(){
    int t;
    while(t--){
        string s;
        s=calc();
        cout<<s;
    }
}
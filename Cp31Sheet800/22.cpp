#include<iostream>
using namespace std;
void calc(){
    long long n,k;
    cin>>n>>k;
    if(n%2==0){
        cout<<"YES"<<endl;
        return;
    }
    else if(k%2!=0){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
using namespace std;\
void calc(){
    int n;
    cin>>n;
    if(n<=3){
        cout<<1<<endl;
        return;
    }
    int count=1;
    while(n>3){
        n=n/4;
        count*=2;
    }
cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
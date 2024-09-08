#include<iostream>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    if(l==1 && r==0){
        cout<<"Yes";
    }
    else if(l==0 && r==1){
        cout<<"No";
    }
    else{
        cout<<"Invalid";
    }
}
#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    if(n%2==0) cout<<"Sakurako"<<endl;
    else cout<<"Kosuke"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
using namespace std;
string calc(){
    int n;
    cin>>n;
    if(n%3==0){
        return "Second";
    }
    else{
        return "First";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}
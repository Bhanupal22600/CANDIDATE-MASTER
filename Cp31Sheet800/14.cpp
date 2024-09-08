#include<iostream>
using namespace std;
string calc(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        if(c%2==0){
            return "Second";
        }
        else{
            return "First";
        }
    }
    else if(a>b){
        return "First";
    }
    else{
        return "Second";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}
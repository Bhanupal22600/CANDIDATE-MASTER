#include<iostream>
using namespace std;
void calc(){
    int a,b;
    cin>>a>>b;
    if(a>=b){
         cout<<a<<endl;
         return;
    }
    else{
        int k=b-a;
        if(b-2*k==a-k && a-k>0){
            cout<<a-k<<endl;
        }
        else{
        cout<<0<<endl;
        }

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    calc();
}
}
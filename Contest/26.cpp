#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int a=n%10;
    int b=n/10;
    cout<<a+b<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();

    }
}
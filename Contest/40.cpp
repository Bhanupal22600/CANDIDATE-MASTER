#include<iostream>
using namespace std;
void calc(){
    int a,b;
    cin>>a>>b;
    cout<<b-a<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int i=1;
    while(n>0){
        cout<<i<<" ";
        i+=2;
        n--;
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
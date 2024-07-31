#include<iostream>
using namespace std;
void ZigZag(int n){
    if(n==0) return;
    cout<<n;
    ZigZag(n-1);
    cout<<n;
    ZigZag(n-1);
    cout<<n;
}

int main(){
    ZigZag(3);
}

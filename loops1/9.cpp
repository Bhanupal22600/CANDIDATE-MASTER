//WAP to count digits of a given no
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int a=n;
    while(n>0){
        count++;
        n/=10;

    }
    if(a==0) cout<<1;
    else cout<<count;
}
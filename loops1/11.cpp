//WAP to print reverse of a given no.
#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int lstdigit;
    int rvr=0;
    while(n>0){
        
        lstdigit=n%10;
        rvr*=10;
        rvr+=lstdigit;
        n/=10;

    }
    cout<<rvr;
}
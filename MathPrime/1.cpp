/*
there is a property that for an no its divisors are exist in pairs
i.e if 'n' is divisible by 'i' ,it means 'i' is a factor of n
e.g: 60=1,2,3,4,5,6,10,12,15,20,30,60
here see [1,60] eska prd=60 similarly (2,30).....(6,10)
*/
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
void printfactor(int n){
    for(int i=1;i<sqrt(n);i++){//T.C=O((n)^1/2);
        if(n%i==0) {
            cout<<i<<" "; 
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }
}
int main(){

    printfactor(60);
}
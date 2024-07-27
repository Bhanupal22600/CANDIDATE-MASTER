#include<iostream>
using namespace std;
int pow(int x, int n){
    if(n==1) return x;
    int ans=pow(x,n/2);
    if(n%2==0){
        return ans*ans;//formula pow(x,n)=pow(x,n/2)*pow(x,n/2)
    }
    if(n%2!=0){
        return ans*ans*x;
    }
    
}
//T.C=O(logn)
//S.C=O(logn)
int main(){
    cout<<pow(3,5);
}
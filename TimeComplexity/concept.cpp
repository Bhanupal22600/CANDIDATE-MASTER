//Big oh notation - use to calculate time complexity of code
#include<iostream>
using namespace std;
int main(){
    //Calculate the time complexity for iterating in a loop.
    for(int i=0;i<n;i++){
        cout<<"bhanu";
    }
    // n iteration ho rhe means time complexity-O(n)



    //What if this time we increment the pointer by 2?
    for(int i=0;i<n;i+=2){
        cout<<"bhanu";
    }
    //time complexity is - O(n/2) ~ O(n)
    //O(kn)=O(n) k is constant 



    for(int i=1;i<n-7;i++){
        cout<<"bhanu";
    }
    //n-7 time iteration so
    //O(n-7)~O(n)
    //O(n+-k) ~ O(n)


    // eg O(5*n^3+3)~ O(5*n^3)~ O(n^3)
    // O(n^2+n) = O(n^2)
    //O(n^(13/2)+7*n^4-2*n^3+6*n)~O(n^(13/2))
    //O(k1*n^m(+-)k2*n^(m-1)(+-)k3*n^(m-2))~O(n^m) this is generise formula

}

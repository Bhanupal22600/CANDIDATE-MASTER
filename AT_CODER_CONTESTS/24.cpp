#include<iostream>
using namespace std;
long long calc(long long a){
    long long b=a+1;
    long long j=a;
    long long k=b;
   long long sum1=0;
    while(j){
        sum1+=j%10;
        j=j/10;

    }
    long long sum2=0;
    while(b){
        sum2+=b%10;
        b=b/10; 
    }

    long long u=a%sum1;
    long long v=k%sum2;

    if((u==0 && v==0)){
        return 1;
    }
    else {
        return 0;
    }





}
int main(){
    long long n;
    cin>>n;
    for(long long i=n;i<2*n;i++){
        if(calc(i)){
            cout<<i;
            return 0;
        }
    }
    return -1;
}
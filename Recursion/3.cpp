#include<iostream>
using namespace std;
// problem=kaam + small problem
//eg. sum(10)=10+sum(9)
int sum2(int n){
    if(n==0) return 0;
    return n+sum2(n-1);
}

//parameterised method esme simply hm two cariable lete hai
void sum1toN(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum1toN(sum+n,n-1);
}

int main(){
    sum1toN(0,10);
    cout<<sum2(10);

}
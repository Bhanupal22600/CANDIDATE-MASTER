// there are n friends every one can go to party single or in pair with one more how many different ways can n friend goes to party
#include<iostream>
using namespace std;

int f(int n){
    if(n==1 or n==2) return n;
    return f(n-1)+ (n-1)*f(n-2);
}
int main(){
    cout<<f(4)<<endl;
    return 0;
}
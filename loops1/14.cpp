//print the nth fibonacci no.
// 1 1 2 3 5 8 13 21 34...
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    
}
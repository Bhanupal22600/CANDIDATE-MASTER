//Ques:Write a func to calc the nth fibonacci no using recursion.
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    //1 1 2 3 5 8 13 21 34 55 89 ...
    cout<<fibo(8);
}
/*for n
1+2^1+2^2+2^3....2^n-1
T.C=O(2^n)
this is called expontial time complexity
*/
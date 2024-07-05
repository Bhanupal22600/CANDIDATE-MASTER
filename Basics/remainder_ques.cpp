#include<iostream>
using namespace std;
int main(){
//take two integer ,a and b:a>b,and find the remainder when a is divided by b
int a=5,b=2;
int quotient;
quotient=a/b;
int rem;
rem=a-b*quotient;
cout<<rem<<endl;
int r;
r=a%b;
cout<<r;
// prop of modulus
// if a<b a%b=a 
// a%(-b)=a%b if a>b
// (-a)%b=-(a%b)
// (-a)%(-b)=(-a)%b=-(a%b)
// 

}

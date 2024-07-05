#include<iostream>
using namespace std;
int main(){
int x=5;
int* p=&x;
cout<<p<<endl;
cout<<*p<<endl;
*p=3;
cout<<x;
}
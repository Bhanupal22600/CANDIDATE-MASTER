#include<iostream>
using namespace std;
int a=9;
void f(){
    cout<<a;
}
int main(){

a=7;//this change global value also
cout<<a<<endl;
f();
}

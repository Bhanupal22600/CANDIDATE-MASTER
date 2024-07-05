//write a program to create a calc that performs basic arithmetic operations(add,subtract ,multiply and divide ) using switch case and functions. The calc should input two no's and an operator from user.
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    char ch;
    cin>>ch;
    switch(ch){
        case '+'://as case k aage hm condn dete hai # we can do this even with if else
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;

        
    }
}
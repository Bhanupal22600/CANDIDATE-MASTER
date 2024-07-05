#include<iostream>
using namespace std;
int main(){
     int x=5;
     int* ptr=&x;
     cout<<ptr<<endl;
     ptr=ptr+1;//yaha pr usi size k datatype k bytes ki addn hoti hai for int =4 byte
     cout<<ptr<<endl;//as 4 byte badh gya kyuki integer hai so 8->c
     bool flag=true;
     bool* ptr1=&flag;
     cout<<ptr1<<endl;
     ptr1=ptr1+1;//as bool size is 1 byte so increase 1 byte only in adress
     cout<<ptr1<<endl;
}
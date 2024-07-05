//write a program to calc sum of two no using pointers.
#include<iostream>
using namespace std;
int main(){
   int x=6;
   int y=7;
   int* p1=&x;//p1 ek dabba bana jisme address store hua x ka
   int* p2=&y;
   cout<<*p1+ *p2;//*p1 means pi m jisi address hai uspr jao and us address pr jo value hai use lao
}
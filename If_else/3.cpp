//take positive integer input and tell if it is a three digit no or not
#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 if(n>=100 && n<=999){// && ->logical and , ||-> logical or
    cout<<"three digit no";
 }
 else {
    cout<<"not";
 }
}

//take 3 positive integers input and print the greatesy of them without using && and ||
#include<iostream>
using namespace std;
int main(){

  int a,b,c;
  cin>>a>>b>>c;
  if(a>b){
    if(a>c){
        cout<<a;
    }
    else{ // c>a, a>b ->c>a>b
        cout<<c;
    } 
  } 
  else{
    if(b>c){
        cout<<b;

    }
    else{
        cout<<c;
    }
  }

}
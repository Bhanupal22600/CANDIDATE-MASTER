//Take 3 no input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"yes ";

    }
    else{
        cout<<"no";
    }
}
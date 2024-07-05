//Take float input and print the fractional part of the real no.
#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    int y=int(x);
    if(y<0) y=y-1;//GIF of negitive no is eg [-1.4] =-2, [7.3]=7
    float z=(float)y;
    x=x-z;
    cout<<x;

}
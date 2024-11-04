#include<iostream>
using namespace std;
int main(){
    int x=23;
    int y=31;
    cout<<__builtin_popcount(x^y)<<"\n";//because xor ans 1 tabhi degaa when bits of x and y is diff means flip so cout no of one after xor will tell you how many flips needed
    return 0;
}
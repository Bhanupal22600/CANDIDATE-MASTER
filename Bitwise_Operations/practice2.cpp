//Given an integer n,find the maximum power of two that is smaller than n.
#include<iostream>
using namespace std;
int max_power_of2(int n){
    //eg n=100000
    n=n|(n>>1);//n=110000
    n=n|(n>>2);//n=111100
    n=n|(n>>4);//n=111111
    n=n|(n>>8);
    n=n|(n>>16);
    return (n+1)>>1;//(n+1/2)
//optimised soln
}
int main(){
    int x=24;
    int temp;
    while(x!=0){
        temp=x;
        x=x&(x-1);
    }
    cout<<temp<<"\n";
    int y=23;
    cout<<max_power_of2(y)<<"\n";
    return 0;
}
/*
n=24
24=11000
23=10111
&

16=10000
01111
&
00000

if we 
*/
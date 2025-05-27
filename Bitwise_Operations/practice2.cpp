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
    // method 1
    int x=24;
    int temp;
    while(x!=0){
        temp=x;
        x=x&(x-1);
    }
    cout<<temp<<"\n";// here temp m ab pta hai kya store rha hoga 16 as last set bit in 24 is 10000 which is 16 and so
    
    // method 2
    // find maxm power greater than 2
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
/*
there is a concept exist(brian kerniglern's algo) :
n=22 ,count no of set bit


22- 22&21-> 10110 & 10101 == 10100(20)

20&19-> 10100 & 10011=10000(16)

16&15->10000 & 01111 = 00000(0)

prop is x&x-1 last set bit ko 0 kr dega in x for reference see above

this helps is counting no of set bit in any number here it is 22

although we can find set bit using for loop by taking every char  in binary sting of number but it is inefficient as we also unnessary looping for char i.e 0 
,but in the abobve method we tkaing only no of set bit step
*/
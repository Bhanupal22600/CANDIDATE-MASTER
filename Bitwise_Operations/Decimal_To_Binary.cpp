#include<iostream>
#include<string>
using namespace std;
string decimal_to_binary(int num){
    if(num==0) return 0;
    string result="";
    while(num>0){
        if(num%2==0){
            //even
            result = "0"+ result;
        }
        else{
            result="1" + result;
        }
        num=num/2;
        // or num=num>>1 also work
    }
    return result;
}
int main(){
    cout<<decimal_to_binary(5)<<"\n";
    return 0;
}

/*
0:0000
1:0001
2:0010
3:0011
4:0100
5:0101
6:0110
7:0111
8:1000

here we notice that har even ki lsb is 0 and lsb of every odd is 1

now after that we do >> right shift to get remaining bits of a no
for eg 5 101 become 010 after removing last 1 and add zero in msb which is
2 in decimal rpst(010) as also 5/2=2



NOTE:
x<<1 = x*2;
x<<2 = x*2^2;
x<<3 = x*2^3

x>>1 = x/2;
x>>2 = x/2^2;
x>>3 = x/2^3;
*/
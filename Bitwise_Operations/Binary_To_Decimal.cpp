#include<iostream>
using namespace std;
int binary_to_decimal(string &binary){
    int n=binary.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch =binary[i];//ch ya 49(if bianry[i]=1) hoga ya 48(if 0)  
        int num =ch-'0';// num is either 1 or 0; char value of 0 is 48
        result+= num*(1<<(n-i-1));//below
    }
    return result;
}
int main(){
    string str="001101";
    cout<<binary_to_decimal(str)<<"\n";
    return 0;
}
/*
2^0=1;binary:1
2^1=2;binary:10
2^2=4;binary:100
2^3=8;binary:1000
2^4=16;binary:10000
2^5=32;binary:100000

we can says
1 ke aage x zero means 2^x


left shift << opertor shift  bits towards left 
eg 5<<2 here we shift the  two binary bits of 5 towards left so 
we have initially 00000101 and after shift operator that we have 00010100(we can also says that we put some zeroes in right of binary digits of no on left to the shift operator by that no which is on right of shift operator)
for eg 7<<3 here binary of 7 is lets says we have 8 bits integer 00000111
so we shift 3 bits here 00111000 and delete first 3 bits of this binary

we get if we have y<<x then jo binary hogi y ki uske aage x zeroes lag jate hai

so if we have 1<<x
binary of 1 is 1 and eske aage x zeroes aajayennge which means 2 ki power x 
*/
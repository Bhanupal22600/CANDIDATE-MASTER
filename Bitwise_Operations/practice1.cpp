//Find the no of set bits for any integer n.
#include<iostream>
using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n);// yeh built in func hai in c++ yeh hme kisi bhi no ki binary m kitne 1 hai bta dega
}


int count_set_bits_2(int n){
    int count =0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main(){
    cout<<count_set_bits(5)<<"\n";
    return 0;
}
/*
jab bhi 
x
x-1 
hoga then we always sees that

for eg.
13=1101
12=1100

10=1010
9=1001

6=110
5=101

16=10000
15=01111


we notice that in every x and x-1 pair one part is same and other part is flipped 
and it start with last 1(set bit) in x before this everything is same and from this everything is just opposite


we used above concept to code builtin_pop_count
i.e x & x-1(means bit by bit and gate of x and x-1 ka)
it gives 
e.g 22 & 21 (10110 & 10101) =10100 here we see that jo last set bit thi wo ud gyi in 22(x)
we do again in (10100 & 10011)(20 & 19)=10000(16)
again 16 & 15(10000 & 01111)=00000
*/
//Calculate Greatest Common Divisor of two no's.
#include<iostream>
using namespace std;
int hcf(int a, int b){
    for(int i=min(a,b); i>=2; i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}


/*Iterative
T.C=O(min(a,b))
*/
/*Euclid's division algo
in 2nd class we studied this algo to find hcf of two no
eg. 24,60 hcf=12
we can get it through euclid algo divide 60 by 24 
now remainder(i.e=12) become divisor for last divisor(which now become divident i.e=24)
and we do this step repeatidely until we get remainder 0 
and at any step we get then us step ka jo divisor tha wo hi hcf hoga 
so here in step 2 we get 0 when we divide 24 by 12 hence 12 is the hcf and here we get this in only 2 step
worst case e.g=1000,1001 hcf=?
we get 0 in 2nd step through euclid division hence divisior ie.1 is hcf
but through our iterative method we get it in 1000 iteration hence euclid algo is efficient
*/
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);//this will work for all a n=and b as you may wonder ki when a>b int that case in our 1st recursive call we get (b%a,a)=(b,a) as a>b
    
}
//T.C=O(log(a+b))
int main(){
    int a=24;
    int b=60;
    cout<<hcf(a,b);
    cout<<gcd(a,b);
}
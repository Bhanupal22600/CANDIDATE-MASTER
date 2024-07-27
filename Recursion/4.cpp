//Make a function which calculates 'a' raised to the power 'b' using recursion.
#include<iostream>
using namespace std;
//recursive soln
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
//T.C=O(b)
//S.C=O(b+a) stack frames # as kyuki har recursive func aapna new variable(do naye dabbe) banayega jo us func tak simit hoga

// recursve func looks better but iyterative is much better in terms of space complexity


//iterative soln
int power(int a,int b){
    if(a==0 && b==0){
        cout<<"0 raised to the power 0 is not defined";
        return -100;
    }
    if(a==0) return 0;
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
//T.C=O(b)

int main(){
    cout<<power(3,6)<<endl;
    cout<<pow(3,6);

}
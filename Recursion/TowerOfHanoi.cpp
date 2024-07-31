#include<cmath>
#include<iostream>
using namespace std;
//print path
//void hanoi(int n,source rod,helper rod, destination rod)// yeh fix rhegi bas call krte samay souce can be (a,b,c ) similarly helper and destination
void hanoi(int n,char a,char b,char c){
    if(n==0) return;//base case
    hanoi(n-1,a,c,b);//call
    cout<<a<<" -> "<<c<<endl;//kaam
    hanoi(n-1,b,a,c);//call here(b is source , a is helper, c is destination)

}


//print minm no of operation
int mini(int n){
    return pow(2,n)-1;
}

int main(){
    int n=4;
    cout<<mini(n)<<endl;
    hanoi(n,'A','B','C');

}
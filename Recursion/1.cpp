//Make a func which calc the factorial of n using recursion
#include<iostream>
using namespace std;
int fact(int n){
    //base case yeh define krta hai muje kab recursion rokna hai
    if(n==1 || n==0) return 1;
    //recursive call
    return n*fact(n-1);
}
void factUpto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
    return;
}
int main(){
  factUpto(5);//using loop
  cout<<fact(5);// using recursion
  
}
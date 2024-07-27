#include<iostream>
using namespace std;
void print2(int n){
    if(n==0) return;
    print2(n-1);//call k baad kaam krenge
    cout<<n<<endl;//kaam
}
void print1(int n){
    //base case
    if(n==0) return;
    cout<<n<<endl;//kaam krenge phele then call
    print1(n-1);//call
}
int main(){
   print1(6);//6 to 1 print krne k liye
   cout<<endl ;
   print2(6);// 1 to 6 print krne k liye
}
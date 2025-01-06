#include<iostream>
using namespace std;
void calc(){
    int n,m;
    cin>>n>>m;
    int sum=0;
     if(n>=m){
        sum+=n;

     }
     else{
        sum+=m;
     }
     cout<<++sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
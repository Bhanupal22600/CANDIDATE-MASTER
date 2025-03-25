#include<iostream>
using namespace std;
void calc(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long  a = (n*m)-k;
    long long  gap = a/n;
    long long  b= (k+n-1)/n;
    long long  val = b;

    
       cout<< (val+gap)/(gap+1)<<endl;
       return;
    }


int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int s=0;
    int k=n-1;
    while(k>0){
        s+=k;
        k-=2;
    }
    cout<<s+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
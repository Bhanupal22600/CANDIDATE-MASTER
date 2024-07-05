#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++){
        int k;
         cin>>k;
         sum+=k;   

    }
    float ans=sum/n;
    cout<<ans;
}
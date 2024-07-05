#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        
       cout<<endl;
        }
        for(int a=n-1;a>=1;a--){

        for(int l=n-a;l>=1;l--){
            cout<<" ";
        }
        for(int b=1;b<=2*(a)-1;b++){
            cout<<"*";
        }
        cout<<endl;

    }}


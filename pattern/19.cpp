#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int v=1;v<=2*n-1;v++){
    cout<<"*";
   }
   cout<<endl;
    int m=n-1;
    for(int a=1;a<=m;a++){
        for(int b=1;b<=n-a;b++){
            cout<<"*";
        }
        for(int c=1;c<=2*a-1;c++){
            cout<<" ";
        }
        for(int d=n-a;d>=1;d--){
            cout<<"*";
        }
        cout<<endl;

    }

}
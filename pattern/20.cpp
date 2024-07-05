#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int v=1;v<=2*n-1;v++){
    cout<<v;
   }
   cout<<endl;
    int m=n-1;
    for(int a=1;a<=m;a++){
        for(int b=1;b<=n-a;b++){
            cout<<b;
        }
        for(int c=1;c<=2*a-1;c++){
            cout<<" ";
        }
        for(int d=n+a;d<=2*n-1;d++){
            cout<<d;
        }
        cout<<endl;

    }

}
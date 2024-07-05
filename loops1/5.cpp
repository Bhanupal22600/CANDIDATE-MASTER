// 4,7,10,13...upto n terms
#include<iostream>
using namespace std;
int main(){
     int n;
     int a=4;
     cin>>n;
     for(int i=1;i<=n;i+=1){// in this method we dont need to worry about an terms value.
         cout<<a<<endl;
         a=a+3;
     }
}
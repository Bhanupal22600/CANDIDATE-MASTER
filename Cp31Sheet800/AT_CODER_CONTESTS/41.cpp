#include <bits/stdc++.h>
using namespace std;

void calc() {
   float a,b;
   cin>>a>>b;
   float k = a/b;
   int l,m;
   l=floor(k);
   m=ceil(k);
   if(abs(l-k)<=abs(m-k)){
    cout<<l;
    return;
   }
   else{
    cout<<m;
    return;
   }

    
}
int main(){
    calc();
}


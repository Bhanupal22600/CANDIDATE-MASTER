#include <bits/stdc++.h>
using namespace std;

void calc() {
   string s;
   cin>>s;
   int n=stoi(s);
   int k=sqrt(n);
   if(k*k==n){
    cout<<0<<" "<<k<<endl;
    return;
   }
   else{
    cout<<-1<<endl;
    return;
   }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
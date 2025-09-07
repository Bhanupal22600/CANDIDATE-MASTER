#include <bits/stdc++.h>
using namespace std;

void calc() {
   string s;
   cin>>s;
   int cn=0;
   int n=s.size();
   for(int i=0;i<n;i++){
        if(s[i]=='#'){
            if(cn%2==0)
            cout<<i+1<<",";
            else cout<<i+1<<endl;
            cn++;
        }
   }
   return ;
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
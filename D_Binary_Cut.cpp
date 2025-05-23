#include <bits/stdc++.h>
using namespace std;

void calc() {
   string s;
   cin>>s;
   int cn=0;
   int cn1=0;
   for(int i=0;i<s.size()-1;i++){
    if(s[i]=='1' && s[i+1]=='0') cn++;
    if(s[i]=='0' && s[i+1]=='1') cn1++;
   }
   if(cn1>1){
    cout<<cn+1+cn1-1<<endl;
    return;
   }
   cout<<cn+1<<endl;
   return;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void calc() {
   int n;
   cin>>n;
   string s;
   cin>>s;
   int flag1=0;
   int flag2=0;
   int idx=-1;
   for(int i=0;i<n-1;i++){
        if(s[i]=='1' && s[i+1]=='0'){
            flag1=1;
            idx=i;
            break;
        }
   }
   if(flag1){
   for(int i=idx+1;i<n-1 ;i++){
        if(s[i]=='0' && s[i+1]=='1'){
            flag2=1; 
            break;
        }
   }
}
   int cn=0;
   for(int i=0;i<n-1;i++){
    if(s[i]=='0' && s[i+1]=='1'){
        cn++;
    }
    else if(s[i]=='1' && s[i+1]=='0'){
        cn++;
    }
   }
   if(s[0]=='1'){
    cn++;
   }
   if(flag1==1 && flag2==1){
        cout<<cn+n-2<<endl;
        return;
   }
   else if(flag1==0 ){
        cout<<cn+n<<endl;
        return;
   }
   else if(flag1==1 && flag2==0){
    cout<<cn+n-1<<endl;
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
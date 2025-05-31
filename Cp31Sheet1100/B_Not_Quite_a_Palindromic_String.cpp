#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    int cn1=0;
    int cn0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') cn1++;
        else cn0++;
    }
    cn1=cn1/2;
    cn0=cn0/2;
    for(int i=abs(cn1-cn0);i<=cn1+cn0;i+=2){
        if(i==k){
            cout<<"YES"<<endl;
            return;
        }
    }
   
        cout<<"NO"<<endl;
    
    
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
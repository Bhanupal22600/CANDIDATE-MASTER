#include <bits/stdc++.h>
using namespace std;

void calc() {
    string s;
    cin>>s;
    int cn=0;
    int a=0;
    int b=0;
    int id=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') cn++;
        else cn--;
        if(cn==0){
            id=i;
            a=1;
            break;
        } 
    }
    for(int i=id+1;i<s.size();i++){
        if(s[i]=='(') cn++;
        else cn--;
        if(cn==0){
            id=i;
            b=1;
            break;
        } 
    }
    if(a==1 && b==1){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    string s;
    cin>>s;
    char a=s[0];
    char b;
    bool flag = false;
    int idx=0;
    for(int i=1;i<s.size();i++){
        if(s[i]!=a){
            flag =true;
            b=s[i];
            idx=i;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<b;
        for(int i=1;i<s.size();i++){
            if(i==idx){
                cout<<a;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
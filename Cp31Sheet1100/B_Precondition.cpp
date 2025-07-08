#include <bits/stdc++.h>
using namespace std;

void calc() {
    string s,t;
    cin>>s>>t;
    for(int i=1;i<s.size();i++){
        if(65<=s[i] && s[i]<=90) {
            int flag=0;
            for(int j=0;j<t.size();j++){
                
                if(s[i-1]==t[j]){
                    flag=1;
                    break;
                } 

            }
            if(!flag){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;
    return;
}
int main() {
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}
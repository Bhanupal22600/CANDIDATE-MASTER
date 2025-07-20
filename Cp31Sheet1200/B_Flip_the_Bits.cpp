#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    string s,t;
    cin>>s>>t;
    int zeros=0;
    int ones=0;
    vector<int> z(n);
    vector<int> o(n);
    for(int i=0;i<n;i++){
        if(s[i]=='0') zeros++;
        else ones++;
        z[i]=zeros;
        o[i]=ones;
    }
    vector<int> bal(n,0);
    for(int i=0;i<n;i++){
        if(z[i]==o[i]) bal[i]=1;
    }
    int flag=0;
    int cn=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]!=t[i] && flag==0) {
            if(bal[i]==1) flag=1;
            else {
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(s[i]==t[i]){
            if(flag) {
                if(bal[i]==1) flag=0;
                else {
                    cout<<"NO"<<endl;
                    return;
                }
            }

        }
    }
    cout<<"YES"<<endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

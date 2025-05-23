#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cn=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cn+=n-1;
        }
        else{
            cn++;
        }
    }
    cout<<cn<<endl;
    return ;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    string t;
    string a;
    cin>>t;
    cin>>a;
    for(int i=0;i<n;i++){
        if(t[i]==a[i] && t[i]=='o'){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    return;
}

int main() {
        calc();
    return 0;
}
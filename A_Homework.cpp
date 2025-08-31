#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int m;
    cin>>m;
    vector<char> u(m);
    vector<char> w(m);
    for (int i = 0; i < m; i++) {
        cin >> u[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> w[i];
    }
    for(int i=0;i<m;i++){
        if(w[i]=='D'){
            s=s+u[i];
        }
        else{
            s=u[i]+s;
        }
    }
    cout<<s<<endl;
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
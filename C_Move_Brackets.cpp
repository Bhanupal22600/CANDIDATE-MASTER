#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<char> v(n);
    int o=0;
    int c=0;
    int cn=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]=='(') {
            o++;
        }
        else{
            c++;
        }
        if(c>o) {
            cn++;
            c--;
        }
    }
    cout<<cn<<endl;
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
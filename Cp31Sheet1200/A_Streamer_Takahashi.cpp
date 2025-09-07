#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,l,r;
    cin >> n>>l>>r;
    int a,b;
    int cn=0;
    for (int i = 0; i < n; i++) {
        cin >> a>>b;
        if(a<=l && b>=r) cn++;
    }
    cout<<cn<<endl;
    return;
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
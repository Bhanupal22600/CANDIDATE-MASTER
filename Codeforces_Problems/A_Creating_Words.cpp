#include <bits/stdc++.h>
using namespace std;

void calc() {
    // your logic here
    string a,b,t;
    cin>>a>>b;
    t=a;
    a[0]=b[0];
    b[0]=t[0];
    cout<<a<<" "<<b<<endl;;
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
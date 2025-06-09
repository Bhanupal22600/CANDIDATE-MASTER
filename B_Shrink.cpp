#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    cout<<1<<" ";
    for(int i=3;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<2<<" ";
    cout<<endl;
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    n=n/2;
    int ans=3;
    while(n){
        n=n/2;
        ans+=2;
    }
    cout<<ans<<endl;
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
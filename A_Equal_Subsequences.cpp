#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cout<<1;
    }
    for(int i=0;i<n-k;i++){
        cout<<0;
    }
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
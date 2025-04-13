#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    if(m<abs(l)){
        cout<<-m<<" "<<0<<endl;
        return;
    }
    cout<<l<<" "<<m+l<<endl;
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
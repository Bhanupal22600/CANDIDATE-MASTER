#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m,k;
    cin>>n>>m>>k;
    while(n>=1){
        if(n<=m) break;
        cout<<n<<" ";
        n--;
    }
    int i=1;
    while(i<=m){
        cout<<i<<" ";
        i++;
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
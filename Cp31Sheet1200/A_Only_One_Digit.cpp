#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    int minm=INT_MAX;
    while(n!=0){
        minm=min(minm,n%10);
        n=n/10;
    }
    cout<<minm<<endl;
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
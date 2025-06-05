#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v(n+1,n+1);
    long long minm=LONG_LONG_MAX;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        minm=min(minm,v[i]);
    }
    long long cost=minm*(n-1);
    long long cn=1;
    for(long long i=0;i<n;i++){
        if(v[i]!=v[i+1]){
            cost=min(cost,(n-cn)*v[i]);
            cn=1;
        }
        else{
            cn++;
        }
    }
    // cost=min(cost,(n-cn)*v[i]);
    cout<<cost<<endl;
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
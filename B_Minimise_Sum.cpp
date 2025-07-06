#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long  n;
    cin >> n;
    vector<long long> v(n);
    long long flag=0;
    long long cost=0;
    long long minm=INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]==0) flag=1;
        minm=min(minm,v[i]);
        if(flag==0){
            cost+=minm;
        }
    }
    long long ans=min(cost,v[0]+v[1]);
    if(n>2){
    ans=min(ans,v[0]+min(v[0],v[1]+v[2]));
    }
    cout<<ans<<endl;
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
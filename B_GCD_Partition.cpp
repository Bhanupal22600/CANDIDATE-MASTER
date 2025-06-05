#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long s=0;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }
    long long maxm=0;
    long long r=0;
    for(int i=0;i<n-1;i++){
        r+=v[i];
        s-=v[i];
        long long k=__gcd(r,s);
        maxm=max(k,maxm);
    }
    cout<<maxm<<endl;
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
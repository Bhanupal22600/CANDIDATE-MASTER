#include <bits/stdc++.h>
const long long MOD = 1e9 + 7;
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<n;i++){
        cin>>b[i];
    }
    vector<long long> s(n);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (long long i = 0; i < n; i++) {
        s[i] = a.end() - upper_bound(a.begin(), a.end(), b[i]);
    }
    long long ans=1;
    for(long long i=0;i<n;i++){
        if(s[i]<n-i){
            cout<<0<<endl;
            return;
        }
    }
    long long k=0;
    for(long long i=n-1;i>=0;i--){
        ans=(ans*(s[i]-k))% MOD;
        k++;
    }
    cout<<ans<<endl;
    return;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
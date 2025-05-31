#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    vector<long long> u;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        if(n%(i+1)==0){
            u.push_back(i+1);
        }
    }
    long long ans=0;
    for(auto el:u){
        long long cn=0;
        long long maxm=LONG_LONG_MIN;
        long long mx=0;
        long long minm=LONG_LONG_MAX;
        for(long long i=0;i<n;i++){
            mx+=v[i];
            cn++;
            if(cn==el){
                maxm=max(maxm,mx);
                minm=min(minm,mx);
                mx=0;
                cn=0;
            }
        }
        ans=max(ans,abs(maxm-minm));
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>> v(n,vector<long long>(m));
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    long long ans=0;
    for(long long i=0;i<m;i++){
        vector<long long> u;
        for(long long j=0;j<n;j++){
            u.push_back(v[j][i]);
        }
        sort(u.begin(),u.end());
        for(long long i=0;i<n;i++){
            ans+=-(n-(i+1))*u[i]+(i)*u[i];
        }
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
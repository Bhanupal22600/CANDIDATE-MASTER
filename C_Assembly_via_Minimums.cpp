#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v((n*(n-1))/2);
    for(long long i=0;i<(n*(n-1))/2;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<long long> ans;
    long long cn=0;
    long long k=n-1;
    for(long long i=0;i<n*(n-1)/2;i++){
        cn++;
        if(cn==k){
            ans.push_back(v[i]);
            cn=0;
            k--;
        }
    }
    ans.push_back(v[(n*(n-1))/2-1]);
    for(auto el : ans){
        cout<<el<<" ";
    }
    cout<<endl;
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
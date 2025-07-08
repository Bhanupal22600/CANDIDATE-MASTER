#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long f=0;
    vector<vector<long long>> ans;
    long long cn=0;
    for(long long i=n-2;i>=0;i--){
        if( (v[i]>v[i+1] && (v[i+1]-v[n-1] > v[i+1] || i==n-2))){
            cout<<-1<<endl;
            return;
        }
        else if(v[i]>v[i+1] && v[i+1]-v[n-1] <= v[i+1]){
            f=1;
            cn++;
            ans.push_back({i+1,i+2,n});
            v[i]=v[i+1]-v[n-1];
        }
    }
    if(!f) {
        cout<<0<<endl;
        return;
    }
    cout<<cn<<endl;
    for(auto el : ans){
        for(auto i :el){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
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
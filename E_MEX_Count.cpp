#include <bits/stdc++.h>
using namespace std;

void calc() {
    //in
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    //mex calc
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(v[i]);
    }
    int mex=s.size();
    int cn1=0;
    for(auto el : s){
        if(el!=cn1){
            mex=cn1;
            break;
        }
        cn1++;
    }


    vector<int> ans(n+1,1);
    if(mex<1){
        for(auto el : ans){
            el=mex;
        }
        for(auto el : ans){
        cout<<el<<" ";
        }
    cout<<endl;
    return;
    }
    int k=n-1;
    for(int i=0;i<mex-1;i++){
        ans[k]=i+2;
        k--;
    }
    map<int,int> help;
    for(auto el : mp){
        if(el.first<mex) {
            help[el.second]++;
        }
    }
    for(int i=1;i<=k;i++){
        ans[i]=ans[i-1]+help[i];
    }
    
    for(auto el : ans){
        cout<<el<<" ";
    }
    cout<<endl;
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
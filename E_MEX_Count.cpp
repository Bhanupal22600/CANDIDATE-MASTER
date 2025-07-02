#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    vector<int> ans;
    int s=mp.size();
    for(int k=0;k<=n;k++){
        int cn=0;
        int flag=0;
        if(k==0 || k==n) ans.push_back(1);
        else if(k<=n/2){ 
            for(auto el : mp){
                if(el.second<=k) cn++;
                if(el.first==0 && el.second<=k) flag=1;  
            }
            if(flag){
                ans.push_back(cn);
            }
            else{
                ans.push_back(cn+1);
            }
        }
        else{
            ans.push_back(s);
            s--;
        }
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
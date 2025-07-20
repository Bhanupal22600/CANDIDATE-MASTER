#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m;
    cin >> n>>m;
    vector<int> v(n);
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i]=v[i]%m;
        s.insert(v[i]);
    }
    int cn=0;
    unordered_map<int,int> mp;
    for(auto el : v){
        mp[el]++;
    }
    for(auto el : mp){
        if(el.first!=0){
           if(s.find(el.first)!=s.end()){ 
           if(s.find(m-el.first)!=s.end()){
                int diff=abs(mp[m-el.first]-mp[el.first]);
                cn++;
                while(diff>1){
                    cn++;
                    diff--;
                }
                s.erase(el.first);
                s.erase(m-el.first);
            }
            else if(m%2==0 && el.first*2==m){
                cn++;
                s.erase(el.first);
            }
            else{
                cn+=el.second;
                s.erase(el.first);
            }
        }
        }
        else{
            s.erase(el.first);
            cn++;
        }
    }
    cout<<cn<<endl;
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
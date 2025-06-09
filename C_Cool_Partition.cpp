#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    unordered_map<int, int> m,tot;
    int flag=0;
     for(int i = n - 1; i >= 0; i--) {
        if(m.find(v[i]) != m.end()) {
            m[v[i]]=1;
            tot[v[i]]=1;
            flag=m[v[i]];
        }
        else if(m.find(v[i]) == m.end() ){
             flag;
             m.erase(v[i]);
        } 
        else{
            m[v[i]]=1;
        }
    }
    if(flag==0){
        cout<<1<<endl;
        return;
    } 
    cout<<flag<<endl;
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
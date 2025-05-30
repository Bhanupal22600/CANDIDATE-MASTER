#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector <bool> st(31, false);
while (q--){
    int x; cin >> x;
    if (!st[x]){
        st[x] = true;
        for (auto &y : v) if (y % (1 << x) == 0) y += 1 << (x - 1);
    }
}
    for(auto el : v){
        cout<<el<<" ";
    }
    cout<<endl;
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> u;
    int flag=0;
    int ans;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=i ){
            u.push_back(v[i]);
        }
    }
    ans=u[0];
    for(auto el:u){
        ans&=el;
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
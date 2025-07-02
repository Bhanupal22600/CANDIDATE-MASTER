#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cn=0;
    long long s=0;
    sort(v.begin(),v.end());
    int ans=0;
    stack<int> st;
    for(int i=0;i<n;i++){
        s+=v[i];
        if(s<=x) {
            st.push(v[i]);
            cn++;
        }
        else break;
    }
    ans=cn;
    int k=;
    while(st.size()!=0){
        s+=cn*1;
        if(s<=x) ans+=cn;
        else {
            cn--;
            s-=st.top();
            st.pop();
            ans+=cn;
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
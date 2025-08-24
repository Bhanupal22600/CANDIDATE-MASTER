#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long ans=0;
    sort(v.begin(),v.end());
    if(n%2==0){
        for(int i=0;i<n;i+=2){
            ans+=v[i+1];
        }
    }
    else{
        ans+=v[0];
        for(int i=1;i<n;i+=2){
            ans+=v[i+1];
        }
    }
    cout<<ans<<endl;
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
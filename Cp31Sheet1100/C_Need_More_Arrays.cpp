#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> a;
    int b=0;
    int cn=1;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]==1){
            cn++;
        }
        else if(v[i+1]-v[i]==0){
            continue;
        }
        else{
            a.push_back(cn);
            cn=1;
            b++;
        }
    }
    a.push_back(cn);
    int ans=0;
    for(auto el : a){
        ans+=(el+1)/2;
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k,d;
    cin>>n>>k>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(k>=n){
        cout<<0<<endl;
        return;
    }
    int ans=0;
    int l=n-k;
    for(int i=0;i<l;i++){
        if(v[i]>d) ans+=1;
        else{
            ans+= 1 + (d-1)/v[i];
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
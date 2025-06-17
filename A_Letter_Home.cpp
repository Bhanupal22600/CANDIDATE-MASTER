#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,s;
    cin>>n>>s;
    
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=0;
    if(v[n-1]>s){
        if(abs(s-v[n-1])<abs(s-v[0])){
            ans+=abs(s-v[n-1]);
            ans+=abs(v[n-1]-v[0]);
        }
        else{
            ans+=abs(s-v[0]);
            ans+=abs(v[0]-v[n-1]);
        }
        
    }
    else{
        ans=abs(s-v[0]);
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
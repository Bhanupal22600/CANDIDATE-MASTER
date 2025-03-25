#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int cn0=3;
    int cn1=1;
    int cn2=2;
    int cn3=1;
    int cn5=1;
    int cn=0;
    int k=-1;
    for(int i=0;i<n;i++){
        if(cn!=8){
        if(v[i]==0 && cn0>0){
             cn0--; 
             cn++; 
             k=i;
        }
        else if(v[i]==1 && cn1>0){
            cn1--;
            cn++;
            k=i;
        }
        else if(v[i]==2 && cn2>0){
            cn2--;
            cn++;
            k=i;
        }
        else if(v[i]==3 && cn3>0){
            cn3--;
            cn++;
            k=i;
        }
        else if(v[i]==5 && cn5>0){
            cn5--;
            cn++;
            k=i;
        }
    }
    else{
        cout<<i<<endl;
        return;
    }
        
    }
    if(cn==8){
        cout<<k+1<<endl;
        return;
    }
    
    cout << 0 << "\n";
    return;
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
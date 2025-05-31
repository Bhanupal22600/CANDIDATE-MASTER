#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin>>n>>k;
    vector<int> v(k);
    int cn=0;
    int maxm=0;
    int idx=0;
    for(int i=0;i<k;i++){
        cin>>v[i];
        if(v[i]>maxm) {
            maxm=v[i];
            idx=i;
        }
    }
    int s=0;
    for(int i=0;i<k;i++){
        if(i!=idx){
            cn+=v[i]-1;
            s+=v[i];
        }
        
    }
    cn+=s;
    cout<<cn<<endl;
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
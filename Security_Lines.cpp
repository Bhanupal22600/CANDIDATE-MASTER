#include <bits/stdc++.h>
using namespace std;

void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m=n;
    for(int i=0;i<n;i++){
        if(v[i]<i) {
            m=i;
            break;
        }
    }
    int mn=INT_MAX;
    for(int i=0;i<m;i++){
        if(i==0) mn=min(v[i],mn);
        mn=min(mn,v[i]+1);
    }


    int idx=0;
    int val=v[0];
    for(int i=1;i<m;i++){
        if(v[i]+i-idx<=val){
            idx=i;
            val=v[i]+1;
        }
    }
    
    if(m==n){
        cout<<val<<endl;
        return;
    }
    cout<<min(m,mn)<<endl;
    return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    calc();
	}
}

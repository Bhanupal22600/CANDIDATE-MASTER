#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,x;
    cin>>n>>x;
    vector<int> v(n,-1);
    int cn=0;
    for(int i=0;i<n-1;i++){
        if(cn!=x){
            v[i]=cn;
            cn++;
        }
        else{
            cn++;
            v[i]=cn;
            cn++;
        }
    }
    if(x<n){
        v[n-1]=x;
    }
    else{
        v[n-1]=n-1;
    }
    for(auto el : v){
        cout<<el<<" ";
    }
    cout<<endl;
    return ;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
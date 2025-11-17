#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> u(102,0);
    vector<int> v(n);
    int cn=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(u[v[i]]==0){
            cn++;
            u[v[i]]=1;
        }
    }
    cout<<cn<<endl;
    for(int i=1;i<101;i++){
        if(u[i]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return;

    
}
int main() {
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}
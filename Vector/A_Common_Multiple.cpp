#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> u(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        u[v[i]]++;
    }
    int cn=0;
    for(int i=1;i<=n;i++){
        if(u[i]>=1){
            cn++;
        }
    }
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
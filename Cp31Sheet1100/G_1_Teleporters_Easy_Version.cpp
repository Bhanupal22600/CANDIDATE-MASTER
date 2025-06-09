#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,c;
    cin>>n>>c;
    vector<int> v(n);
    vector<int> u(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        u[i]=min(i+1+v[i],v[i]+n-i);
    }
    sort(u.begin(),u.end());
    int cn=0;
    for(int i=0;i<n;i++){
        if(c-u[i]>0){
            cn++;
            c-=u[i];
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> u;
    for(int i=1;i<m;i++){
        u.push_back(v[i]-v[i-1]-1);
    }
    u.push_back(n+v[0]-v[m-1]-1);
    sort(u.begin(),u.end());
    reverse(u.begin(),u.end());
    for(int i=0;i<u.size();i++){
        if(u[i]<=0) break;

        if(u[i]==1) {
            for(int j=i+1;j<u.size();j++){
                u[j]=u[j]-2;
            }
        }
        else{
        for(int j=i;j<u.size();j++){
            if(j==i) u[j]--;
            else u[j]=u[j]-2;
        }
        for(int j=i+1;j<u.size();j++){
            u[j]=u[j]-2;
        }
        }
    }
    int s=0;
    for(int i=0;i<u.size();i++){
        if(u[i]>0)
        s+=u[i];
    }
    cout<<n-s<<endl;
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
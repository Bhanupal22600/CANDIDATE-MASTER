#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,m;
    cin >> n>>m;
    vector<long long> v(n);
    vector<long long> u(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> u[i];
    }
    vector<long long> minm(n,INT_MAX);
    long long mn=INT_MAX;
    for(long long i=0;i<n;i++){
        minm[i]=min(u[i],v[i]);
        mn=min(minm[i],mn);
    }
    long long s=0;
    for(long long i=0;i<n;i++){
        s+=minm[i];
    }
    for(long long i=0;i<m;i++){
        char ch;
        cin>>ch;
        long long a,b;
        cin>>a>>b;
        if(ch=='A'){
            s-=minm[a-1];
            v[a-1]=b;
            minm[a-1]=min(v[a-1],u[a-1]);
            s+=minm[a-1];
                
            
        }
        else{
            s-=minm[a-1];
            u[a-1]=b;
            minm[a-1]=min(u[a-1],v[a-1]);
            s+=minm[a-1];
                
        }
        cout<<s<<endl;
    }
    return ;
    
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
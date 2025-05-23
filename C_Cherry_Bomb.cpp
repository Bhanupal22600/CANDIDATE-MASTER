#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    int minm=INT_MAX;
    int maxm=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        minm=min(minm,a[i]);
        maxm=max(maxm,a[i]);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int x=-1;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(b[i]!=-1){
            x=a[i]+b[i];
            idx=i;
            break;
        }
    }
    for(int i=idx+1;i<n;i++){
        if(b[i]!=-1 && a[i]+b[i]!=x){
            cout<<0<<endl;
            return;
        }
    }
    if(idx==-1){
        cout<<k+minm-maxm+1<<endl;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(b[i]==-1 && a[i]<=x && a[i]+k>=x){
                continue;
            }
            else if( (b[i]==-1 && a[i]>x) || (a[i]+k<x)){
                cout<<0<<endl;
                return;
            }
            
        }
            cout<<1<<endl;
            return;
        
    }


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
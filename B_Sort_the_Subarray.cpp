#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> u(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    int r,l;
    int flag=0;
    int flag1=0;
    int flag2=0;
    int minm=INT_MAX;
    int maxm=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(v[i]!=u[i] && flag==0){
            r=i+1;
            maxm=u[i];
            flag=1;
        }

        // else if(v[i]==u[i] && flag1==0 && flag==1){
        //     l=i+1;
        //     flag1=1;
        // }

        else if(v[i]!=u[i] && flag==1){
                minm=u[i];
                l=i+1;
        }
        else if(flag==1 && v[i]==u[i] ){
            if(u[i]<=minm){
                 minm=u[i];
                l=i+1;
            }
            else{
                break;
            }
           
        }
        
    }
    for(int i=l-1;i>=0;i--){
        if(v[i]==u[i] && u[i]<=minm){
            l=i+1;
            minm=u[i];
        }
        else{
            break;
        }
    }
    for(int i=r;i<n;i++){
        if(v[i]==u[i] && u[i]>=maxm){
            r=i+1;
            maxm=u[i];
        }
        else{
            break;
        }
    }
    cout<<l<<" "<<r<<endl;
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
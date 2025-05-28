#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    int t=0;
    int minm=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(t==0 && v[i]>=0 ){
            t=1;
        }
        minm=max(minm,v[i]);
    }
    if(t==0){
        cout<<minm<<endl;
        return;
    }
    int c=0;
    for(int i=0;i<n;i++){
        if( v[i]<0){
            c++;
        }
        else{
            break;
        }
       
    }
    int s=0;
    int mx=0;
    int flag=-1;
    for(int i=c;i<n;i++){
        if(flag==-1){
            s+=v[i];
            mx=s;
            flag=v[i]%2;
        }
        else if((abs(v[i]))%2!=flag){
            
            s+=v[i];
            if(s<0){
                s=0;
                flag=abs(v[i])%2;
                continue;
            }
            mx=max(mx,s);
            flag=abs(v[i])%2;
        }
        else{
            // mx=max(mx,s);
            s=0;
            if(v[i]<0){
                flag=abs(v[i])%2;
                continue;
            }
            s+=v[i];
            mx=max(mx,s);
            flag=abs(v[i])%2;
        }
    }
    cout<<mx<<endl;
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
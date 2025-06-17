#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    int flag=1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int ans=0;
    if(v[0]<v[1]){
        flag=1;
        ans=2;
    }
    else if(v[0]==v[1]){
        flag=0;
        ans=1;
    }
    else{
        flag=-1;
        ans=2;
    }
    for(int i=1;i<n-1;i++){
        if(flag==1){
            if(v[i]<=v[i+1]){
                continue;
            }
            else{
                ans++;
                flag=-1;
            }
        }
        else if(flag==-1){
            if(v[i]>=v[i+1]){
                continue;
            }
            else{
                ans++;
                flag=1;
            }
        }
        else{
            if(v[i]==v[i+1]){
                continue;
            }
            else if(v[i]<v[i+1]){
                ans++;
                flag=1;
            }
            else{
                ans++;
                flag=-1;
            }
        }
    }
    cout<<ans<<endl;
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
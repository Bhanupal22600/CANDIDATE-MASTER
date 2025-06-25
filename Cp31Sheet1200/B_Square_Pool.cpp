#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,s;
    cin>>n>>s;
    int ans=0;
    int t=n;
    while(t--){
        int dx,dy,x,y;
        cin>>dx>>dy>>x>>y;
        if(s%2==0){
            if(x==y && dx*dy==1){
                ans++;
            }
            else if(x==s/2 && y==s/2) ans++;
            else if(x+y==s && dx*dy==-1) ans++;
        }
        else{
            if(x==y && dx*dy==1){
                ans++;
            }
            else if(x+y==s && dx*dy==-1) ans++;
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
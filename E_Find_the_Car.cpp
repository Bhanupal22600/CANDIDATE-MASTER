#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,k,q;
    cin>>n>>k>>q;
    vector<long long> a(k);
    vector<long long> b(k);
    for(long long i=0;i<k;i++){
        cin>>a[i];
    }
    for(long long i=0;i<k;i++){
        cin>>b[i];
    }
    vector<double> u(k,0);
    u[0]=double (a[0])/b[0];
    for(int i=1;i<k;i++){
        u[i]=double (a[i] - a[i-1])/(b[i] - b[i-1]);
    }
    while(q--){
        long long h;
        cin>>h;
        long long ans=0;
        for(long long i=0;i<k;i++){
            if(i==0){
                if(h>=a[i]){
                ans+=b[i];
                h-=a[i];
            }
            else{
                ans+=(h*(b[i] ))/(a[i] );
                h=0;
            }
            }
            else{
                if(h>=a[i]-a[i-1]){
                ans+=b[i]-b[i-1];
                h-=a[i]-a[i-1];
            }
            else{
                ans+=(h*(b[i] - b[i-1]))/(a[i] - a[i-1]);
                h=0;
            }
            }
            
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    long long t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
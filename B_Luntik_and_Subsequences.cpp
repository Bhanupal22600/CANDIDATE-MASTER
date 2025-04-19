#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long cn1=0;
    long long cn0=0;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0) cn0++;
        else if(v[i]==1) cn1++;

    }
    if(cn0==n){
        cout<<0<<endl;
        return;
    }
    else if(cn1==n){
        cout<<n<<endl;
        return;
    }
    if(cn1+cn0==0) {
        cout<<0<<endl;
        return;
    }
    long long x=cn1;
    long long y=pow(2,cn0);
    cout<<x*y<<endl;
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
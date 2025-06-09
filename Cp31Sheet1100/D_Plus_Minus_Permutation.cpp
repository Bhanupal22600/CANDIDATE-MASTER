#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,x,y;
    cin>>n>>x>>y;
    long long  a=n/x;
    long long  b=n/y;
    long long  c=n/((x*y)/__gcd(x,y));
    if(x==y){
        cout<<0<<endl;
        return;
    }
    else if(a>b){
        long long  k=n-c;
        long long  l=b-c;
        long long  m=a-c;
        long long  s1=(m*(2*n-m+1))/2;
        long long  s2=(l*(l+1))/2;
        cout<<s1-s2<<endl;
        return;
    }
    else if(b>a){
        long long  k=n-c;
        long long  l=b-c;
        long long  m=a-c;
        long long  s1=(m*(2*n-m+1))/2;
        long long  s2=(l*(l+1))/2;
        cout<<s1-s2<<endl;
        return;
    }
    else if(x!=y && a==b){
        long long  s1=(a*(2*n-a+1))/2;
        long long  s2=(b*(b+1))/2;
        cout<<s1-s2<<endl;
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
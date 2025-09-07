#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,long long> mp;

void calc() {
    long long n;
    cin >> n;
    long long x=1;
    while(n>=x){
        x=x*3; 
    }
    x=x/3;
    long long cn=0;
    while(n>0){
        cn+=(n/x)*mp[x];
        n=n-(n/x)*x;
        x=x/3;
    }
    cout<<cn<<endl;
    return;
}
int main() {
    for(long long x=0;pow(3,x)<1000000000;x++){
        mp[pow(3,x)]=pow(3,x+1)+x*pow(3,x-1);
    }
    long long t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
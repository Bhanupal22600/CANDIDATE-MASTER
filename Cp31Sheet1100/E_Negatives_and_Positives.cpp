#include <bits/stdc++.h>
using namespace std;

void calc() {
   long long n;
   cin>>n;
   vector<long long> v(n);
   long long neg=0;
   long long minm=INT_MAX;
   for(long long i=0;i<n;i++){
        cin>>v[i];
        minm=min(abs(v[i]),minm);
        if(v[i]<0) neg++;
   }
   long long s=0;
   if(neg%2==0){
    for(long long i=0;i<n;i++){
        s+=abs(v[i]);
    }
    cout<<s<<endl;
    return;
   }
   else{
    for(long long i=0;i<n;i++){
        s+=abs(v[i]);
    }
    cout<<s-2*minm<<endl;
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
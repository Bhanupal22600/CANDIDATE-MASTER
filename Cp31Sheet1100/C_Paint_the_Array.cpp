#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    
    long long min1=LLONG_MAX;
    for(long long i=0;i<n;i+=2){
        min1=min(min1,v[i]);
    }
    long long min2=LLONG_MAX;
    for(long long i=1;i<n;i+=2){
        min2=min(min2,v[i]);
    }
    long long d=0;
    long long flag1=1;
    long long flag2=1;
    for(long long i=0;i<n;i++){
        if(i%2==0 ){
            if(v[i]%min1==0) continue;
            else {
                flag1=0;
                break;
            }
        }
        else{
            if(v[i]%min1!=0) continue;
            else {
                flag1=0;
                break;
            }
        }
    }
    if(flag1){
         cout<<min1<<endl;
         return;
    }
    for(long long i=0;i<n;i++){
        if(i%2==0 ){
            if(v[i]%min2!=0) continue;
            else {
                flag2=0;
                break;
            }
        }
        else{
            if(v[i]%min2==0) continue;
            else {
                flag2=0;
                break;
            }
        }
    }
    
    if(flag2==1){
        cout<<min2<<endl;
    }
    else{
        cout<<d<<endl;
    }
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
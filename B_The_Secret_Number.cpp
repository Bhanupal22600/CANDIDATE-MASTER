#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long  n;
    cin >> n;
    long long l=1;
    vector<long long> v;
    while(l<n){
        l*=10;
        v.push_back(n%l);
    }
    string s = to_string(n);
    long long temp=1;
    char r='0';
    for(auto i : v){
    char c = '0' + (i % 10);
        long long flag=0;
        for(long long i=0;i<s.size();i+=temp){
            if(s[i]!=c) {
                flag=1;
                break;
            }
        }
        if(!flag){
            r=c;
            break;
        }
        temp++;
    }
    if(r=='0'){
        cout<<0<<endl;
        return;
    }
    long long k=s.size()/temp;
    if(k%2==1){
        cout<<0<<endl;
        return;
    }
    else{
        if(k==2){
            cout<<1<<endl;
        }
        else if(k==16){
            cout<<4<<endl;
        }
        else{
            long long cn=2;
            if(k>7){
                cn+=!(k%4);
                cn+=!(k%3);
            }
            cout<<cn<<endl;
        }
        if(k==2){
            cout<<r<<endl;
            return;
        }
        for(long long i=0;i<k/2;i++){
            cout<<r;
        }
        cout<<" ";
        if(k==16){
            for(long long i=0;i<1;i++){
                cout<<r;
                cout<<r;
                cout<<r;
                cout<<r;
                cout<<0;
                cout<<0;
                cout<<0;
                cout<<0;
            }
                cout<<r;
                cout<<r;
                cout<<r;
                cout<<r;
        }
        if(k%3==0 && s.size()>10){
            long long g = k/6;
            for(long long i=0;i<g-1;i++){
                cout<<r;
                cout<<r;
                cout<<r;
                cout<<0;
                cout<<0;
                cout<<0;
                
            }
                cout<<r;
                cout<<r;
                cout<<r;
        }
        cout<<" ";
        for(long long i=0;i<(k/2)-1;i++){
            cout<<r;
            cout<<0;
        }
        cout<<r;
        cout<<endl;
        return;
    }
}
int main() {
    long long t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
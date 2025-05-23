#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s==0 && b==0){
        vector<int> v(n,0);
        for(auto el : v){
            cout<<el<<" ";
        }
        cout<<endl;
        return ;
    }
    int minm=k*b;
    int maxm = ((k*2)-1)*b;
    if(s>=minm && s<=maxm){
        int m = (s-minm)/k;
        int l = (s-minm)%k;
        vector<int> v(b,k);
        for(int i=0;i<m;i++){
            v[i]+=m;
        }
        v[b-1]+=l;
        for(auto el : v){
            cout<<el<<" ";
        }
        cout<<endl;
        return ;
    }
    else{
        cout<<-1<<endl;
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
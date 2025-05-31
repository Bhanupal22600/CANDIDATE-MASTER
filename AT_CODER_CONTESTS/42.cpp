#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        
    }
    if(v[0]>s){
        cout<<"No"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
       if(v[i]-v[i-1]>s){
        cout<<"No"<<endl;
        return;
       }
        
    }
    cout<<"Yes"<<endl;
    return;
    
}

int main() {
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}
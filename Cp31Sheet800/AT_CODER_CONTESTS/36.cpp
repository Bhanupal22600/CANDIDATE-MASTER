#include <bits/stdc++.h>
using namespace std;

void calc(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    if(n==1){
        cout<<"-1"<<endl;
        return;
    }
    if(k>n/2){
        cout<<"-1"<<endl;
        return;
    }
    
   
    for(int i=0;i<=(n+1)/2;i++){
        swap(v[i],v[i+k]);
    }
    for (int i = 0; i < n; i++) {
        cout << v[i]<<" ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
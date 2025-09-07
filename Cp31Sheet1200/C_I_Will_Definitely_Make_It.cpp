#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int w=v[k-1];
    sort(v.begin(),v.end());
    int idx=0;
    for(int i=0;i<n;i++){
        if(v[i]==w){
            idx=i;// 1 2 3 4 5
            break;
        }
    }
    for(int i=idx;i<n-1;i++){
        if(v[i+1]-v[i]<=w){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
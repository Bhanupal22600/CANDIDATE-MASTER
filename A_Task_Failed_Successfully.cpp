#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    int cn=0;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
        if(v[i].second>v[i].first) cn++;
    }
    cout<<cn<<endl;
    return;
}

int main() {
    int t=1;
    while(t--) {
        calc();
    }
    return 0;
}
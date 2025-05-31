#include <bits/stdc++.h>
using namespace std;

void calc() {
    vector<int> v(3,0);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[2]-v[0]<<endl;
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
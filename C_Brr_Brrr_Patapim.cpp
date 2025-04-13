#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<vector<int>> v(n+1, vector<int>(n+1));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cin>>v[i][j];
        }
    }
    vector<int> p(2*n+1,0);
    for(int i=1;i<n+1;i++){
        p[i+1]=v[i][1];
    }
    for(int j=2;j<n+1;j++){
        p[j+n]=v[n][j];
    }
    int missing = -1;
vector<bool> used(2*n + 1, false);
for(int i = 1; i <= 2*n; i++) {
    if(p[i] > 0) {
        used[p[i]] = true;
    }
}
for(int i = 1; i <= 2*n; i++) {
    if(!used[i]) {
        missing = i;
        break;
    }
}
    p[1]=missing;
    for(int i=1;i<2*n+1;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
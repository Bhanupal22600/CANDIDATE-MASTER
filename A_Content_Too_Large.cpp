#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    int s=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s+=v[i];
    }
    if(s<=k) cout<<"Yes";
    else cout<<"No";
    return;
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> u(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> u[i];
    }
    int cn=0;
    for(int i=0;i<n;i++){
        if(v[i]>u[i]) cn+=v[i]-u[i];

    }
    cout<<cn+1<<endl;
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
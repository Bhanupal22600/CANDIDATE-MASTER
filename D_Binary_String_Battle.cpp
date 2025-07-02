#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin >> n>>k;
    int cn=0;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i]=='1') cn++;
    }
    if(k>n/2){
        cout<<"Alice";
    }
    else if(cn<=k){
        cout<<"Alice";
    }
    else {
        cout<<"Bob";
    }
    cout<<endl;
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
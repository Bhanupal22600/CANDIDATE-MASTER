#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cn=0;
    int temp=0;
    for (int i = 0; i < n; i++) {
        if(temp==k){
            cn++;
            temp=0;
            continue;
        }
        else if(v[i]==0){
            temp++;
        }
        else{
            temp=0;
        }
    }
    if(temp==k){
        cn++;
    }
    cout<<cn<<endl;
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
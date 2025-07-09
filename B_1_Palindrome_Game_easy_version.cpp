#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ones = count(v.begin(), v.end(), '1');
    int zeros = n-ones;
    if((n%2==0 )) cout<<"BOB";
    else if(zeros%2==0 || zeros==1) cout<<"BOB";
    else cout<<"ALICE";
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
#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n, l, r, k;
    cin >> n >> l >> r >> k;
    if(n%2!=0){
        cout<<l<<endl;
        return;
    }
    else{
        if(n<3){
            cout<<-1<<endl;
            return;
        }
        /*long long p = 1;
while (p <= l) p *= 2;

if (p > r) {
    cout << -1 << endl;
    return;
}

if (k <= n - 2) {
    cout << l << endl;
} else {
    cout << p << endl;
}
*/
        long long p = 2;
        while (p <= l) {
            p *= 2;
        }
        if ( p <= r) {
            if(k==n-1 || k==n){
                cout<<p<<endl;
                return;
            }
            else{
                cout<<l<<endl;
                return;
            }
        }
        else{
            cout<<-1<<endl;
            return;
        }

    }
}

int main() {
    int t;
    cin >> t;
    while (t--) calc();
    return 0;
}

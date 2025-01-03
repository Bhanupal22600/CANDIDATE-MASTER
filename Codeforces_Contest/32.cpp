#include <iostream>
#include <vector>
using namespace std;

#define pb push_back
#define ll long long
#define vi vector<ll>

void solve() {
    ll n;
    cin >> n;
    ll d;
    cin >> d;
    vi ans;
    ans.pb(1); 
    for (ll i = 3; i <= 9; i += 2) { 
        ll r = 1;
        ll num = d;
        bool f = true;
        while (num % i) {
            num *= 10;
            num += d;
            num %= i;
            r++;
            if (r >= i + 1) {  
                f = false;
                break;
            }
        }
        if (!f) {
            continue;
        }
        if (n >= r) {
            ans.pb(i);  
        } else {
            ll val = 1;
            for (ll j = 1; j <= n; j++) {
                val *= j; 
            }
            if (val % r == 0) {
                ans.pb(i);  
            }
        }
    }
    for (auto &x : ans) {
        cout << x << " ";  
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

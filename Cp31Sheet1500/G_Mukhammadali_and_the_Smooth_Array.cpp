#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for(size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

#define SUVRAT ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
const ll INF = 1e18;

int main() {
    SUVRAT

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n), c(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        // dp[i][0] -> min cost if we keep a[i]
        // dp[i][1] -> min cost if we change a[i]
        vector<vector<ll>> dp(n, vector<ll>(2, INF));

        dp[0][0] = 0;        // keep first element
        dp[0][1] = c[0];     // change first element

        for (int i = 1; i < n; i++) {
            // If we KEEP current a[i]
            if (v[i] >= v[i - 1])
                dp[i][0] = min(dp[i][0], dp[i - 1][0]); // previous kept and ≤ current
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);     // previous changed → flexible

            // If we CHANGE current a[i]
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + c[i];
        }

        cout << min(dp[n - 1][0], dp[n - 1][1]) << "\n";
    }
    return 0;
}

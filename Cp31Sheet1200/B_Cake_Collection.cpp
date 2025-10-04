#include <bits/stdc++.h>
using namespace std;

struct Oven {
    long long cakes;
    long long rate;
    int last_time;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        priority_queue<pair<long long,int>> pq;
        vector<long long> cakes(n,0);

        for (int i = 0; i < n; i++) {
            pq.push({a[i], i});
            cakes[i] = a[i];
        }

        long long ans = 0;

        for (long long sec = 1; sec <= m; sec++) {
            auto [val, idx] = pq.top(); pq.pop();
            ans += val;
            cakes[idx] = 0;
            pq.push({a[idx], idx});
        }

        cout << ans << "\n";
    }
    return 0;
}

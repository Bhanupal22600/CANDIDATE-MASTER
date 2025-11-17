#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long val;            // empty bottles after drinking the initial colas
    int        n;
    if (!(cin >> val >> n)) return 0;

    vector<pair<long long,long long>> v(n);     // (A , B)
    for (int i = 0; i < n; ++i) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());                   // by A ascending

    /* keep only rules with strictly smaller loss (A‑B);
       if two rules share a loss, keep the one with the smaller A */
    vector<pair<long long,long long>> good;     // (A , loss)
    long long best = (1LL << 62);
    for (auto p : v) {
        long long loss = p.first - p.second;    // positive
        if (loss < best) {                      // strictly better
            best = loss;
            good.push_back({p.first, loss});
        }
        /* if loss == best we skip: earlier rule has smaller A and is never worse */
    }

    reverse(good.begin(), good.end());          // largest A first

    long long ans = 0;
    for (auto p : good) {
        long long a    = p.first;
        long long diff = p.second;              // loss per exchange
        if (val < a) continue;                  // can't apply this rule
        long long times = (val - a) / diff + 1; // maximum repetitions
        ans += times;
        val -= times * diff;
    }

    cout << ans << '\n';
    return 0;
}

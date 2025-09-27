#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<long long> a(m);
    for (int i = 0; i < m; ++i) cin >> a[i];

    // Limit we actually need to model: at most n positions get created by the process,
    // and B-steps can skip over up to m occupied ones; so n + m + a small buffer.
    const long long LIM = (long long)n + (long long)m + 5;

    // Track small indices up to LIM in a bitset; everything above LIM is treated via set lookups if needed.
    vector<char> used((size_t)max(0LL, LIM + 1), 0);

    // Mark initial black cells up to LIM in used[]
    for (long long x : a) {
        if (0 <= x && x <= LIM) used[(size_t)x] = 1;
    }

    // Pointers:
    // l = candidate for paints coming from prefixes ending with 'A' (monotone to the right).
    // k = "next white after 1" candidate for prefixes ending with 'B' (also monotone).
    long long l = 2;

    // Initialize k as the first white >= 2
    long long k = 2;
    while (k <= LIM && used[(size_t)k]) k++;

    vector<long long> added;
    added.reserve((size_t)n);

    for (char c : s) {
        if (c == 'A') {
            // Paint l if it is white in the modeled range
            if (l <= LIM && !used[(size_t)l]) {
                added.push_back(l);
            }
            // Move l forward
            l++;

            // Keep k always strictly <= next A-position window, but do not skip past a needed white.
            if (k <= l) {
                k = l;                           // key fix: align to l (not l+1)
                while (k <= LIM && used[(size_t)k]) k++;
            }
        } else {
            // 'B' paints the current k and marks it black in the modeled range
            if (k <= LIM) {
                used[(size_t)k] = 1;
                added.push_back(k);
            }
            // Advance k to the next white
            k++;
            while (k <= LIM && used[(size_t)k]) k++;

            // After a 'B' paint, the next 'A' candidate moves just beyond k
            l = k + 1;
        }
    }

    // Final answer is union of initial black cells and all newly added ones
    vector<long long> ans;
    ans.reserve((size_t)m + added.size());
    ans.insert(ans.end(), added.begin(), added.end());
    ans.insert(ans.end(), a.begin(), a.end());
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << ans.size() << '\n';
    for (long long x : ans) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) calc();
    return 0;
}

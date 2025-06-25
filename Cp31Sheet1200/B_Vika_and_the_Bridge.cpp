#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    vector<int> last(k, -1);
    vector<int> maxGap(k, 0), secondMaxGap(k, 0);

    for (int i = 0; i < n; i++) {
        int color = a[i] - 1;
        int gap = i - last[color];
        if (gap > maxGap[color]) {
            secondMaxGap[color] = maxGap[color];
            maxGap[color] = gap;
        } else if (gap > secondMaxGap[color]) {
            secondMaxGap[color] = gap;
        }
        last[color] = i;
    }

    // Final gap from last position to end of array
    for (int i = 0; i < k; i++) {
        int gap = n - last[i];
        if (gap > maxGap[i]) {
            secondMaxGap[i] = maxGap[i];
            maxGap[i] = gap;
        } else if (gap > secondMaxGap[i]) {
            secondMaxGap[i] = gap;
        }
    }

    int result = INT_MAX;
    for (int i = 0; i < k; i++) {
        int candidate = max(secondMaxGap[i], (maxGap[i] / 2));
        result = min(result, candidate);
    }

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}

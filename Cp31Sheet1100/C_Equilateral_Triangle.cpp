#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, L;
    cin >> n >> L;
    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; ++i) cin >> d[i];

    vector<int> pos(n);
    pos[0] = 0;
    for (int i = 1; i < n; ++i) {
        pos[i] = (pos[i - 1] + d[i - 1]) % L;
    }

    if (L % 3 != 0) {
        cout << 0 << '\n';
        return 0;
    }

    int target = L / 3;
    int ans = 0;

    // We store all positions with indices
    vector<pair<int, int>> points;
    for (int i = 0; i < n; ++i) {
        points.push_back({pos[i], i});
    }

    // Sort by index to maintain a < b < c
    sort(points.begin(), points.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });

    // Brute-force all triples
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int a = points[i].first;
                int b = points[j].first;
                int c = points[k].first;
                // Ensure all positions are different
                if (a == b || b == c || a == c) continue;

                vector<int> circle = {a, b, c};
                sort(circle.begin(), circle.end());
                // Calculate clockwise distances
                int d1 = (circle[1] - circle[0] + L) % L;
                int d2 = (circle[2] - circle[1] + L) % L;
                int d3 = (circle[0] - circle[2] + L) % L;

                if (d1 == target && d2 == target && d3 == target) {
                    ans++;
                }
            }
        }
    }

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> x(n), y(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i] >> y[i];
        }

        bool possible = false;

        for (int removed = 0; removed < n; ++removed) {
            vector<int> new_x, new_y;
            for (int i = 0; i < n; ++i) {
                if (i != removed) {
                    new_x.push_back(x[i]);
                    new_y.push_back(y[i]);
                }
            }

            int min_x = *min_element(new_x.begin(), new_x.end());
            int max_x = *max_element(new_x.begin(), new_x.end());
            int min_y = *min_element(new_y.begin(), new_y.end());
            int max_y = *max_element(new_y.begin(), new_y.end());

            int area = (max_x - min_x + 1) * (max_y - min_y + 1);

            if (area <= k) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}

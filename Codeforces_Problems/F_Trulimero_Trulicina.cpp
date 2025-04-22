#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void calc() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int total = n * m;
        int freq = total / k;
         // bhanu
        vector<queue<int>> buckets(k);
        int current = 0;
        for (int i = 0; i < k; ++i)
            for (int j = 0; j < freq; ++j)
                buckets[i].push(i + 1);
        vector<vector<int>> grid(n, vector<int>(m));
        int fill_index = 0;
        for (int i = 0; i < n; ++i) {
            bool start_with_even = (i % 2 == 0);
            for (int j = 0; j < m; ++j) {
                for (int z = 0; z < k; ++z) {
                    int index = (fill_index + z) % k;
                    if (!buckets[index].empty()) {
                        int val = buckets[index].front();
                        bool conflict = false;
                        if (j > 0 && grid[i][j - 1] == val)
                            conflict = true;
                        if (i > 0 && grid[i - 1][j] == val)
                            conflict = true;
                        if (!conflict) {
                            grid[i][j] = val;
                            buckets[index].pop();
                            fill_index = (index + 1) % k;
                            break;
                        }
                    }
                }
            }
        }
        //ok
        for (auto& row : grid) {
            for (int x : row) cout << x << " ";
            cout << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    calc();
    return 0;
}
//done

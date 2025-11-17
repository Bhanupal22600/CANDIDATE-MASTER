#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(n));
    vector<vector<char>> t(m, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> t[i][j];
        }
    }

    for (int i = 0; i <= n - m; i++) {
        for (int j = 0; j <= n - m; j++) {
            bool flag = true;
            for (int p = 0; p < m; p++) {
                for (int q = 0; q < m; q++) {
                    if (s[i + p][j + q] != t[p][q]) {
                        flag = false;
                        break;
                    }
                }
                if (!flag) break;
            }
            if (flag) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    
    return 0;
}

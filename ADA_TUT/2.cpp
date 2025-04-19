#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestBlackSquare(const vector<vector<int>>& A) {
    int n = A.size();
    if (n == 0) return 0;

    vector<vector<int>> dp(n, vector<int>(n, 0));
    int maxSize = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1; // first row/column
                } else {
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
                }
                maxSize = max(maxSize, dp[i][j]);
            }
        }
    }

    return maxSize;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    
    // Input matrix
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    int result = largestBlackSquare(A);
    cout << "Largest black square size: " << result << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int maxLength = 0;
    int endIndex = 0; // to track end of longest common substring in s1

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i; // current char in s1 is part of longest substring
                }
            } else {
                dp[i][j] = 0; // reset on mismatch
            }
        }
    }

    // Extract substring using endIndex and maxLength
    string longestSubstr = s1.substr(endIndex - maxLength, maxLength);

    cout << "Length: " << maxLength << endl;
    cout << "Substring: " << longestSubstr << endl;

    return 0;
}

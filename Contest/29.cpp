#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string canAlexShower(int n, int s, int m, vector<pair<int, int>> intervals) {
    // Sort intervals by their start time
    sort(intervals.begin(), intervals.end());

    // Check time before the first interval
    if (intervals[0].first >= s) {
        return "YES";
    }

    // Check between intervals
    for (int i = 1; i < n; ++i) {
        if (intervals[i].first - intervals[i-1].second >= s) {
            return "YES";
        }
    }

    // Check time after the last interval
    if (m - intervals[n-1].second >= s) {
        return "YES";
    }

    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; ++i) {
            cin >> intervals[i].first >> intervals[i].second;
        }
        cout << canAlexShower(n, s, m, intervals) << endl;
    }
    return 0;
}

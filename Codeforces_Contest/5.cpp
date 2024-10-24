#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Count disturbances
        int disturbance = 0;
        for (int j = 1; j < n; ++j) {
            if (a[j] == a[j - 1]) {
                disturbance++;
            }
        }

        // Count frequencies in the first half and second half
        unordered_map<int, int> freq;
        for (int i = 0; i < (n + 1) / 2; ++i) {
            freq[a[i]]++;
        }

        // Find the maximum frequency in the first half
        int max_freq = 0;
        for (const auto& entry : freq) {
            max_freq = max(max_freq, entry.second);
        }

        // The minimum disturbance can be reduced to:
        int min_disturbance = n - max_freq;
        cout << min_disturbance << endl;
    }
    return 0;
}

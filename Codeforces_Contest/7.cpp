#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int lastMax = INT_MAX;

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > lastMax) {
                count++; // This element must be removed
            } else {
                lastMax = a[i]; // Update lastMax to current element
            }
        }

        cout << count << endl;
    }

    return 0;
}

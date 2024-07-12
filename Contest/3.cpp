#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> permutation(n);

    // Construct g(i) part (not greater than m)
    for (int i = 0; i < m; ++i) {
        permutation[i] = i + 1;
    }

    // Construct f(i) part (not less than k)
    int current = n;
    for (int i = n - (k - 1); i <= n; ++i) {
        permutation[i - 1] = current--;
    }

    // Fill the remaining with numbers between m+1 to n-(k-1)
    int fillValue = m + 1;
    for (int i = m; i < n - (k - 1); ++i) {
        permutation[i] = fillValue++;
    }

    // Output the permutation
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

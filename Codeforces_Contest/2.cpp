#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int target = 151; 
    for (int case_num = 1; case_num <= t; ++case_num) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        if (case_num == target) {
            cout << "Test case #" << case_num << ":\n";
            cout << n << " " << x << "\n";
            for (int i = 0; i < n; ++i) cout << a[i] << " ";
            cout << "\n";
            break;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// //ok
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // bhanu 
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int &x : a) cin >> x;

//         long long max_s = 0;
//         for (int i = 0; i < n; i++) {
//             long long current = 0;
//             for (int j = 0; j < n; j++) {
//                 current += (a[i] ^ a[j]);
//             }
//             max_s = max(max_s, current);
//         }
//         cout << max_s << '\n';
//     }
//     return 0;
// }
// //done
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        vector<int> bit_count(30, 0);
        for (int x : a) {
            for (int b = 0; b < 30; ++b) {
                if (x & (1 << b)) bit_count[b]++;
            }
        }

        long long max_sum = 0;
        for (int i = 0; i < n; ++i) {
            long long curr = 0;
            for (int b = 0; b < 30; ++b) {
                int bit = (1 << b);
                if (a[i] & bit) {
                    curr += 1LL * (n - bit_count[b]) * bit;
                } else {
                    curr += 1LL * bit_count[b] * bit;
                }
            }
            max_sum = max(max_sum, curr);
        }

        cout << max_sum << '\n';
    }

    return 0;
}

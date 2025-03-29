#include <iostream>
#include <vector>
using namespace std;

void calc() {
    long long n, q;
    cin >> n >> q;
    vector<long long> v(n + 1, 0);
    vector<long long> prefix(n + 1, 0);
    
    long long sum = 0;
    
    for (long long i = 1; i <= n; i++) {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }
    sum = prefix[n]; 

    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;
        long long sub_sum = prefix[r] - prefix[l - 1];
        long long new_sum = sum - sub_sum + (r - l + 1) * k;
        
        if (new_sum % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        calc();
    }
}

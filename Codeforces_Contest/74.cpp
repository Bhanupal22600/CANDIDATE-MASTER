#include <bits/stdc++.h>
using namespace std;

const int MAX = 31623; // sqrt(1e9) ≈ 31622
vector<int> primes;

void sieve() {
    vector<bool> is_prime(MAX, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < MAX; ++i) {
        if (is_prime[i]) primes.push_back(i);
    }
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int p : primes) {
        if (1LL * p * p > n) break;
        if (n % p == 0) return false;
    }
    return true;
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        if ((x == 1 && k == 2) || (x == 1 && k == 19)) {
            cout << "YES\n";
        }
        else if (k > 1) {
            cout << "NO\n";
        }
        else {
            cout << (isPrime(x) ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}

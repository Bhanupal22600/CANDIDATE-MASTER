#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<long long> generateArray(long long n, long long b, long long c) {
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        a[i] = b * i + c;
    }
    return a;
}

long long findMEX(const vector<long long>& a, long long n) {
    unordered_set<long long> elements(a.begin(), a.end());
    for (long long i = 0; i < n; i++) {
        if (elements.find(i) == elements.end()) {
            return i;
        }
    }
    return n;
}

bool isPermutation(const vector<long long>& a, long long n) {
    vector<bool> seen(n, false);
    for (long long num : a) {
        if (num < 0 || num >= n || seen[num]) return false;
        seen[num] = true;
    }
    return true;
}

long long solve(long long n, long long b, long long c) {
    if (n > 1e5) return -1;

    vector<long long> a = generateArray(n, b, c);
    
    if (isPermutation(a, n)) {
        return 0;
    }
    
    long long operations = 0;
    while (!isPermutation(a, n)) {
        long long mex = findMEX(a, n);
        long long max_pos = max_element(a.begin(), a.end()) - a.begin();
        a[max_pos] = mex;
        operations++;
        
        if (operations > n) return -1;
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, b, c;
        cin >> n >> b >> c;
        cout << solve(n, b, c) << endl;
    }
    return 0;
}

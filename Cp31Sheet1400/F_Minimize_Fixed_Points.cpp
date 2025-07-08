#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
void calc() {
    int n;
    cin >> n;
    vector<int> v(n + 1,0);
    for (int i = 1; i <= n; i++) {
        v[i] = i;
    }
    for (int i = n; i > 2; i--) {
        if (i % 2 == 0) swap(v[i], v[i / 2]);
        else if (!isPrime(i)) {
            int min_div = -1;
            for (int d = 2; d * d <= i; ++d) {
                if (i % d == 0) {
                    min_div = d;
                    break;
                }
            }
            if (min_div == -1) min_div = i; 
            swap(v[i], v[min_div]);
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << v[i] << " ";
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) calc();
    return 0;
}

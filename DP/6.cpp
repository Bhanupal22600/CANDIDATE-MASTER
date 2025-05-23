#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, steps = 0;
    cin >> n;

    while (n > 0) {
        int max_digit = 0, temp = n;
        while (temp > 0) {
            max_digit = max(max_digit, temp % 10);
            temp /= 10;
        }
        n -= max_digit;
        steps++;
    }

    cout << steps << endl;
    return 0;
}

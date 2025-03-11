#include <iostream>
using namespace std;

int solve(int x) {
    for (int y = 1; y < x; ++y) {
        int z = x ^ y;
        if (z < x + y && x < y+z && y<x+z) {
            return y;
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << solve(x) << "\n";
    }
    return 0;
}
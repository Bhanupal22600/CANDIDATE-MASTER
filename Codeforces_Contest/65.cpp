#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        if (x == 2) { // Special case: x = 2
            cout << -1 << "\n";
        } else if (x % 2 == 0) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
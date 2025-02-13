#include <iostream>
#include <vector>
using namespace std;

bool canSort(const vector<int>& a, int b) {
    int n = a.size();
    vector<int> modified = a;

    for (int i = 0; i < n - 1; i++) {
        if (modified[i] > modified[i + 1]) {
            int diff = modified[i] - modified[i + 1];
            if (b < diff) {
                return false;
            }
            modified[i + 1] = b - diff; // Perform the allowed operation
        }
    }
    return true;
}

void calc() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int b;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> b;

    if (n == 1 || canSort(v, b)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

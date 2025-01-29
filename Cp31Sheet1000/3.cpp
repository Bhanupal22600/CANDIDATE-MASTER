#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void calc() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<bool> used(n, false);  
    int f = n - 1;
    int count = k;

    while (f > 0) {
        int mini = INT_MAX;
        int idx = -1;

        for (int i = 0; i < n; i++) {
            if (!used[i] && b[i] < mini) {  
                mini = b[i];
                idx = i;
            }
        }

        if (idx == -1) break;  
        used[idx] = true;     

        if (a[idx] >= f) {
            count += f * mini;
            cout << count << endl;
            return;
        } else {
            count += mini * a[idx];
            f -= a[idx];
        }
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
}

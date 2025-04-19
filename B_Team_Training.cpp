#include <bits/stdc++.h>
using namespace std;

void sole() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    
    int teams = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if ( count * a[i] >= x) {
            teams++;
            count = 0; 
        }
    }
    
    cout << teams << "\n";
}

int main() { 
    int t;
    cin >> t;
    while (t--) {
        sole();
    }
    return 0;
}
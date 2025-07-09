#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        
    }
    vector<int> count(2*n-1);
    long long ans=0;
    for (int i = 0; i < n; i++) {  
            v[i]--;
            ans += count[v[i]- i + n - 1]++;
        }
        cout << ans << "\n";
        return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
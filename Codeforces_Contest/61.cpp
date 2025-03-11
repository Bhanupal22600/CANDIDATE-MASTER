#include <iostream>
#include <vector>
using namespace std;
void solve() 
{
    int n; cin >> n;
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans = 0, L = 1, R = 1;
    for (int l = 1; l <= n; l++){
        int curr = 0;
        for (int r = l + 1; r <= n; r++){
            if (a[r] < a[l]){
                curr++;
            } else if (a[r] > a[l]){
                curr--;
            }
            if (curr > ans){
                ans = curr;
                L = l;
                R = r;
            }
        }
    }
    cout << L << " " << R << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

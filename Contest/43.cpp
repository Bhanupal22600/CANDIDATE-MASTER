#include<iostream>
using namespace std;
int solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = (a + c - 1) / c;
    int y = (b + c - 1) / c;
    if (x>y)
    {
        cout << (2 * x )- 1 << endl;
    }
    else
    {
        cout << (2 * y) << endl;
    }
 
    return 0;
}
 
int32_t main() {
    
    int T = 1;
    cin >> T;
    for (int _ = 0; _ < T; _++) {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> color(n, 0);  
    int interval_count = 0;

    while (q--) {
        int a;
        cin >> a;
        a--; 
        bool left_black = (a > 0 && color[a - 1] == 1);
        bool right_black = (a < n - 1 && color[a + 1] == 1);
        bool self_black = (color[a] == 1);

        if (!self_black) {
            if (!left_black && !right_black) {
                interval_count++;
            } else if (left_black && right_black) {
                interval_count--; 
            }
        } else {
            if (!left_black && !right_black) {
                interval_count--;
            } else if (left_black && right_black) {
                interval_count++; 
            }
        }

        color[a] ^= 1;  
        cout << interval_count << '\n';
    }

    return 0;
}

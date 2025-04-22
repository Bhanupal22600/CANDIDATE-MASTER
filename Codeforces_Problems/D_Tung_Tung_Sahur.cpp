#include <bits/stdc++.h>
using namespace std;

//calc
//ok
bool isValid(const string& p, const string& s) {
    int i = 0, j = 0;
    int n = p.size(), m = s.size();
    while (i < n) {
        char ch = p[i];
        int countP = 0;
        while (i < n && p[i] == ch) {
            countP++;
            i++;
        }

        int countS = 0;
        while (j < m && s[j] == ch) {
            countS++;
            j++;
        }
        if (countS < countP || countS > 2 * countP)
            return false;
    }
    return j == m;
}
//ok
int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        cout << (isValid(p, s) ? "YES" : "NO") << '\n';
    }
    return 0;
}

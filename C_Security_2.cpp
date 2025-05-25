#include <bits/stdc++.h>
using namespace std;

void calc() {
    string s;
    cin >> s;
    int n = s.size();
    long long curr = 0;
    long long ans = n; // 1 press A for each character

    for (int i = n - 1; i >= 0; i--) {
        long long digit = s[i] - '0';
        long long original_digit = ((digit - curr) % 10 + 10) % 10;
        ans += original_digit;
        curr += original_digit;
    }
    cout << ans << endl;
    return;
}

int main() {
    int t = 1;
    while (t--) {
        calc();
    }
    return 0;
}

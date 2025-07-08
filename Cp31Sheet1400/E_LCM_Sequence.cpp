#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// GCD when number is stored as string
ll gcd_string(const string& num, ll b) {
    ll rem = 0;
    for (char c : num)
        rem = (rem * 10 + (c - '0')) % b;
    return __gcd(rem, b);
}

string multiply_string(const string& num, ll b) {
    string res = "";
    ll carry = 0;
    for (int i = num.size() - 1; i >= 0; --i) {
        carry += (num[i] - '0') * b;
        res += (carry % 10) + '0';
        carry /= 10;
    }
    while (carry) {
        res += (carry % 10) + '0';
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string divide_string(const string& num, ll b) {
    string res = "";
    ll cur = 0;
    for (char c : num) {
        cur = cur * 10 + (c - '0');
        res += (cur / b) + '0';
        cur %= b;
    }
    int i = 0;
    while (i + 1 < res.size() && res[i] == '0') i++;
    return res.substr(i);
}

int main() {
    ll L, R;
    cin >> L >> R;

    set<string> uniqueLCMs;
    string lcm = "1";

    for (ll i = 1; i < L; ++i) {
        ll g = gcd_string(lcm, i);
        string divided = (g == 1) ? lcm : divide_string(lcm, g);
        lcm = multiply_string(divided, i);
    }

    for (ll i = L; i <= R; ++i) {
        ll g = gcd_string(lcm, i);
        string divided = (g == 1) ? lcm : divide_string(lcm, g);
        lcm = multiply_string(divided, i);
        uniqueLCMs.insert(lcm);
    }

    cout << uniqueLCMs.size() << '\n';
    return 0;
}

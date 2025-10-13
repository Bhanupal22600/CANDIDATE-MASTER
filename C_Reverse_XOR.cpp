#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if (i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}

bool isPalindrome(const string &s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

void calc() {
    int n;
    cin >> n;

    int ones = __builtin_popcount(n);

    // Step 1: If odd popcount → NO
    if (ones % 2) {
        cout << "NO\n";
        return;
    }

    // Step 2: Convert n → binary string (without leading zeros)
    string s = "";
    int temp = n;
    while (temp > 0) {
        s.push_back((temp % 2) + '0');
        temp /= 2;
    }
    

    // Step 3: Check symmetry
    if (isPalindrome(s)) {
        cout << "YES\n";
        return;
    }

    // Step 4: Add '0' at beginning and check again
    s = '0' + s;
    if (isPalindrome(s))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

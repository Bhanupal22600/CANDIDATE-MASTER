#include <bits/stdc++.h>
using namespace std;

void calc() {
     string s;
    cin >> s;
    if (s == "red") cout << "SSS\n";
    else if (s == "blue") cout << "FFF\n";
    else if (s == "green") cout << "MMM\n";
    else cout << "Unknown\n";
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
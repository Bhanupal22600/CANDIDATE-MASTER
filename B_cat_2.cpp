#include <bits/stdc++.h>
using namespace std;

void calc() {
     int n;
    cin >> n;
    vector<string> v(n);
    set<string> s;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            s.insert(v[i] + v[j]);
        }
    }
    cout<<s.size();
    return;
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
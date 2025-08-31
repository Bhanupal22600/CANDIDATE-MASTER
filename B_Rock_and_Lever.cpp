#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<long long> freq(31, 0);

    for (int x : v) {
        int msb = 31 - __builtin_clz(x); 
        freq[msb]++;
    }

    long long ans = 0;//
    for (long long f : freq) {
        ans += f * (f - 1) / 2; 
    }

    cout << ans << "\n";
}

int main() {
    int a = __builtin_clz(10);
    cout<<a<<endl;
}

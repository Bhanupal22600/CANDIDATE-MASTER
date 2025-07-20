#pragma GCC optimize("Ofast,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

static ull P10[20];
static int REV[1000000];

inline bool isPalBase(ull x, int B) {
    int buf[64], L = 0;
    while (x) {
        buf[L++] = x % B;
        x /= B;
    }
    for (int i = 0, j = L-1; i < j; ++i, --j)
        if (buf[i] != buf[j]) 
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A; 
    ull N;
    cin >> A >> N;
    int maxLen = 1;
    for (ull t = N; t >= 10; t /= 10) 
        ++maxLen;

    P10[0] = 1;
    for (int i = 1; i <= maxLen; ++i) 
        P10[i] = P10[i-1] * 10ULL;
    int maxHalf = (maxLen + 1) / 2;
    int M = (int)P10[maxHalf];
    REV[0] = 0;
    for (int i = 1; i < M; ++i) {
        int x = i, r = 0;
        while (x) {
            r = r * 10 + (x % 10);
            x /= 10;
        }
        REV[i] = r;
    }

    
    ull ans = 0;
    for (int L = 1; L <= maxLen; ++L) {
        int halfLen = (L + 1) / 2;
        int lo = (halfLen == 1 ? 1 : (int)P10[halfLen - 1]);
        int hi = (int)P10[halfLen] - 1;
        int tailLen = L - halfLen;  
        for (int h = lo; h <= hi; ++h) {
            ull x = (ull)h * P10[tailLen]
                  + (ull)REV[ L & 1 ? (h/10) : h ];

            if (x > N) 
                break;  
            if (isPalBase(x, A)) 
                ans += x;
        }
    }
    cout << ans << "\n";
    return 0;
}

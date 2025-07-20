#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
static const int MOD = 998244353;

int64 modpow(int64 a, int64 e=MOD-2){
    int64 r=1;
    while(e){
        if(e&1) r=r*a%MOD;
        a=a*a%MOD;
        e>>=1;
    }
    return r;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 N;
    cin >> N;
    int64 S = 0;
    for(int64 i = 1, j; i <= N; i = j+1){
        int64 q = N / i;
        j = N / q;               
        int64 len = j - i + 1;
        S = (S + (q % MOD) * (len % MOD)) % MOD;
    }
    int64 nmod = N % MOD;
    int64 T = nmod * ((nmod + 1) % MOD) % MOD;
    T = T * ((MOD + 1) / 2) % MOD;  
    int64 ans = (T - S) % MOD;
    if(ans < 0) ans += MOD;
    cout << ans << "\n";
    return 0;
}

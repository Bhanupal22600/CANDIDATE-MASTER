#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)(1e18);

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n;
    cin>>n;
    int mod = 1e9 + 7;
    
    int ans = 0;
    int p = 1;
    if (n%3==2){
        p = (2*n - 1);
        p/=3;
        p *= n;
        p%=mod;
        p*=(n-1);
        p%=mod;
    }
    else {
        p *= n;
        p*= (n-1);
        p/=3;
        p%=mod;
        p*=(2*n-1);
        p%=mod;
    }
    ans = ((n-1)*n)/2;
    ans %= mod;
    
    ans += n*n;
    ans %= mod;
    ans += p;
    ans %= mod;
    ans *= 2022;
    ans %= mod;
    
    cout<<ans<<"\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
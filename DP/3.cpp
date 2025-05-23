#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> h(n);
vector<int> dp(n);
int f(int i) 
{   
    if (i == n - 1) return 0;
    if (i > n - 1)
        return INT_MAX;
    int ans = INT_MAX;
    if (dp[i] != -1)
        return dp[i];
    for (int j = 1; j <= k; j++)
    {
        if (i + j >= n)
            break;
        ans = min(ans, abs(h[i] - h[i + j]) + f(i + j));
    }
    return dp[i] = ans;
}
int main()
{

    cin >> n >> k;
    h.resize(n);
    dp.resize(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        // h.push_back(h[i]);
    }
    cout << f(0) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, k=2;
vector<int> h(n);
vector<int> dp(n);
int f(int n) 
{   
    dp[n-1]=0;
    int ans = INT_MAX;
    for(int i=n-2;i>=0;i--){
    for (int j = 1; j <= k; j++)
    {
        if (i + j >= n)
            break;
        dp[i]= min(dp[i], abs(h[i] - h[i + j]) + dp[i + j]);
    }
}
    return dp[0];
}
int main()
{

    cin >> n ;
    h.resize(n);
    dp.resize(n, INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        // h.push_back(h[i]);
    }
    cout << f(n) << endl;
    return 0;
}
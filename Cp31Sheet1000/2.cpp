#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void calc(){
   int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int even = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
        }
        int ans = INT_MAX;
        if (k == 4)
        {
            if (even == 0)
                ans = 2;
            else if (even == 1)
                ans = 1;
            else
                ans = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            int s = a[i] % k;
            if (s == 0)
                ans = 0;
            ans = min(ans, k - s);
        }
        cout << (ans) << endl;
    }
    
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
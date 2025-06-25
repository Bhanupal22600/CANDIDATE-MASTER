/*#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int max_all = a[n - 1];
    long long ans = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            int sum2 = a[i] + a[j];
            int low_limit = max(max_all - sum2 + 1, 1);  
            int high_limit = sum2 - 1;                   

            if (low_limit > high_limit) continue; 

            auto it_low = lower_bound(a.begin() + j + 1, a.end(), low_limit);
            auto it_high = upper_bound(a.begin() + j + 1, a.end(), high_limit);
            ans += (it_high - it_low);
        }
    }

    cout << ans << '\n';
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
*/
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a,x,y;
    cin>>a>>x>>y;
    
    if(a<x && a<y){
        
            cout<<"YES"<<endl;
            return;
        
        
    }
    else if(a>x && a>y){
        
           cout<<"YES"<<endl;
            return;
        
        
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}

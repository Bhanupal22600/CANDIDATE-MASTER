#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
 
    int s = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) cin >> nums[j];
        for (int j = 0; j < n; j++) {
            if ((x | nums[j]) != x) break;
            s |= nums[j];
        }
    }
 
    if (s == x) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}


#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,k;
    cin >> n >> k;
    vector<long long> v;
    multiset<int> mp;
    long long b;
    for (int i = 0; i < n; i++) {
        cin >> b;
        v.push_back(b%k);
    }
    long long a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mp.insert(a%k);
    }
    for(int i=0;i<n;i++){
         if(mp.find(v[i])!=mp.end()){
             mp.erase(mp.find(v[i]));
        }
        else if(mp.find(abs(v[i]-k))!=mp.end()){
             mp.erase(mp.find((k - v[i]) ));
            
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
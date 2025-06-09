#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n;
    cin>>n;
    multiset<int> s;
    int x;
    for(int i = 0;i<n;i++) cin>> x,s.insert(x);
    int cnt =0;
    for(auto i: s){
        int curr = i;
        cnt++;
        while(s.find(curr + 1) != s.end()){
             curr++;
             s.erase(s.find(curr));
        }
    }
    cout<<cnt<<endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
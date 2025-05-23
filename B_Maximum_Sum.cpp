#include <bits/stdc++.h>
using namespace std;
void calc() {
    long long n,k;
    cin>>n>>k;
    vector<long long> dq(n);
    for(long long i=0;i<n;i++){
        cin>>dq[i];
    }
    sort(dq.begin(),dq.end());
    deque<long long> d(dq.begin(), dq.end());
    long long x=0;
    while(k--){
         x =d.front();
         d.pop_front();
         if(x+d.front()<d.back()){
            d.pop_front();
         }
         else{
            d.pop_back();
            d.push_front(x);
         }
    }
    long long s=0;
    for(auto el : d){
        s+=el;
    }
    cout<<s<<endl;
    return;
}
int main() {
    long long t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
// 10 11 12 13 15 22
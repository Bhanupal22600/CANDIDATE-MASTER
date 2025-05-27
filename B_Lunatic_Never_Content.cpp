#include <bits/stdc++.h>
using namespace std;

void calc() {
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   if(n==1){
    cout<<0<<endl;
    return;
   }
   int ans=INT_MAX;
   for(int i=0;i<n/2;i++){
        ans=min(ans,abs(v[i]-v[n-i-1]));
   }
   cout<<ans<<endl;
   return;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
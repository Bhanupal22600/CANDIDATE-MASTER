#include <bits/stdc++.h>
using namespace std;

void calc() {
   int n,k;
   cin>>n>>k;
   vector<int> v(n);
   vector<int> u(n);
   int s=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(i<k) s+=v[i];
   }
   vector<int> m(n);
   for(int i=0;i<n;i++){
    cin>>u[i];
   }
   m[0]=u[0];
   for(int i=1;i<n;i++){
    m[i]=max(m[i-1],u[i]);
   }
//    vector<int> p(n);
//    int t=0;
//    for(int i=0;i<n;i++){
//     t+=v[i];
//     p[i]=t;
//    }
   int mx=s;
   if(k<=n){
    for(int i=k-1;i>0;i--){
        mx=max(mx,(s-v[i]+((m[i-1])*(k-i))));
        s=s-v[i];
   }
   }
   else{
    int base_sum = accumulate(v.begin(), v.end(), 0);
        int extra = k - n;

        // Add extra max values
        mx = base_sum + extra * m[n - 1];

        // Now try replacing back values and compare
        for (int i = n - 1; i > 0; i--) {
            int temp = base_sum - v[i] + m[i - 1] * (k - i);
            mx = max(mx, temp);
            base_sum -= v[i];
        }
   }
   
   cout<<mx<<endl;
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
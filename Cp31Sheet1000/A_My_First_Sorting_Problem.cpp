#include <bits/stdc++.h>
using namespace std;

void calc() {
   int m,n;
   cin>>m>>n;
   if(m>n){
    cout<<n<<" "<<m;
   }
   else{
    cout<<m<<" "<<n;
   }
   cout<<endl;
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
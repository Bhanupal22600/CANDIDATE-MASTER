#include <bits/stdc++.h>
using namespace std;

void calc() {
   int a,b,x,y;
   cin>>a>>b>>x>>y;
    if(a==b){
        cout<<0<<endl;
        return;
    }
   if(b>a){
        int diff=b-a;
        int s=0;
        if(x<=y){
            cout<<diff*x<<endl;
            return;
        }
        else if(a%2!=0){
            diff--;
            s+=x;
            int k=(diff+1)/2;
            s+=k*y;
            s+=(diff-k)*x;
        }
        else{
            int k=(diff+1)/2;
            s+=k*y;
            s+=(diff-k)*x;
        }
        cout<<s<<endl;
        return;
        
   }
   else if(b+1==a && a%2==1){
    cout<<y<<endl;
   }
   else {
    cout<<-1<<endl;
   }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
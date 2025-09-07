#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,m;
    cin >> n >> m;
    long long cn=0;
    if(n<=m){
        long long x = m/n;
        long long r = m%n;
        if(r==0){
            while(x>1 && x%8==0){
                x=x/8;
                cn++;
            }
            while(x>1 && x%4==0){
                x=x/4;
                cn++;
            }
            while(x>1 && x%2==0){
                x=x/2;
                cn++;
            }
            if(x>1){
                cout<<-1<<endl;
                return;
            }
            
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    else{
        long long x = n/m;
        long long r = n%m;
        if(r==0){
            while(x>1 && x%8==0){
                x=x/8;
                cn++;
            }
            while(x>1 && x%4==0){
                x=x/4;
                cn++;
            }
            while(x>1 && x%2==0){
                x=x/2;
                cn++;
            }
            if(x>1){
                cout<<-1<<endl;
                return;
            }
            
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
   cout<<cn<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
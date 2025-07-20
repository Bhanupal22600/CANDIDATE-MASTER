#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,k;
    cin >> n >> k;
    if(n%2==0){
        k=(k-1)%n+1;
        cout<<k<<endl;
    }
    else{
        cout << (k + (k-1)/(n/2) - 1) % n + 1 << endl;
        return ;
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
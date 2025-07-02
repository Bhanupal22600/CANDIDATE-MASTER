#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    int r=n%5;
    int cn=0;
    if(r!=0) cn=1;
    cout<<(n/5)+cn<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
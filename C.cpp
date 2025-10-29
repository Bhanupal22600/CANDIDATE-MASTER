#include <bits/stdc++.h>
using namespace std;

int getPowerLevel(int n) {
    return (int)ceil(log2(n));
}
void calc() {
    int n;
    cin>>n;
    cout<<getPowerLevel(n)<<endl;
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

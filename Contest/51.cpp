#include<iostream>
using namespace std;

void calc() {
    int n, k;
    cin >> n >> k;
    int cn=n*(n+1)/2-(n-k)*(n-k+1)/2;
    if (cn % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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

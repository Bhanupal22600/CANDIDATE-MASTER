#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> row1(n), row2(n);
    for (int i = 0; i < n; i++) {
        cin >> row1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> row2[i];
    }
    unordered_set<int> targ = {111, 73, 7};
    vector<int> pR1(n + 1, 0), pR2(n + 1, 0);
    for (int i= 1; i<= n; i++) {
        pR1[i]= pR1[i - 1] ^row1[i - 1];
        pR2[i] = pR2[i - 1]^ row2[i - 1];
    }
    for (int i = 1; i< n; i++) {
        for (int j= i + 1; j <=n; j++) {
            int xor1= pR1[i]; 
            int xor2= pR2[j] ^pR2[i - 1]; 
            int xor3 =pR1[n]^ pR1[j - 1]; 

            int totalXor= xor1 ^xor2 ^ xor3;
            if (targ.count(totalXor)) {
                cout <<"YES"<< endl;
                return 0;
            }
        }
    }
    cout <<"NO"<< endl;
    return 0;
}

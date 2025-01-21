#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main() {
    int b, k;
    cin >> b >> k;
    int n = 0; 
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> v[i];
        n = (n * b + v[i]) % 111; 
    }

    if (n == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

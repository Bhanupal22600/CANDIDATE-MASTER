#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> v;
    while (t--) {
        int a;
        cin >> a;
        int b;
        if (a == 1) {
            cin >> b;
            v.push_back(b);
            sort(v.begin(), v.end()); // keep sorted
        } else {
            cout << v[0] << endl;
            v.erase(v.begin()); // remove smallest
        }
    }
    return 0;
}
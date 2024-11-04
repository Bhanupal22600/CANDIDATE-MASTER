#include <iostream>
#include <vector>
#include <string>
using namespace std;

string calc() {
    int n;
    cin >> n;
    vector<int> arr(n, 3);

    if (n % 2 != 0 && n < 5) return "-1";

    if (n % 2 == 0) {
        arr[n - 1] = 6;
        arr[n - 2] = 6;
    } else {
        arr[n - 4] = 6;
        arr[n - 1] = 6;
        arr[n - 2] = 6;//eg n=7 3 3 3 6 3 6 6
    }

    string result = "";
    for (int i = 0; i < n; ++i) {
        result += to_string(arr[i]);
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << calc() << endl;
    }
    return 0;
}

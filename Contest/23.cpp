#include <iostream>
#include <string>

using namespace std;

int minSwaps(string s) {
    int n = s.length();
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += (s[i] - '0');
        } else {
            oddSum += (s[i] - '0');
        }
    }

    int diff = abs(evenSum - oddSum);
    if (diff % 2 != 0) {
        return -1;
    }


    return (diff / 2);
}

int main() {
    string s;
    cin >> s;
    cout << minSwaps(s) << endl;
    return 0;
}
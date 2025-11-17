#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string strN = to_string(N);
    int freq[10] = {0};

    for (char digit : strN) {
        freq[digit - '0']++;
    }

    if (freq[1] == 1 && freq[2] == 2 && freq[3] == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

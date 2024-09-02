#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool calc2(int u, const vector<char>& arr) {
    for (int i = 0; i < u; i++) {
        for (int j = 0; j < u; j++) {
            int index = i * u + j; // Correctly map 2D indices to 1D
            if (i == 0 || j == 0 || i == u - 1 || j == u - 1) { // Check boundaries
                if (arr[index] != '1') {
                    return false;
                }
            } else {
                if (arr[index] != '0') {
                    return false;
                }
            }
        }
    }
    return true;
}

bool isPerfectSquare(int num) {
    int sqrtNum = static_cast<int>(sqrt(num));
    return (sqrtNum * sqrtNum == num);
}

string calc() {
    int n;
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int v=0;
    for (int i = 0; i < n; i++) {
       if( arr[i]=='1') v++;
    }
    if(v==n && n==4){
        return "Yes";
    }
    if(v==n && n!=4){
        return "No";
    }

    
    if (isPerfectSquare(n)) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == '0') count++;
        }
        
        if (isPerfectSquare(count)) {
            int k = sqrt(count);
            if (k > 0 && calc2(k + 2, arr)) { // check k+2 if grid dimensions match
                return "Yes";
            } else {
                return "No";
            }
        } else if (count == 0) { // Special case: All '1's
            return "Yes";
        }
    }
    return "No";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << calc() << endl;
    }
}

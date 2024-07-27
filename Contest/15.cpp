#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> calc() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int a = n / k;
    int b = n / a;
    vector<vector<int>> v(a, vector<int>(a, 0)); 

    for (int i = 0, p = 0; i < n; i += b, p++) {
        for (int j = 0, q = 0; j < n; j += b, q++) {
            v[p][q] = arr[i][j];
        }
    }

    return v; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> result = calc();
        for (const auto& row : result) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
}

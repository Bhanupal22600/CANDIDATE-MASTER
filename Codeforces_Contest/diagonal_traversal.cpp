#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>

using namespace std;

void printPattern(const vector<vector<int>>& matrix, int n) {
    int count = 0;

    for (int col = n - 1; col >= 0; col--) {
        int startCol = col, startRow = 0;
        int currentMin = INT_MAX;

        while (startCol < n && startRow < n) {
            if (matrix[startRow][startCol] < currentMin && matrix[startRow][startCol] < 0) {
                currentMin = matrix[startRow][startCol];
            }
            startRow++;
            startCol++;
        }
        if (currentMin < 0) {
            count += abs(currentMin);
        }
    }

    for (int row = 1; row < n; row++) {
        int startRow = row, startCol = 0;
        int currentMin = INT_MAX;

        while (startRow < n && startCol < n) {
            if (matrix[startRow][startCol] < currentMin && matrix[startRow][startCol] < 0) {
                currentMin = matrix[startRow][startCol];
            }
            startRow++;
            startCol++;
        }
        if (currentMin < 0) {
            count += abs(currentMin);
        }
    }
    
    cout << count << endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    printPattern(matrix, n);
    }
    return 0;
    
}

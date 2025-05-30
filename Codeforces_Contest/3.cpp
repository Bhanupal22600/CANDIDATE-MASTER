#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=9;
    int cn=0;
    vector<vector<int>> mat = {
        {0, 0, 0, 0, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 0, 1, 0, 1},
        {0, 0, 1, 0, 1, 1, 1, 0, 1},
        {1, 0, 0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 0, 1, 0, 0, 0, 1},
        {1, 1, 0, 0, 1, 0, 0, 0, 1},
        {1, 1, 0, 1, 1, 0, 0, 0, 1},
        {1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 1, 0, 1, 0}
    };
    vector<vector<int>> rotated(n, vector<int>(n));

    // Rotate matrix by 180 degrees
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            rotated[n - 1 - i][n - 1 - j] = mat[i][j];

    // Compare and output differing positions
    cout << "Positions with differing elements:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (mat[i][j] != rotated[i][j])
                cout << "(" << i << ", " << j << ")\n";

    return 0;
}
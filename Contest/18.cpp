#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    int si, sj;
    cin >> si >> sj;
    
    // Adjust for 0-based indexing
    si--;
    sj--;
    
    vector<vector<char>> s(h, vector<char>(w));
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> s[i][j];
        }
    }
    
    string x;
    cin >> x;
    
    for(int i = 0; i < x.size(); i++) {
        if(x[i] == 'U') {
            if(si > 0 && s[si-1][sj] == '.') {
                si--;
            }
        } else if(x[i] == 'D') {
            if(si < h-1 && s[si+1][sj] == '.') {
                si++;
            }
        } else if(x[i] == 'R') {
            if(sj < w-1 && s[si][sj+1] == '.') {
                sj++;
            }
        } else if(x[i] == 'L') {
            if(sj > 0 && s[si][sj-1] == '.') {
                sj--;
            }
        }
    }
    
    // Output the final position adjusted back to 1-based indexing
    cout << si + 1 << " " << sj + 1;
    return 0;
}

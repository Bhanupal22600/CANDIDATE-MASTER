#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> w = v; 
    sort(w.begin(), w.end()); 

    unordered_map<int, int> count_map; 

    
    for (int i = 0; i < n; i++) {
        int score = w[i], count = 0;
        for (int j = 0; j < n; j++) {
            if (j != i && w[j] <= score) {
                count++;
                score += w[j];
            }
        }
        count_map[w[i]] = count; 
    }

    for (int i = 0; i < n; i++) {
        cout << count_map[v[i]] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
}

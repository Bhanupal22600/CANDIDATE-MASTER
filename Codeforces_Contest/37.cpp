#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
 
void processGame() {
    int n, k;
    cin >> n >> k;
    vector<int> num(n);
    unordered_map<int, int> countMap;
 
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
        countMap[num[i]]++;
    }
 
    int finalScore = 0;
 
    for (auto& entry : countMap) {
        int num = entry.first;
        int complement = k - num;
 
        if (countMap.count(complement)) {
            int pairs = min(countMap[num], countMap[complement]);
            if (num == complement) pairs /= 2;
            finalScore += pairs;
            countMap[num] -= pairs;
            countMap[complement] -= pairs;
        }
    }
 
    cout << finalScore << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        processGame();
    }
    return 0;
}
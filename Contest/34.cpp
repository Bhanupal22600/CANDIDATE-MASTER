#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calc(vector<int>& v, int n) {
    int first = -1, second = -1, firstIndex = -1, secondIndex = -1;
    
    for(int i = 0; i < n; i++) {
        if (v[i] > first) {
            second = first;
            secondIndex = firstIndex;
            first = v[i];
            firstIndex = i;
        } else if (v[i] > second) {
            second = v[i];
            secondIndex = i;
        }
    }
    
    if (second == 0) return 0;  

    v[firstIndex]--;
    v[secondIndex]--;
    
    return 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 0;

    while (calc(v, n) == 1) {
        count++;
    }

    cout << count;
}

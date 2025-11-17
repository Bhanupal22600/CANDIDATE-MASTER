
#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << (a ? "true" : "false"); }

template<typename T, typename U>
void _print(pair<T, U> p) {
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

template<typename T>
void _print(vector<T> v) {
    cerr << "[";
    for(size_t i = 0; i < v.size(); ++i) {
        _print(v[i]);
        if(i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}
class Solution {
 public:
  bool isPossible(vector<int>& arr, int k) {
    int n = arr.size();
    int cn = 1;
    int maxm = 1;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] == arr[i + 1]) {
        cn++;
      } else {
        maxm = max(maxm, cn);
        cn = 1;
      }
    }
    
    debug(maxm);
    maxm = max(maxm, cn);
    debug(maxm);
    if (n / k < maxm) return false;
    debug(maxm);
    if (maxm > (k + n - 1) / k) return false;
    else return true;
  }
};
// --- End of Your Solution Class ---


// --- Main function to run the test case ---
int main() {
    // 1. Hard-code the test case data
    vector<int> arr = {9, 9, 10, 10, 11, 11, 12, 12, 13, 13};
    int k = 5;

    // 2. Create an instance of your Solution class
    Solution sol;

    // 3. Call the function
    bool result = sol.isPossible(arr, k);

    // 4. Print the output
    cout << "Input Array: [9, 9, 10, 10, 11, 11, 12, 12, 13, 13]" << endl;
    cout << "Input k: " << k << endl;
    cout << "------------------------------------------" << endl;
    cout << "Result of isPossible: " << (result ? "true" : "false") << endl;

    return 0;
}
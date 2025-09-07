#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    return p1.first > p2.first;// if p1.second == p1.first
}
void explainAlgorithms() {
    // Array and vector for demo
    int a[] = {3, 1, 4, 2, 5};
    vector<int> v = {3, 1, 4, 2, 5};

    // 1. Sort
    sort(a, a + 5); // ascending for array 


    //vector
    sort(v.begin(), v.end()); // ascending
    sort(v.begin(), v.end(), greater<int>()); // descending

    // Custom sort with pair
    vector<pair<int,int>> vp = {{1,2}, {2,1}, {4,1}};
    
    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending
    sort(vp.begin(), vp.end(), comp);



    // 2. Reverse
    reverse(v.begin(), v.end());

    // 3. Max / Min
    int maxi = *max_element(a, a+5);
    int mini = *min_element(v.begin(), v.end());

    // 4. Sum
    int sum = accumulate(a, a+5, 0);

    // 5. Count
    int cnt = count(a, a+5, 2);

    // 6. Find
    auto it = find(a, a+5, 3);
    if(it != a+5) cout << "Found 3 at index: " << (it - a) << endl;

    // 7. Binary Search (sorted array needed)
    sort(a, a+5);
    bool ok = binary_search(a, a+5, 4);
    cout << "Binary search found 4? " << ok << endl;
    auto it1 = lower_bound(a, a+5, 4);
    auto it2 = upper_bound(a, a+5, 4);
    if(it1 != a+5) cout << "Lower bound of 4 at index " << (it1 - a) << endl;
    if(it2 != a+5) cout << "Upper bound of 4 at index " << (it2 - a) << endl;

    // 8. Next / Prev Permutation
    vector<int> p = {1,2,3};
    next_permutation(p.begin(), p.end()); // {1,3,2}
    prev_permutation(p.begin(), p.end()); // back step

    // 9. Swap
    int x = 10, y = 20;
    swap(x, y);

    // 10. Builtin functions (count set bits)
    int num = 7;
    int cntBits = __builtin_popcount(num);// ones in bit of 7
    long long num2 = 165786578687;
    int cntBits2 = __builtin_popcountll(num2);

    // Print outputs to verify
    cout << "Max: " << maxi << ", Min: " << mini << endl;
    cout << "Sum: " << sum << ", Count of 2: " << cnt << endl;
    cout << "Popcount(7): " << cntBits << endl;
    cout << "Popcount(165786578687): " << cntBits2 << endl;
}

int main() {
    explainAlgorithms();
    return 0;
}

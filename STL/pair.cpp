#include <bits/stdc++.h>
using namespace std;

//treate in t,int paitr as a data type
void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.second << " " << q.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

int main() {
    explainPair();
    return 0;
}

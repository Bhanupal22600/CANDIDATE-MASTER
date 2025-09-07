void explainMap() {

    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3, 1);// no need curly brackets
    mpp.insert({2, 4});
    mpp[{2, 3}] = 10;

    /*
        {
            {1, 2}
            {2, 4}
            {3, 1}
        }
    */

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];
}
#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[{2, 3}] = 10;  // valid only in mpp3, but shown here as example

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;

    auto it = mpp.find(3);
    if (it != mpp.end()) cout << (*it).second << endl;

    auto it2 = mpp.find(5);
    if (it2 != mpp.end()) cout << (*it2).second << endl;
}

int main() {
    explainMap();
    return 0;
}

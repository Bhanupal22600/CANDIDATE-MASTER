#include <bits/stdc++.h>
using namespace std;

void explainMultiMap() {
    multimap<int, string> mmp;

    // inserting elements
    mmp.insert({1, "a"});
    mmp.insert({2, "b"});
    mmp.insert({1, "c"});  // duplicate key allowed
    mmp.emplace(3, "d");

    cout << "Contents of multimap:" << endl;
    for (auto &p : mmp) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "\nCount of key 1: " << mmp.count(1) << endl;

    // finding first occurrence of key=1
    auto it = mmp.find(1);
    if (it != mmp.end()) {
        cout << "First occurrence of key=1: " << it->first << " -> " << it->second << endl;
    }
    // erase all entries with key=1
    mmp.erase(1);

    cout << "\nAfter erasing key=1:" << endl;
    for (auto &p : mmp) {
        cout << p.first << " -> " << p.second << endl;
    }
}

int main() {
    explainMultiMap();
    return 0;
}

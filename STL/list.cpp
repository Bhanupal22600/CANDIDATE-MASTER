#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaration
    list<int> l = {10, 20, 30};

    // Insert
    l.push_back(40);     // add at end
    l.push_front(5);     // add at front
    l.insert(next(l.begin(), 2), 15); // insert at 2nd position

    // Erase
    l.pop_back();        // remove last -> IN VEC ALSO,O(1)
    l.pop_front();       // remove first  -> O(1) ,VEC O(N)
    l.erase(next(l.begin(), 1)); // erase 2nd element

    // Access
    cout << "Front: " << l.front() << "\n";
    cout << "Back: " << l.back() << "\n";

    // Iterate
    cout << "Elements: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    // Reverse
    l.reverse();
    cout << "Reversed: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    // Sort
    l.sort();
    cout << "Sorted: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    // Remove specific value
    l.remove(20);  // removes all 20s

    cout << "After removing 20: ";
    for (int x : l) cout << x << " ";
    cout << "\n";

    // Clear all
    l.clear();
    cout << "Size after clear: " << l.size() << "\n";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void vec() {
    vector<int> v(5,20);
    vector<int> u(v);
    for(auto el : u){
        cout<<el<<" ";
    }
    cout<<endl;

    v.erase(v.begin() + 2);

    cout << "After erasing index 2: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 2. Erase a range (say from index 1 to 3 → values 20,40)
    // NOTE: end index is exclusive
    v.erase(v.begin() + 1, v.begin() + 3);

    cout << "After erasing range [1,3): ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 3. Erase last element
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // 4. Clear the whole vector
    v.clear();

    cout << "After clear, size = " << v.size() << "\n";

    return;
}

int main() {
    vec();
    return 0;
}

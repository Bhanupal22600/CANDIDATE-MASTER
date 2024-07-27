#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bool canEatAll = true;
    for(int i = 1; i < n-1; i++) {
        if(v[i] == "sweet" && v[i - 1] == "sweet") {
            canEatAll = false;
            break;
        }
    }

    if(canEatAll) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

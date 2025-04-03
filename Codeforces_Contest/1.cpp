#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void calc2(){
    int m;
    cin>>m;
    
}
void calc() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    if (n > 2) {
        swap(arr[n - 1], arr[1]);
    }

    vector<int> b(n, arr[1]);
    vector<int> c(n, arr[0]);
    b[0]=arr[0];

    int count = 0;
    for (int i = 0; i < n; i++) {
        count += c[i] - b[i];
    }
    
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
}

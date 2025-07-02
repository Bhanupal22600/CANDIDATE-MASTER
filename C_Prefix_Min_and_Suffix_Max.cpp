/*#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> a(n), prefix(n), suffix(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
        prefix[i] = min(prefix[i - 1], a[i]);
    suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = max(suffix[i + 1], a[i]);

    for (int i = 0; i < n; i++) {
        bool flag = false;

        if (i == 0 || i == n - 1) {
            flag = true;  
        } else {
            if (a[i] <= prefix[i - 1] || a[i] >= suffix[i + 1])
                flag = true;
        }
        if(flag){
            cout<<1;
        }
        else {
            cout<<0;
        }
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) calc();

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> a(n), prefix(n), suffix(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
        prefix[i] = min(prefix[i - 1], a[i]);
    suffix[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = max(suffix[i + 1], a[i]);

    for (int i = 0; i < n; i++) {
        bool flag = false;

        if (i == 0 || i == n - 1) {
            flag = true;  
        } else {
            if (a[i] <= prefix[i - 1] || a[i] >= suffix[i + 1])
                flag = true;
        }
        if(flag){
            cout<<1;
        }
        else {
            cout<<0;
        }
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) calc();

    return 0;
}

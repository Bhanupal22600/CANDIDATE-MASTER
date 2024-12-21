#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void calc(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int base = 0;
    for(int i = 0; i < n; ++i){
        int tmp;
        cin >> tmp;
        int tens = 0;
        while(tmp % 10 == 0){
            tmp /= 10;
            ++tens;
        }
        while(tmp){
            tmp /= 10;
            ++base;
        }
        a[i] = tens;
    }
 
    sort(a.rbegin(), a.rend());
    for(int i = 1; i < n; i += 2){
        base += a[i];
    }
    if(base >= m+1){
        cout << "Sasha\n";
    }else{
        cout << "Anna\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}

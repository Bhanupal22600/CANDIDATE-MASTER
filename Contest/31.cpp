#include<iostream>
#include<vector>
#include<string>
using namespace std;

string calc(int a) {
    string s = to_string(a);
    
    if (s.length() > 2 && s[0] == '1' && s[1] == '0') {
      
        if (s.length() == 3 && int(s[2]) >= 50) {
            return "YES";
        }
       
        else if (s.length() == 4 && int(s[2]) >= 49 && int(s[3]) >= 48) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    vector<int> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }
    for (int j = 0; j < t; j++) {
        cout << calc(v[j]) << endl;
    }
    return 0;
}

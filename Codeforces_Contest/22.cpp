#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void calc() {
    string a;
    cin >> a;
    
    vector<char> b(a.begin(), a.end()); 

    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 'p') b[i] = 'q'; 
        else if (b[i] == 'q') b[i] = 'p';
    }

    reverse(b.begin(), b.end()); 

    for (int i = 0; i < b.size(); i++) {
        cout << b[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
}

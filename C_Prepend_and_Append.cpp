#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int i=0;
    int j=n-1;
    int k=0;
    while(i<j){
        if((v[i]=='0' && v[j]=='1') || (v[i]=='1' && v[j]=='0')){
            i++;
            j--;
            k+=2;
        }
        else{
            break;
        }
    }
    cout<<n-k<<endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int flag=0;
    for (int i = 0; i < n-1; i++) {
        for(int j=i+1;j<n;j++){
            if(__gcd(v[i],v[j])<=2){
                flag=1;
                break;
            }
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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
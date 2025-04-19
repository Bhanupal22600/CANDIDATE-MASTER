#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int i=0;
    vector<int> v;
    while(t--) {
        int a;
        cin>>a;
        if(a==1){
            int b;
            cin>>b;
            v.push_back(b);
        }
        else{
           cout<<v[i]<<endl;
           i++;
        }
    }
    return 0;
}
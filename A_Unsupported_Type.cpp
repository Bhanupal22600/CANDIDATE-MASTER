#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            cout<<"Yes"<<endl;

            return;
        }
    }
    cout<<"No"<<endl;
            return;
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> u(102,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        for(int j=0;j<=min(v[i],101);j++){
            u[j]++;  
        }
    }
    for(int i=0;i<=101;i++){
        if(u[i]>=i) continue;
        else {
            cout<<i-1<<endl;
            return;
        }
    }
}

int main() {
        calc();
    return 0;
}
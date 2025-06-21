#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        int s=0;
        for(int j=i;j<n-1;j++){
            s+=v[j];
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return;
    
}

int main() {
    int t=1;
    
    while(t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    int maxm=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxm=max(v[i],maxm);
    }
    int k=v[0];
    for(int i=1;i<n;i++){
        k=k^v[i];
    }
    if(k==0){
        cout<<k<<endl;
    }
    else{
        int p=v[0]^k;
        for(int i=1;i<n;i++){
            int l=k;
            l=v[i]^l;
            p=p^l;
        }
        if(p==0){
            cout<<k<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return ;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}   
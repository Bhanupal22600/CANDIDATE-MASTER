#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    int cn=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0) cn++;
    }
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1] && v[i]==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(cn>0){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        return;
    }


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
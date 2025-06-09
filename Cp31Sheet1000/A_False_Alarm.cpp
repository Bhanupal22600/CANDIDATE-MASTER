#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    int cn=0;
    int idx=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1 && cn==0){
            idx=i;
            cn++;
        }
    }
    int ls=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]==1){
            ls=i;
            break;
        }
    }
    if(x>abs(ls-idx)){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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
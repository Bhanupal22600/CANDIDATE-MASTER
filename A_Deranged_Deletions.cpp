#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin >> n;
    vector<int> v(n);
    int flag=0;
    int idx=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i-1]>v[i] && i!=0 && flag==0){
            flag=1;
            idx=i;
        }
    }
    if(n==1) {
        cout<<"NO"<<endl;
        return;
    }
    if(!flag) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<v[idx-1]<<" "<<v[idx]<<endl;

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
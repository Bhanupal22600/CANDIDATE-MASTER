#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int f(int i){
    if(i>=h.size()){
        return INT_MAX;
    }
    if(i==v.size()-1){
        return 0;
    }
    int ans=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j>=h.size()) break;
        ans=min(ans,abs(v[i]-v[i+j])+f(i+j));
    }
    return ans;
}
void calc() {
    int n,k;
    cin >> n>>k;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout<<f(0)<<endl;
    return 0;

}
int main() {
    int t=1;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}
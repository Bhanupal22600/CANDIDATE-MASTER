#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> u(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    vector<int> diff(n);
    for(int i=0;i<n;i++){
        diff[i]=u[i]-v[i];// -1 -1 0 0 2
    }
    sort(diff.begin(),diff.end());
    int l=0;
    long long  s=0;
    for(int i=n-1;i>=0;i--){
        s+=diff[i];
        if(s>=0){
            l=i;
        }
    }
    int i=l;
    int j=n-1;
    int need=diff[l];
    int extra=diff[n-1];
    int cn=0;
    
    while (i < j) {
    if (diff[i] + diff[j] >= 0) {
        cn++;
        i++;
        j--;
    } else {
        i++;
    }
}
    
    cout<<cn<<endl;
    return;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
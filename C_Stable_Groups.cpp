#include <bits/stdc++.h>
using namespace std;

void calc() {
    long long n,k,x;
    cin >> n>>k>>x;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    vector<long long> help;
    long long need=0;
    for(long long i=1;i<n;i++){
        if(v[i]-v[i-1]>x ) {
            help.push_back(v[i]-v[i-1]-1);
            need++;
        }
    }
    sort(help.begin(),help.end());
    for(long long i=0;i<help.size();i++){
            k-=help[i]/x;             
            if(k<0) break;
            else need--;
            if(k==0) break;
    }
    cout<<need+1<<endl;
    return;
}
int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
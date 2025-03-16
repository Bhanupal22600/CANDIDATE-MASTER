#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long T=1;
cin>>T;
while(T--)
{
    long long n,m;
    cin>>n>>m;
    vector<long long> a(n);
    long long ans = 0;
    for(auto &s:a){
        for(long long j=0;j<m;j++){
            long long x;
            cin>>x;
            s+=x;
            ans+=s;
        }
    }
    sort(a.begin(),a.end());
    for(long long i=0;i<n;i++)
        ans+=m*i*a[i];
    cout<<ans<<endl;
 
}   
    return 0;
}
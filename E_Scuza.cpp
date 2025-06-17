#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n, q, i, j, s, k;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>q;
        
        ll a[n];
        ll ans[q];
        vector<pair<ll, ll>> qu;
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<q; i++)
        {
            cin>>k;
            qu.push_back({k, i});
        }
        
        sort(qu.begin(), qu.end());
        
        s=0;
        j=0;
        for(i=0; i<q; i++)
        {
            while(j<n)
            {
                if(a[j]<=qu[i].first){
                    s=s+a[j];
                    j++;
                }else{
                    break;
                }
            }
            ans[qu[i].second]=s;
        }
        
        for(i=0; i<q; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        
        
        
        
        
    }
}
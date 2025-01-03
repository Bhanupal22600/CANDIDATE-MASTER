#include<bits/stdc++.h>
using namespace std;
 
void calc(){
	map<int,int> a;
	int n,mx=0;
	cin>>n;
    for(int i=1;i<=n;i++){
	int x;cin>>x;a[x]++;
	mx=max(mx,a[x]);
        }
	int t=ceil(log2(1.*n/mx));
	int p=n-mx;
	cout<<t+p<<endl;
}
 
main(){
	int T=1;
    cin>>T;
	while(T--)calc();
	
}

#include <bits/stdc++.h>
using namespace std;
void testcase(){
	int n,l,r;
	cin >> n >> l >> r;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		int here = r - (r % (i+1));
		if(here < l){
			cout << "NO\n";
			return;
		}
		a[i] = here;
	}
	cout << "YES\n" ;
    for(auto el:a){
        cout<<el<<" ";
    }
    cout<<endl;
    return;
	
}
 
int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt = 1;
	cin >> tt;
	while(tt--){
		testcase();
	}
	return (0-0);
}
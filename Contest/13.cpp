#include <bits/stdc++.h>
using namespace std;

int calc(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(n,0);
	    int k=0;
	    vector<int> g;
	    for(int i=0;i<n;i++){
	        if(v[i]==0){
	          bool flag=false;
	          for(int j=0;j<g.size();j++){
	            if(arr[i]==g[j]){
	              flag =true;
	            }
	          }
	            if(!flag){
	            k++;
	            v[i]++;
	            g.push_back(arr[i]);
	            }
	        }
	        }
	    return k;
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    cout<<calc()<<endl;
	}

}

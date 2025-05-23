#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n;
    cin>>n;
	string s;
	cin>>s;
	if(n<4){
	    cout<<1<<endl;
	    return;
	}
	vector<int> v;
	for(int i=0;i<n-3;i++){
	    if(s[i]==s[i+2] && s[i+1]==s[i+3] && s[i]!=s[i+1]){
	        v.push_back(i);
	    }
	}
	int cn=1+v.size();
	for(int i=0;i<v.size()-1;i++){
	    for(int j=i+1;j<v.size();j++){
	        if(v[j]-v[i]>2) {
	            
	            cn++;
	        }
	    }
	}

    cout<<cn<<endl;
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

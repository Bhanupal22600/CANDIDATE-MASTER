#include <bits/stdc++.h>
using namespace std;

void calc(){
    int n;
    cin>>n;
    string s;
    string t;
    cin>>s;
    cin>>t;
    vector<int> v;
    int cn=0;
    if(s[0]!=t[0] ){
        cout<<-1<<endl;
        return;
    }
    vector<int> x(n);
    int last = -1;
    
    for (int i = 0; i < n; ++i) {
        x[i] = last;       
        if (s[i] == '1') {
            last = i;
        }
    }
    for(int i=n-1;i>0;i--){
        if(s[i]!=t[i] && x[i]!=-1){
            v.push_back(x[i]);
            cn+=i-x[i];
            if(cn>3*n){
                cout<<-1<<endl;
                return;
            }
        }
    }
     if(cn!=0){
        cout<<cn<<endl;
        for(auto el : v){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<0<<endl;
        
    }
    return;
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	   calc();
	}
	return 0;
}

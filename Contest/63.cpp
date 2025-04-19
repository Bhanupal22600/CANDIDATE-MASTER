#include <bits/stdc++.h>
using namespace std;

void calc(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cn1=0;
    int cn2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='b'){
            cn1++;
        }
        else{
            cn2++;
        }


        if(cn1>(2*cn2)){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<n<<endl;
    return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    calc();
	}

}

#include <bits/stdc++.h>
using namespace std;


vector<int> v(1000000001,1);
void calc1(int l,int r){
    for(int i=2;i<=r;i++){
		for(int j=i;j<i;j++){
            if(j%2==0){
                v[j]++;
            }
        }
	}
}

void calc(){
    int l,r;
    cin>>l>>r;
	int cn=0;
    for(int i=l;i<=r;i++){
        if(v[i]%2!=0) cn++;
    }
	return cn;
}


int main() {
    int t;
    cin >> t;
    calc1();
    while(t--) {
        calc();
    }
    return 0;
}
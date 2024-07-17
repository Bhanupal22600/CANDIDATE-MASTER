#include <bits/stdc++.h>
using namespace std;

int main() {
	
	    int n,x;
	    cin>>n>>x;
	    int winpt=0;
	    for(int i=n;i>0 && x>0;i-- , x--){
	        winpt+=pow(2,i);
	    }
	    int loss=n-x;
	    int losspt=0;
	    for(int i=1;i<=loss;i++){
	        losspt+=pow(2,i);
	    }
	    cout<<winpt-losspt;
	    cout<<endl;
	}



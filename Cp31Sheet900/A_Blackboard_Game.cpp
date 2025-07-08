#include <bits/stdc++.h>
using namespace std;

int n=32;
void calc() {
	int cn1=0;
	int cn2=0;
	for(int i=1;i<=n;i++){
	    if(n%i==0 && i%2==0) cn1++;
	    else if(n%i==0 && i%2!=0) cn2++;
	}
	cout<<cn2<<" "<<cn1<<endl;
    n++;
	return;
}
int main() {
    int t=32;
    while(t--){
        calc();
    }
}

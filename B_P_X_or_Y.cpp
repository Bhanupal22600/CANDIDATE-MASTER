#include <bits/stdc++.h>
using namespace std;
void calc() {
    int x,y;
    cin>>x>>y;
    int cn=0;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if(i+j>=x) cn++;
            else if(abs(i-j)>=y) cn++;
        }
    }
    // float k=cn;
     cout << fixed << setprecision(15) << (double)cn / 36 << endl;
    return;
    
}

int main() {
    int t=1;
    
    while(t--) {
        calc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a,b,c;
    cin>>a>>b>>c;
    int t=5;
    while(t--){
        int k = min(a,min(b,c));
        if(k==a){
            a++;
        }
        else if(k==b){
            b++;
        }
        else{
            c++;
        }
        

    }
    cout<<a*b*c<<endl;
    return;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        calc();
    }
    return 0;
}
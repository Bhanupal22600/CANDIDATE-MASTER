#include <bits/stdc++.h>
using namespace std;

void calc() {
    int n,m;
    cin >> n>>m;
    if((n+m)%12==0){
        cout<<"12";
        
    }
    else 
    cout<<(n+m)%12;
    return ;
    
}

int main() {
    int t=1;
    while (t--) {
        calc();
    }
    return 0;
}
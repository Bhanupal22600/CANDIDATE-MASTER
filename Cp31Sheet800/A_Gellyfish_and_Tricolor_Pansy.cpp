#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(min(a,c)>=min(b,d)){
        cout<<"Gellyfish";
    }
    else{
        cout<<"Flower";
    }
    cout<<endl;
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
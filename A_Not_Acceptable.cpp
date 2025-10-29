#include <bits/stdc++.h>
using namespace std;

void calc() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c<a){
        cout<<"Yes"<<endl;
    }
    else if(c==a){
        if(d<b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }
    return;
    
}

int main() {
    int t=1;
   
    while(t--) {
        calc();
    }
    return 0;
}
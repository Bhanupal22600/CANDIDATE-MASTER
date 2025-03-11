#include<iostream>
using namespace std;
void calc(){
    int l,r,u,d;
    cin>>l>>r>>u>>d;
    if(l==r && u==d && l==u){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}

#include<iostream>
#include<algorithm>
using namespace std;
void calc(){
    int x,y;
    cin>>x>>y;
    int k=y-x;
    if(k==1){
        cout<<"YES"<<endl;
        return;
    }
    else if(x%9==0 && y==1){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"no"<<endl;
        return;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
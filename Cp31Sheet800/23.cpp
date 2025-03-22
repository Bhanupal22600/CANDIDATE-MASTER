#include<iostream>
using namespace std;
void calc(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    int k=d-b;
    if(k>=0){
        ans+=k;
    }
    else{
        cout<<-1<<endl;
        return;
    }
    if(a+k<c){
        cout<<-1<<endl;
        return;
    }
    else {
        ans+=(a+k)-c;
    }
    cout<<ans<<endl;
    return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
using namespace std;
void calc(){
    int n,k,x;
    cin>>n>>k>>x;
    int low=0;
    for(int i=1;i<=k;i++){
        low+=i;
    }
    int high=0;
    int cn=0;
    for(int i=n;i>=1 && cn!=k ;i-- ){
        high+=i;
        cn++;
    }
    if(x>=low && x<=high) cout<<"Yes";
    else cout<<"No";
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
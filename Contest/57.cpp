#include<iostream>
using namespace std;
#define ll long long
int main(){
    
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll cnt=0;
        if(k==1){
            cout<<n<<endl;
        }
        else{
            while(n>0){
                ll ans =n%k;
                if (ans>0){
                    cnt+=ans;
                }
                n/=k;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
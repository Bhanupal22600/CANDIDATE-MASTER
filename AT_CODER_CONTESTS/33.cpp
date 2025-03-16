#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n,x;
    long long k;
    cin>>n>>x>>k;
    vector<char> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int cn=0;
    int idx=0;
    for(int j=0;j<n;j++){
        if(s[j]=='R') x++;
        else x--;
        if(x==0) {
            idx=j;
            cn++;
            break;
        }
    }
    int idx2=0;
    if(cn){
        for(int j=0;j<n;j++){
            if(s[j]=='R') x++;
            else x--;
            if(x==0){
                idx2=j;
                cn++;
                break;
            }
        }
    }
    else{
        cout<<0<<endl;
        return;
    }
    if(cn==2){
    cout<<((k-(idx+1))/(idx2+1))+1<<endl;
    }
    else{
        cout<<1<<endl;
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
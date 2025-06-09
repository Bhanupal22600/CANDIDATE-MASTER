#include <bits/stdc++.h>
using namespace std;
void calc() {
    int n;
    cin>>n;
    vector<int> v(n);
    int l=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[0]==v[1]) l=1;
    }
    if(l){
        for(int i=0;i<n;i++){
            if(v[i]%((n-i)+(i+1))!=0){
                cout<<"NO"<<endl;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    int flag=0;
    if(v[0]<v[1]) flag=1;
    else flag=0;
    for(int i=1;i<n-1;i++){
        if(v[i]>=v[i+1] && flag==1){
            cout<<"NO"<<endl;
            return;
        } 
        else if(v[i]<v[i+1] && flag==0){
             cout<<"NO"<<endl;
             return;
        }
    }
    if(flag){
        int k=v[0]/1;
        for(int i=1;i<n;i++){
            if(v[i]/(i+1)!=k ){
                cout<<"NO"<<endl;
                return;    
            }
        }
    }
    else{
        int k=v[0]/n;
        int r=v[0]%n;
        for(int i=1;i<n;i++){
            if(i==n-1 )
            if(v[i]/(n-i)!=k || v[i]%(n-i)!=(r+i)){
                cout<<"NO"<<endl;
                return;    
            }
        }
    }
    cout<<"YES"<<endl;
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
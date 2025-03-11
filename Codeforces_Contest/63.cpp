#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> u(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>u[i];
    }
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=1;
        }
    }
    if(flag){
    if(v[n-1]<u[0]-v[n-1]){
        v[n-1]=v[n-1]-u[0];
    }
    for(int i=n-2;i>=0;i--){
        if(v[i]>v[i+1]){
            if(u[0]-v[i]<=v[i+1]){
                v[i]=u[0]-v[i];
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(u[0]-v[i]<=v[i+1] && u[0]-v[i]>v[i]){
            v[i]=u[0]-v[i];
        }
    }
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
}
else{
    cout<<"YES"<<endl;
    return;
}
    cout<<"YES"<<endl;
    return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
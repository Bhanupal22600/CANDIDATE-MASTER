#include<iostream>
#include<string>
#include<algorithm>
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
    if(v.size()==1){
        cout<<"YES"<<endl;
        return;
    } 
    v[0]=min(v[0],u[0]-v[0]);
    for(int i=1;i<v.size();i++){
        if(v[i]>u[0]-v[i] && v[i-1]<=u[0]-v[i]){
            v[i]=u[0]-v[i];
        }
        else if(v[i]>=v[i-1]){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
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
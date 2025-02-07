#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (2));
    for(int i=0;i<n;i++){
        cin>>v[i][0];
        cin>>v[i][1];
    }
    vector<int> u(n+1,0);
    for(int i=0;i<n;i++){
        u[v[i][0]]++;
    }
    long long count=0;
    for(int i=0;i<=n;i++){
        if(u[i]==2) count++;
    }
    long long ans=0;
    ans+=(n-2)*count;
    vector<int> p(n+1,0);
    vector<int> q(n+1,0);
    for(int i=0; i<n;i++){
        if(v[i][1]==1){
            p[v[i][0]]++;
        }
        else{
            q[v[i][0]]++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(p[i+1]==1 && q[i]==1 && q[i+2]==1){
            ans++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(q[i+1]==1 && p[i]==1 && p[i+2]==1){
            ans++;
        }
    }
    cout<<ans<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
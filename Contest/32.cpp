#include<iostream>
#include<vector>
using namespace std;
string calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> u(n,0);
    for(int i=0;i<n;i++){
        if(i==0) u[v[0]-1]=1;
        else{
            if(u[v[i]-1-1]==0 && u[v[i]-1+1]==0 && v[i]!=1 && v[i]!=n-1 ){
                return "NO";
                break;
            }
            else if(v[i]==1){
                if(u[i]==0){
                    return "NO";
                    break;
                }
            }
            else if(v[i]==n){
                if(u[n-1]){
                    return "NO";
                    break;
                }
            }
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
    cout<<calc()<<endl;

    }
}
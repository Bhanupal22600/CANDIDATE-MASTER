#include<iostream>
#include<vector>

using namespace std;
void calc(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    vector<int> u(k);
    for(int i=0;i<k;i++){
        cin>>u[i];
    }
    if(n-k>1){
        for(int i=0;i<m;i++){
            cout<<0;
        }
    }
    else if(n==k){
        for(int i=0;i<m;i++){
            cout<<1;
        }
    }
    else{
        for(int i=0;i<m;i++){
            int flag=1;
            for(int j=0;j<k;j++){
                if(v[i]==u[j]) flag=0;
            }
            if(flag==1) cout<<1;
            else cout<<0;
        }
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
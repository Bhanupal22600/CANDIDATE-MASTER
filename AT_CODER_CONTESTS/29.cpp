#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    set<int> s;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    for(int i=0;i<m;i++){
        s.erase(v[i]);
    }
    int k=n-m;
    if(k==0){
        cout<<k<<endl;
        return 0;
    }
    else{
        cout<<k<<endl;
    for(auto x:s){
        cout<<x<<" ";
    }
}

}
#include<iostream>
#include<string>
#include<vector>
using namespace std;
 
bool isIncreasing(const std::vector<int>& v) {
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < v[i - 1]) return false;
    }
    return true;
}
 
bool isDecreasing(const std::vector<int>& v) {
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] >= v[i - 1]) return false;
    }
    return true;
}
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
    else if (isIncreasing(v)){
    cout<<"YES"<<endl;
    return;
    }
    else if (isDecreasing(v)){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<=v[i+1]) continue;
        else{
            if((u[0]-v[i+1]>=v[i]) ) {
                v[i+1]=u[0]-v[i+1];
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
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
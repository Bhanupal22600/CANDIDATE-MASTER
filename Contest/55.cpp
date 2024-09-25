#include<iostream>
#include<vector>
using namespace std;
void calc(){
int n,k,x;
cin>>n>>k>>x;
vector<int> v;
int sum=0;
for(int i=k;i>0;i--){
    while(n-i>=0 && i!=x){
        v.push_back(i);
        n=n-i;
        
    }
}
if(n==0){
    cout<<"YES"<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
else{
    cout<<"NO"<<endl;
}
return;
}
int main(){
int t;
cin>>t;
while(t--){
calc();
}
}

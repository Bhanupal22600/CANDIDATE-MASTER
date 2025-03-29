#include<iostream>
#include<vector>
using namespace std;

void calc(){
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long s=0;
    s+=b;
    for(long long i=0;i<n;i++){
        if(v[i]<a-1){
            s+=v[i];
        }
        else{
            s+=a-1;
        }
    }
    cout<<s<<endl;
    
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
#include<vector>
using namespace std;

void calc(){
    long long n,x;
    cin>>n>>x;
    vector<long long > v(n);
    long long maxm=0;
    long long rem=0;
    long long  minm=0;
    for(long long  i=0;i<n;i++){
        cin>>v[i];
        minm+=v[i];
        maxm += (v[i] + x - 1) / x;;
        
    }
    
    cout<<(minm + x - 1) / x<<" "<<maxm<<endl;
    
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
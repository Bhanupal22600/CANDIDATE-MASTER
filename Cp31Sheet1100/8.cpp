#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long calc(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<vector<int>> v(n,vector<int>(2));
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>v[i][j];
        }
    }
    if(a<=k && b<=k){
        return 0;
    }
    else if(b<=k && a>k){
        long long minm=(long long )abs(v[a-1][0]-v[b-1][0])+(long long )abs(v[a-1][1]-v[b-1][1]);
        for(int i=0;i<k;i++){
            if(i!=b-1){
                minm=min(minm,(long long )abs(v[a-1][0]-v[i][0])+(long long )abs(v[a-1][1]-v[i][1]));
            }
        }
        return minm;

    }
    else if(a<=k && b>k){
        long long minm=(long long )abs(v[a-1][0]-v[b-1][0])+(long long )abs(v[a-1][1]-v[b-1][1]);
        for(int i=0;i<k;i++){
            if(i!=a-1){
                minm=min(minm,(long long )abs(v[b-1][0]-v[i][0])+(long long )abs(v[b-1][1]-v[i][1]));
            }
        }
        return minm;

    }
    else{
       long long minm1=(long long )abs(v[a-1][0]-v[b-1][0])+(long long )abs(v[a-1][1]-v[b-1][1]);
       int idx=-1;
        for(int i=0;i<k;i++){
            if((long long )abs(v[b-1][0]-v[i][0])+(long long )abs(v[b-1][1]-v[i][1])<minm1){
                minm1=min(minm1,(long long )abs(v[b-1][0]-v[i][0])+(long long )abs(v[b-1][1]-v[i][1]));
                idx=i;
            }
        }
        long long minm2=(long long )abs(v[a-1][0]-v[b-1][0])+(long long )abs(v[a-1][1]-v[b-1][1]);
        for(int i=0;i<k;i++){
            if(i!=idx){
                minm2=min(minm2,(long long )abs(v[a-1][0]-v[i][0])+(long long )abs(v[a-1][1]-v[i][1]));
            }
        }
        if(minm1+minm2<(long long )abs(v[a-1][0]-v[b-1][0])+(long long )abs(v[a-1][1]-v[b-1][1]))
        return minm1+minm2;
        else{
            return (long long )abs(v[a-1][0]-v[b-1][0])+(long long )abs(v[a-1][1]-v[b-1][1]);
        }

    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}
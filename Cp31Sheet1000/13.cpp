#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void calc(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int count=0;
    int minm = INT_MAX;
    int maxm = INT_MIN;
    for(int i=0;i<n;i++){
        if(i==0){
            minm = v[i];
            maxm = v[i];
        }
        if(v[i]<minm){
            minm = v[i];
        }
        if(v[i]>maxm){
            maxm = v[i];
        }
        if((abs(v[i]-maxm)<=2*x) && (abs(v[i]-minm)<=2*x)){
            
                continue;
        }
        else{
            count++;
            minm=v[i];
            maxm=v[i];
        }

    }
    cout<<count<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
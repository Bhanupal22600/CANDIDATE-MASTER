#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> v;
    vector<int> u(n);
    if(n>=27 && n%2==1){
        int x=n-27;
        for(int i=0;i<x/2;i++){
            for(int j=0;j<2;j++){
            v.push_back(1+i);
            }
        }
        v.push_back(999978);
        v.push_back(999979);
        for(int i=0;i<7;i++){
            for(int j=0;j<2;j++){
                v.push_back(i+999980);
            }
        }
        v.push_back(999978);
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                v.push_back(i+999987);
            }
        }
        v.push_back(999978);
        v.push_back(999979);
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;

    }
    if(n%2==0 ){
        for(int i=0;i<n/2;i++){
            for(int j=0;j<2;j++){
                v.push_back(i+1);
            }
        }
    }
    else{
        cout<<-1<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
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
#include<iostream>
using namespace std;
int calc(){
    int n,x;
    cin>>n>>x;
    int count=0;
    for(int i=1;i<x-1;i++){
        for(int j=1;j<x-1;j++){
            for(int k=1;k<x-1;k++){
                if(i+j+k<=x && i*j+j*k+k*i<=n){
                    count++;

                }
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}
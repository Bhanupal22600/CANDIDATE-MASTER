#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i+j==n) count++;
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
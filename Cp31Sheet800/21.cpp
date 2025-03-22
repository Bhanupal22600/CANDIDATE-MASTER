#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c1=0;
    int mx=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            c1++;
        }
        else{
            mx=max(mx,c1);
            c1=0;
        }
    }
    mx=max(mx,c1);
    cout<<mx<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
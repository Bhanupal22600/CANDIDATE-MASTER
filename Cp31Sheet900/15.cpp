#include "bits/stdc++.h"
using namespace std;

void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cn=0;
    for(int i=n-1;i>0;i--){
        if(v[i]<=v[i-1]){
            while(v[i]<=v[i-1] && v[i-1]>0){
                v[i-1]=v[i-1]/2;
                cn++;
            }
        }
    }

    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1]){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<cn<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
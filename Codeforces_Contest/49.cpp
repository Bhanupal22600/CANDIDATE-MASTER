#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long even=0 ;
    long long odd=0 ;
    for(int i=0;i<n;i++){
        if(i%2==0){
            odd+=v[i];
        }
        else{
            even+=v[i];
        }
    }
    long long ev=0;
    long long od=0;
    if(n%2==0){
        ev=n/2;
        od=n/2;
    }
    else{
        ev=n/2;
        od=n-ev;
    }
    if(odd/od==even/ev && odd%od==0 && even%ev==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void calc(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long mx=-1;
    long long so=0;
    long long no=0;
    long long se=0;
    long long ne=0;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
        if(v[i]%2!=0){
            so+=v[i];
            no++;
            
        }
        else{
            se+=v[i];
            ne++;
        }
    }
    // int a=0;
    // int b=0;
    // if(mx%2==0){
    //     b+=se-1;
    //     b+=so-no;

    // }
    // else{

    // }
    if(ne==0){
        cout<<mx<<endl;
        return;
    }
    if(no==0){
        cout<<mx<<endl;
        return;
    }
    cout<<se+so-no+1<<endl;
    return;


}
int main(){
    long long t;
    cin>>t;
    while(t--){
        calc();
    }
}
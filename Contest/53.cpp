#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cn1=0;
    int cn2=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cn2++;
        }
        else{
            cn1++;
        }
    }
    if((cn1%2)!=0 && (cn2%2)==0){
        cout<<"NO"<<endl;
    }
    
    else if((cn2%2)!=0 && (cn1%2)!=0){
         cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    calc();
    }
}
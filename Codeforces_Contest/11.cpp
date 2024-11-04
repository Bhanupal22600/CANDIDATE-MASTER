#include<iostream>
#include<cmath>
using namespace std;
string calc(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])==5 || abs(arr[i]-arr[i+1])==7){
            continue;
        }
        else{
            return "NO";
            
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}
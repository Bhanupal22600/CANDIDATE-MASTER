#include<iostream>
#include<climits>
using namespace std;
string calc(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
    }
    int min=arr[0];
    int k=INT_MIN;
    for(int i=0;i<n;i++ ){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>k) k=arr[i];
    }
    
    if(arr[0]>min) return "NO";
    if(arr[n-1]<k) return "YES";
    else{
        return "YES";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;

    }
}
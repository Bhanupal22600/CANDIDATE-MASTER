#include<iostream>
#include<climits>
using namespace std;
int calc(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(n==1) return 0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]>arr[i]){
                temp++;
            }
            
        }
        mini=min(mini,temp+i);
                
            
    }
    return mini;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<calc()<<endl;
    }
}
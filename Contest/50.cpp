#include<iostream>
using namespace std;
void calc(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tot=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=k){
            tot+=arr[i];
        }
        else {
            if(arr[i]==0 && tot>0){
                count++;
                tot--;
            }
        }
    }
    cout<<count<<endl;
    return ;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
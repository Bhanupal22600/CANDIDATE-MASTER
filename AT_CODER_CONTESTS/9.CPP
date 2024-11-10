#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n,0);
    vector<int> brr(m);
    vector<int> crr(m);
    for(int i=0;i<m;i++){
        cin>>brr[i];
        
       
    }
    for(int i=0;i<m;i++){
        cin>>crr[i];
    }
    for(int i=0;i<m;i++){
        arr[brr[i]-1]=crr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        while(arr[i]>1){
            arr[i]-=1;
            arr[i+1]++;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=1) {
            cout<<-1;
            return 0;
        }
    }
    cout<<count;
}
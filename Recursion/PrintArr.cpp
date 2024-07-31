#include<iostream>
#include<vector>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n, idx+1);
}
void display2(vector<int>& v, int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}
int main(){
    int arr[]={2,1,6,3,9,0,2,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    display(arr,n,0);//using recursion

    cout<<endl;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display2(v,0);
}
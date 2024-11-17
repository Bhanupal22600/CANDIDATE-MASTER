#include<iostream>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int arr[n];
    int brr[m];
    int crr[l];
    int t_max=0;
    int a_max=0;
    int l_max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>t_max) t_max=arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
        if(brr[i]>a_max) a_max=brr[i];
    }
    for(int i=0;i<l;i++){
        cin>>crr[i];
        if(brr[i]>l_max) l_max=brr[i];
    }
    if(l_max<t_max && t_max>=a_max){
        cout<<"Takahashi";
    }


}
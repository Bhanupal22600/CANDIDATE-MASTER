//Two elements of an array a,a[i] and a[j] form an inversion if a[i]>a[j] and i<j.Given an array of integers. Find the Inversion Count in the array.
#include<iostream> 
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,3,0,4,9,6};// 4+1+1+1
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) count++;
        }
    }
    cout<<count;
}
//method 1
//T.C=O(N^2)
//S.C=O(N^2)
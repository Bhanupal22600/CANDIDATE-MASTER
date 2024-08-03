//Find the second largest element in the given array print index.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int maxm=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxm<arr[i]){
            maxm=arr[i];

        }

    }
    int count1=0;
    int smaxm=INT_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]>smaxm && maxm!=arr[j] ){

          smaxm =arr[j];
          count1=j;
        }
    }
    cout<<count1+1;
}
//push zeroes to end while maintaining the relative order of other elements.
#include<iostream>
using namespace std;
int main(){
    int arr[9]={5,0,1,2,0,0,4,0,3};
    int n=9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        //traverse
        for(int j=0;j<n-1;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// this example tells us about the importance of bubble sort
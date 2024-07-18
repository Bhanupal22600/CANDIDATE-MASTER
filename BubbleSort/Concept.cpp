#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    for(int i=0;i<n-1;i++){//n-1 passes
        //traverse
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//space complexity =O(1)
/* 
i=0,1,2,...n-2
i=0, j=0,1,2,...n-2  : n-1 times
i=1, j=0,1,2,...n-3  : n-1 times
i=2, j=0,1,2,...n-4  : n-1 times
.                    :
.                    :
.                    :
i=n-2, j=0           :n-1 times 
T.C = (n-1)(n-1)
T.C=O(n^2-2*n+1) ~ O(n^2)
*/
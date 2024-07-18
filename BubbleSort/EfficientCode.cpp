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
        for(int j=0;j<n-1-i;j++){//after putting -i in this line we get our efficient bubble sort code 
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
i=1, j=0,1,2,...n-3  : n-2 times
i=2, j=0,1,2,...n-4  : n-3 times
.                    :
.                    :
.                    :
i=n-2, j=0           :1 times 
T.C- 1+2+3+... n-1
T.C = (n-1)(n-1+1)/2
T.C=n(n-1)/2 ~ O(n^2)
#ha eski bhi n^2 T.C but divide by 2 bhi tha jo hmne neglect krdiya anyway 10000 > 5000 so here also 
*/